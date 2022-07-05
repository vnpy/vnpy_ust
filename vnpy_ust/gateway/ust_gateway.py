from datetime import datetime
from typing import Dict, List, Tuple
from pathlib import Path

from vnpy.event import EventEngine
from vnpy.trader.constant import (
    Direction,
    Offset,
    Exchange,
    OrderType,
    Status,
)
from vnpy.trader.gateway import BaseGateway
from vnpy.trader.object import (
    OrderData,
    TradeData,
    PositionData,
    AccountData,
    ContractData,
    OrderRequest,
    CancelRequest,
    SubscribeRequest,
)
from vnpy.trader.utility import get_folder_path, ZoneInfo
from vnpy.trader.event import EVENT_TIMER
from vnpy_nsq.gateway import NsqMdApi

from ..api import (
    TdApi,
    HS_CID_CNY,
    HS_EI_SSE,
    HS_EI_SZSE,
    HS_CT_Limit,
    HS_CT_MarketFAK,
    HS_CT_Market5FAK,
    HS_OD_Buy,
    HS_OD_Sell,
    HS_OS_NotReported,
    HS_OS_ToBeReported,
    HS_OS_Reported,
    HS_OS_ReportedToBeCancel,
    HS_OS_PartsTradedToBeCancel,
    HS_OS_CanceledWithPartsTraded,
    HS_OS_Canceled,
    HS_OS_PartsTraded,
    HS_OS_Traded,
    HS_OS_Abandoned,
    HS_OS_CancelFailed,
    HS_OS_ConfirmedToBeCancel,
    HS_OS_Confirmed,
    HS_OS_ToBeConfirmed
)


# 委托状态映射
STATUS_UST2VT: Dict[str, Status] = {
    HS_OS_NotReported: Status.SUBMITTING,
    HS_OS_ToBeReported: Status.SUBMITTING,
    HS_OS_Reported: Status.SUBMITTING,
    HS_OS_ReportedToBeCancel: Status.CANCELLED,
    HS_OS_PartsTradedToBeCancel: Status.CANCELLED,
    HS_OS_CanceledWithPartsTraded: Status.CANCELLED,
    HS_OS_Canceled: Status.CANCELLED,
    HS_OS_PartsTraded: Status.PARTTRADED,
    HS_OS_Traded: Status.ALLTRADED,
    HS_OS_Abandoned: Status.REJECTED,
    HS_OS_CancelFailed: Status.ALLTRADED,
    HS_OS_ConfirmedToBeCancel: Status.CANCELLED,
    HS_OS_Confirmed: Status.NOTTRADED,
    HS_OS_ToBeConfirmed: Status.SUBMITTING
}

# 多空方向映射
DIRECTION_VT2UST: Dict[Direction, int] = {
    Direction.LONG: HS_OD_Buy,
    Direction.SHORT: HS_OD_Sell
}
DIRECTION_UST2VT: Dict[int, Direction] = {v: k for k, v in DIRECTION_VT2UST.items()}

# 委托类型映射
ORDERTYPE_VT2UST: Dict[Tuple, int] = {
    (Exchange.SSE, OrderType.LIMIT): HS_CT_Limit,
    (Exchange.SZSE, OrderType.LIMIT): HS_CT_Limit,
    (Exchange.SSE, OrderType.MARKET): HS_CT_Market5FAK,
    (Exchange.SZSE, OrderType.MARKET): HS_CT_MarketFAK,
}
ORDERTYPE_UST2VT: Dict[int, Tuple] = {v: k for k, v in ORDERTYPE_VT2UST.items()}

# 交易所映射
EXCHANGE_UST2VT: Dict[str, Exchange] = {
    HS_EI_SSE: Exchange.SSE,
    HS_EI_SZSE: Exchange.SZSE
}
EXCHANGE_VT2UST: Dict[str, Offset] = {v: k for k, v in EXCHANGE_UST2VT.items()}

# 其他常量
CHINA_TZ = ZoneInfo("Asia/Shanghai")       # 中国时区


class UstGateway(BaseGateway):
    """
    VeighNa用于对接恒生UST极速柜台的交易接口。
    """

    default_name: str = "UST"

    default_setting: Dict[str, str] = {
        "交易账号": "",
        "交易密码": "",
        "交易服务器": "",
        "产品名称": "",
        "授权编码": "",
        "站点信息": "",
        "投资者端应用类别": "",
        "行情账号": "",
        "行情密码": ""
    }

    exchanges: List[str] = list(EXCHANGE_UST2VT.values())

    def __init__(self, event_engine: EventEngine, gateway_name: str) -> None:
        """构造函数"""
        super().__init__(event_engine, gateway_name)

        self.td_api: "UstTdApi" = UstTdApi(self)
        self.md_api: "NsqMdApi" = NsqMdApi(self)

    def connect(self, setting: dict) -> None:
        """连接交易接口"""
        td_accountid: str = setting["交易账号"]
        td_password: str = setting["交易密码"]
        td_address: str = setting["交易服务器"]
        appid: str = setting["产品名称"]
        auth_code: str = setting["授权编码"]
        stationinfo: str = setting["站点信息"]
        applicationtype: str = setting["投资者端应用类别"]
        md_accountid: str = setting["行情账号"]
        md_password: str = setting["行情密码"]

        if not td_address.startswith("fens://"):
            td_address = "fens://" + td_address

        self.td_api.connect(td_address, td_accountid, td_password, auth_code, appid, stationinfo, applicationtype)
        self.md_api.connect(md_accountid, md_password)

        self.init_query()

    def subscribe(self, req: SubscribeRequest) -> None:
        """订阅行情"""
        self.md_api.subscribe(req)

    def send_order(self, req: OrderRequest) -> str:
        """委托下单"""
        return self.td_api.send_order(req)

    def cancel_order(self, req: CancelRequest) -> None:
        """委托撤单"""
        self.td_api.cancel_order(req)

    def query_account(self) -> None:
        """查询资金"""
        self.td_api.query_account()

    def query_position(self) -> None:
        """查询持仓"""
        self.td_api.query_position()

    def close(self) -> None:
        """关闭接口"""
        self.td_api.close()
        self.md_api.close()

    def write_error(self, msg: str, error: dict) -> None:
        """输出错误信息日志"""
        error_id: int = error["ErrorID"]
        error_msg: str = error["ErrorMsg"]
        msg: str = f"{msg}，代码：{error_id}，信息：{error_msg}"
        self.write_log(msg)

    def process_timer_event(self, event) -> None:
        """定时事件处理"""
        self.count += 1
        if self.count < 2:
            return
        self.count = 0

        func = self.query_functions.pop(0)
        func()
        self.query_functions.append(func)

    def init_query(self) -> None:
        """初始化查询任务"""
        self.count: int = 0
        self.query_functions: list = [self.query_account, self.query_position]
        self.event_engine.register(EVENT_TIMER, self.process_timer_event)


class UstTdApi(TdApi):
    """"""

    def __init__(self, gateway: UstGateway) -> None:
        """构造函数"""
        super().__init__()

        self.gateway: UstGateway = gateway
        self.gateway_name: str = gateway.gateway_name

        self.reqid: int = 0
        self.order_ref: int = 0
        self.sessionid: int = 0

        self.inited: bool = False
        self.login_status: bool = False

        self.accountid: str = ""
        self.password: str = ""
        self.auth_code: str = ""
        self.appid: str = ""
        self.stationinfo: str = ""
        self.applicationtype: str = ""

    def onFrontConnected(self) -> None:
        """服务器连接成功回报"""
        self.gateway.write_log("交易服务器连接成功")

    def onFrontDisconnected(self, reason: int) -> None:
        """服务器连接断开回报"""
        msg: str = self.getApiErrorMsg(reason)
        self.gateway.write_log(f"交易服务器连接断开，原因{msg}")

    def onRspAuthenticate(self, data: dict, error: dict, reqid: int, last: bool) -> None:
        """用户授权验证回报"""
        if not error['ErrorID']:
            self.gateway.write_log("交易服务器授权验证成功")
            self.login()

        else:
            self.gateway.write_error("交易服务器授权验证失败", error)

    def onRspUserLogin(self, data: dict, error: dict, reqid: int, last: bool) -> None:
        """用户登录请求回报"""
        if not error["ErrorID"]:
            self.sessionid = data["SessionID"]
            self.gateway.write_log("交易服务器登录成功")
            self.login_status = True

        else:
            self.gateway.write_error("交易服务器登录失败", error)

    def onRspOrderInsert(self, data: dict, error: dict, reqid: int, last: bool) -> None:
        """委托下单失败回报"""
        if error["ErrorID"]:
            self.gateway.write_error("交易委托失败", error)

    def onRspOrderAction(self, data: dict, error: dict, reqid: int, last: bool) -> None:
        """委托撤单失败回报"""
        print("onRspOrderAction", "data:", data, "error:", error)
        if error["ErrorID"]:
            self.gateway.write_error("交易撤单失败", error)

    def onRspQryHold(self, data: dict, error: dict, reqid: int, last: bool) -> None:
        """持仓查询回报"""
        if last:
            return

        symbol: str = data["StockCode"]
        contract: ContractData = self.gateway.md_api.symbol_contract_map.get(symbol, None)
        if not contract:
            return

        position: PositionData = PositionData(
            symbol=data["StockCode"],
            exchange=contract.exchange,
            direction=Direction.NET,
            volume=data["CurrentVolume"],
            frozen=data["CurrentVolume"] - data["AvailableVolume"],
            price=data["AvBuyPrice"],
            yd_volume=data["AvailableVolume"],
            gateway_name=self.gateway_name
        )
        self.gateway.on_position(position)

    def onRspQryFund(self, data: dict, error: dict, reqid: int, last: bool) -> None:
        """资金查询回报"""
        if last:
            return

        account: AccountData = AccountData(
            accountid=self.accountid,
            balance=round(data["CurrentBalance"], 2),
            frozen=round(data["CurrentBalance"] - data["AvailableBalance"], 2),
            gateway_name=self.gateway_name
        )
        self.gateway.on_account(account)

    def onRtnOrder(self, data: dict) -> None:
        """委托更新推送"""
        if not data["OrderRef"]:
            return

        exchange, type = ORDERTYPE_UST2VT.get(data["OrderCommand"], None)
        if not exchange or not type:
            return

        symbol: str = data["StockCode"]
        timestamp: str = f"{data['TradingDay']} {data['OrderTime']}"
        dt: datetime = datetime.strptime(timestamp, "%Y%m%d %H%M%S%f")
        dt: datetime = dt.replace(tzinfo=CHINA_TZ)

        order: OrderData = OrderData(
            symbol=symbol,
            exchange=exchange,
            orderid=data["OrderRef"],
            type=type,
            direction=DIRECTION_UST2VT[data["Direction"]],
            price=data["OrderPrice"],
            volume=data["OrderVolume"],
            traded=data["TradeVolume"],
            status=STATUS_UST2VT[data["OrderStatus"]],
            datetime=dt,
            gateway_name=self.gateway_name
        )
        self.gateway.on_order(order)

    def onRtnTrade(self, data: dict) -> None:
        """成交数据推送"""
        exchange: Exchange = EXCHANGE_UST2VT.get(data["ExchangeID"], None)
        if not exchange:
            return

        symbol: str = data["StockCode"]
        timestamp: str = f"{data['TradingDay']} {data['TradeTime']}"
        dt: datetime = datetime.strptime(timestamp, "%Y%m%d %H%M%S%f")
        dt: datetime = dt.replace(tzinfo=CHINA_TZ)

        trade: TradeData = TradeData(
            symbol=symbol,
            exchange=exchange,
            orderid=data["OrderRef"],
            tradeid=data["TradeID"],
            direction=DIRECTION_UST2VT[data["Direction"]],
            price=data["TradePrice"],
            volume=data["TradeVolume"],
            datetime=dt,
            gateway_name=self.gateway_name
        )
        self.gateway.on_trade(trade)

    def connect(
        self,
        address: str,
        accountid: str,
        password: str,
        auth_code: str,
        appid: str,
        stationinfo: str,
        applicationtype: str
    ) -> None:
        """连接服务器"""
        self.accountid = accountid
        self.password = password
        self.auth_code = auth_code
        self.appid = appid
        self.stationinfo = stationinfo
        self.applicationtype= applicationtype

        if not self.inited:
            path: Path = get_folder_path(self.gateway_name.lower())
            self.newSecuTradeApi((str(path) + "\\Td").encode("GBK"))

            # self.registerFront(address)
            self.registerFensServer(address, self.accountid)
            self.registerSubModel(0)
        
            res: int = self.init("")
            if not res:
                self.authenticate()
            else:
                msg: str = self.getApiErrorMsg(res)
                self.gateway.write_log(f"交易服务器连接失败，原因：{msg}")

            self.inited = True

    def authenticate(self) -> None:
        """发起授权验证"""
        ust_req: dict = {
            "AccountID": self.accountid,
            "AppID": self.appid,
            "AuthCode": self.auth_code
        }

        self.reqid += 1
        self.reqAuthenticate(ust_req, self.reqid)

    def login(self) -> None:
        """用户登录"""
        ust_req: dict = {
            "AccountID": self.accountid,
            "Password": self.password,
            "UserApplicationType": self.applicationtype,
            "UserStationInfo": self.stationinfo
        }

        self.reqid += 1
        self.reqUserLogin(ust_req, self.reqid)

    def send_order(self, req: OrderRequest) -> str:
        """委托下单"""
        if req.type not in [OrderType.LIMIT, OrderType.MARKET]:
            self.gateway.write_log(f"当前接口不支持该类型的委托{req.type.value}")
            return ""

        exchange: Exchange = EXCHANGE_VT2UST.get(req.exchange, None)
        if not exchange:
            self.gateway.write_log(f"不支持的交易所{req.exchange.value}")
            return ""

        self.order_ref += 1
        orderid: str = f"{self.sessionid}{self.order_ref}"
        ordertype: str = ORDERTYPE_VT2UST[(req.exchange, req.type)]

        ust_req: dict = {
            "StockCode": req.symbol,
            "ExchangeID": exchange,
	        "OrderCommand": ordertype,
            "Direction": DIRECTION_VT2UST[req.direction],
            "OrderPrice": req.price,
            "OrderVolume": req.volume,
            "OrderRef": orderid,
            "ClientOrderID": 0
        }

        self.reqid += 1
        res: int = self.reqOrderInsert(ust_req, self.reqid)
        if res:
            msg: str = self.getApiErrorMsg(res)
            self.gateway.write_log(f"委托请求发送失败，原因：{msg}")
            return ""

        order: OrderData = req.create_order_data(orderid, self.gateway_name)
        self.gateway.on_order(order)

        return order.vt_orderid

    def cancel_order(self, req: CancelRequest) -> None:
        """委托撤单"""
        ust_req: dict = {
            "OrderRef": req.orderid,
            "SessionID": self.sessionid,
        }

        self.reqid += 1
        res: int = self.reqOrderAction(ust_req, self.reqid)
        if res:
            msg: str = self.getApiErrorMsg(res)
            self.gateway.write_log(f"撤单请求发送失败，原因：{msg}")

    def query_account(self) -> None:
        """查询资金"""
        if not self.login_status:
            return

        self.reqid += 1
        self.reqQryFund({"CurrencyID": HS_CID_CNY}, self.reqid)

    def query_position(self) -> None:
        """查询持仓"""
        if not self.login_status:
            return

        self.reqid += 1
        self.reqQryHold({}, self.reqid)

    def close(self) -> None:
        """关闭连接"""
        if self.inited:
            self.exit()
