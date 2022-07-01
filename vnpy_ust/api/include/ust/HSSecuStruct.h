#ifndef _HS_SECU_API_STRUCT_H_
#define _HS_SECU_API_STRUCT_H_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "HSDataType.h"


//#pragma pack(push,8)
///应答信息
struct CHSSecuRspInfoField
{
    /// 错误代码
	HSErrorID                    ErrorID;
    /// 错误提示
    HSErrorMsg					 ErrorMsg;
};

///接入认证
struct CHSSecuReqAuthenticateField
{
	/// 资产账号
	HSAccountID                   AccountID;
	/// 客户端id
	HSAppID                       AppID;
	/// 认证码
	HSAuthCode                    AuthCode;
};

///接入认证应答
struct CHSSecuRspAuthenticateField
{
	/// 资产账号
	HSAccountID                   AccountID;
	/// 客户端id
	HSAppID                       AppID;
	/// 认证码
	HSAuthCode                    AuthCode;
};

///客户登录
struct CHSSecuReqUserLoginField
{
	/// 资产账号
	HSAccountID                   AccountID;
	/// 交易密码
	HSPassword                    Password;	
    /// 投资者端应用类别
    HSUserApplicationType         UserApplicationType;
    /// 投资者端应用信息
    HSUserApplicationInfo         UserApplicationInfo;
    /// 投资者Mac地址
    HSMacAddress                  MacAddress;
    /// 投资者IP地址
    HSIPAddress                   IPAddress;
	/// 用户站点信息
	HSUserStationInfo             UserStationInfo;
};

///客户登录应答
struct CHSSecuRspUserLoginField
{
    /// 营业部号
	HSNum                    	  BranchID;
    /// 资产账号
	HSAccountID                   AccountID;
	/// 资产属性
	HSAssetProp					  AssetProp;
    /// 客户姓名
    HSUserName					  UserName;
	/// 交易日
	HSDate						  TradingDay;
	/// 报单引用（返回会话上次最大委托引用）
	HSRef						  OrderRef;
	/// 当前会话编号
	HSSessionID					  SessionID;
	/// 客户编号
	HSUserID					  UserID;
};

///证券账户信息查询
struct CHSSecuReqQryStkAcctField
{
	///交易所代码
	HSExchangeID ExchangeID;
};

///证券账户信息查询应答
struct CHSSecuRspQryStkAcctField
{
	///资产账户
	HSAccountID AccountID;
	///交易所代码
	HSExchangeID ExchangeID;
	///证券账号
	HSStockAccount StockAccount;
};

///密码更改
struct CHSSecuReqUserPasswordUpdateField
{
    /// 密码类型
	HSPasswordType				  PasswordType;
    /// 密码
	HSPassword                    Password;
    /// 新密码
	HSPassword                    NewPassword;
};

///密码更改应答
struct CHSSecuRspUserPasswordUpdateField
{
};

///银行转账
struct CHSSecuReqTransferField
{
	/// 银行代码
	HSBankID                      BankID;
	/// 转账类型
	HSTransferType                TransferType;
	/// 发生金额
	HSBalance                     OccurBalance;
	/// 资金密码
	HSPassword                    FundPassword;
	/// 银行密码
	HSPassword                    BankPassword;
	/// 币种
	HSCurrencyID                  CurrencyID;
	/// 转账场景
	HSOccasion				      TransferOccasion;
};

///银行转账应答
struct CHSSecuRspTransferField
{
	/// 转账流水
	HSNum                         TransferSerialID;
	/// 银行代码
	HSBankID                      BankID;
	/// 转账类型
	HSTransferType                TransferType;
	/// 发生金额
	HSBalance                     OccurBalance;
	/// 币种
	HSCurrencyID                  CurrencyID;
	/// 转账场景
	HSOccasion				      TransferOccasion;
};

///快速交易与集中交易之间资金调拨
struct CHSSecuReqFundTransField
{
	/// 调拨方向
	HSTransDirection              TransDirection;
	/// 币种
	HSCurrencyID				  CurrencyID;
	/// 发生金额
	HSBalance                     OccurBalance;
};

///快速交易与集中交易之间资金调拨应答
struct CHSSecuRspFundTransField
{
	/// 资金调拨流水
	HSNum						  FundTransSerialID;
};

///快速交易多中心之间资金调拨
struct CHSSecuReqFundAllocField
{
	/// 调拨方向
	HSTransDirection              TransDirection;
	/// 币种
	HSCurrencyID				  CurrencyID;
	/// 发生金额
	HSBalance                     OccurBalance;
	/// 对端快速交易节点号（双中心模式下，可填0，API会自行获取正确节点号；三中心以上模式下，必须填，且必须大于0）
	HSSysnodeID					  SysnodeID;
};

///快速交易多中心之间资金调拨应答
struct CHSSecuRspFundAllocField
{
	/// 资金调拨流水
	HSNum						  FundTransSerialID;
};

///快速交易与集中交易之间股份调拨请求
struct CHSSecuReqStockTransField
{
	/// 调拨方向
	HSTransDirection             TransDirection;
	/// 证券账号
	HSStockAccount				 StockAccount;
	/// 交易所代码
	HSExchangeID				 ExchangeID;
	/// 证券代码
	HSStockCode                  StockCode;
	/// 发生数量
	HSVolume                     OccurVolume;
};

///快速交易与集中交易之间股份调拨应答
struct CHSSecuRspStockTransField
{
	/// 股份调拨流水
	HSNum						  StockTransSerialID;
};

///报单录入请求
struct CHSSecuReqOrderInsertField
{
    /// 交易所代码
	HSExchangeID                  ExchangeID;
    /// 证券代码
	HSStockCode                   StockCode;
    /// 报单指令
	HSOrderCommand				  OrderCommand;
    /// 报单方向
    HSOrderDirection              Direction;
    /// 报单价格
    HSPrice                       OrderPrice;
    /// 报单数量
	HSVolume                      OrderVolume;
    /// 证券账号
    HSStockAccount                StockAccount;
    /// 报单引用
	HSRef                         OrderRef;
    /// 头寸性质
	HSCashGroupProp               CashGroupProp;
    /// 合约编号
	HSCompactID                   CompactID;
	/// 报单批次号
	HSBatchNo                     BatchNo;
	/// 通道类型
	HSChannelType                 ChannelType;  
	/// 股份性质
  	HSStockProperty            	  StockProperty;
	/// 客户端报单编号
	HSClientOrderID			      ClientOrderID;
	/// 现货账户交易密码
	HSPassword					  SecuPassword;	
};
///报单录入应答
struct CHSSecuRspOrderInsertField
{
	///报单分区
	HSOrderPartition OrderPartition;
	///经纪公司报单编码
	HSBrokerOrderID	BrokerOrderID;
	///会话编号
	HSSessionID SessionID;
	///报单引用
	HSRef OrderRef;
	///报单批次号
	HSBatchNo BatchNo;
	///客户端报单编号
	HSClientOrderID ClientOrderID;
};

///报单撤单请求
struct CHSSecuReqOrderActionField
{
	///被撤订单的报单分区
	HSOrderPartition OrderPartition;
	///被撤订单的经纪公司报单编码
	HSBrokerOrderID	BrokerOrderID;
	///被撤订单的会话编号
	HSSessionID SessionID;
	///被撤订单的报单引用
	HSRef OrderRef;
	///被撤订单的客户端报单编号
	HSClientOrderID ClientOrderID;
};

///报单撤单应答
struct CHSSecuRspOrderActionField
{
	///撤单的报单分区
	HSOrderPartition OrderPartition;
	///撤单的经纪公司报单编码
	HSBrokerOrderID	BrokerOrderID;
	///被撤订单的报单分区
	HSOrderPartition OrigOrderPartition;
	///被撤订单的经纪公司报单编码
	HSBrokerOrderID	OrigBrokerOrderID;
	///被撤订单的会话编号
	HSSessionID OrigSessionID;
	///被撤订单的报单引用
	HSRef OrigOrderRef;
	///被撤订单的客户端报单编号
	HSClientOrderID OrigClientOrderID;
};

///报单查询
struct CHSSecuReqQryOrderField
{
	///报单分区
	HSOrderPartition OrderPartition;
	///经纪公司报单编码
    HSBrokerOrderID BrokerOrderID;
	///会话编号
	HSSessionID SessionID;
	///报单引用
	HSRef OrderRef;
	///客户端报单编号
	HSClientOrderID ClientOrderID;
};
///报单查询应答、主推
struct CHSSecuOrderField
{
	///交易日期
	HSDate TradingDay;
	///资产账户
	HSAccountID AccountID;
	///报单分区
	HSOrderPartition OrderPartition;
	///经纪公司报单编码
	HSBrokerOrderID BrokerOrderID;
	///会话编号
	HSSessionID SessionID;
	///报单引用
	HSRef OrderRef;
	///交易所代码
	HSExchangeID ExchangeID;
	///证券账号
	HSStockAccount StockAccount;
	///证券代码
	HSStockCode StockCode;
	///报单方向
	HSOrderDirection Direction;
	///报单价格
	HSPrice OrderPrice;
	///报单数量
	HSVolume OrderVolume;
	///报单状态
	HSOrderStatus OrderStatus;
    /// 报单指令
	HSOrderCommand OrderCommand;
	///申报时间
	HSTime ReportTime;
	///废单原因
	HSErrorMsg ErrorMsg;
	///成交数量
	HSVolume TradeVolume;
	///报单批次号
	HSBatchNo BatchNo;
	///撤单数量
	HSVolume WithdrawVolume;
	///报单时间
	HSTime OrderTime;  
	 ///经纪公司撤单编码
  	 HSBrokerOrderID BrokerWithdrawOrderID;
	///委托冻结金额
	HSBalance FrozenBalance;
	///委托冻结费用
	HSBalance FrozenFare;
    /// 营业部号
	HSNum BranchID;
	/// 报单辅助状态
	HSOrderAssStatus OrderAssStatus;
	/// 被撤订单状态
	HSOrderStatus WithdrawOrderStatus;
	///发生时间
	HSTime OccurTime;
	///客户端报单编号
	HSClientOrderID ClientOrderID;
	///证券名称
	HSStockName	StockName;
	///成交价格
	HSPrice TradePrice;
	///成交金额
	HSBalance BusinessBalance;

};
///资金查询
struct CHSSecuReqQryFundField
{
	///币种类别
	HSCurrencyID CurrencyID;
};

///资金查询应答
struct CHSSecuRspQryFundField
{
	///币种类别
	HSCurrencyID CurrencyID;
	///当前余额
	HSBalance CurrentBalance;
	///期初余额
	HSBalance BeginBalance;
	///可用资金
	HSBalance AvailableBalance;
	///可取金额
	HSBalance FetchBalance;
	///证券市值
	HSBalance MarketValue;
	/// 总资产
	HSBalance TotalAsset;
};

///主柜台资金查询
struct CHSSecuReqQryFundUF20Field
{
	///币种类别
	HSCurrencyID CurrencyID;
};

///主柜台资金查询应答
struct CHSSecuRspQryFundUF20Field
{
	///币种类别
	HSCurrencyID CurrencyID;
	///当前余额
	HSBalance CurrentBalance;
	///可用资金
	HSBalance AvailableBalance;
	///可取金额
	HSBalance FetchBalance;
	///冻结金额
	HSBalance FrozenBalance;
	///解冻金额
	HSBalance UnfrozenBalance;
	/// 总资产
	HSBalance TotalAsset;
};

///持仓查询
struct CHSSecuReqQryHoldField
{
	///交易所代码
	HSExchangeID ExchangeID;
	///证券代码
	HSStockCode StockCode;
};

///持仓查询应答
struct CHSSecuRspQryHoldField
{
	///资产账户
	HSAccountID AccountID;
	///交易所代码
	HSExchangeID ExchangeID;
	///证券账号
	HSStockAccount StockAccount;
	///证券代码
	HSStockCode StockCode;
	///证券名称
	HSStockName	StockName;
	///证券类别
	HSStockType	StockType;
	///当前数量
	HSVolume CurrentVolume;
	///可用数量
	HSVolume AvailableVolume;
	///买入均价
	HSPrice	AvBuyPrice;
	///市值价
	HSPrice AssetPrice;	
	///实现盈亏
	HSBalance AchvProfit;
	///期初数量
	HSVolume BeginVolume;
	///回报买入数量
	HSVolume RealBuyVolume;
	///回报卖出数量
	HSVolume RealSellVolume;
	///未回买入数量
	HSVolume UncomeBuyVolume;
	///未回卖出数量
	HSVolume UncomeSellVolume;
	///浮动盈亏
	HSBalance FloatProfit;
	///市值价
	HSPrice MarketValue;
};

///新股申购额度查询请求
struct CHSSecuReqQryEquityField
{
	///交易所代码
	HSExchangeID ExchangeID;
};

///新股申购额度查询应答
struct CHSSecuRspQryEquityField
{
	///交易日期
	HSDate TradingDay;
	///分支机构
	HSNum BranchID;
	///资产账户
	HSAccountID AccountID;
	///证券账号
	HSStockAccount StockAccount;
	///交易所代码
	HSExchangeID ExchangeID;
	///可用数量
	HSVolume AvailableVolume;
	///科创板可用数量
	HSVolume StarAvailableVolume;
};

///成交查询请求、主推
struct CHSSecuReqQryTradeField
{
	///报单分区
	HSOrderPartition OrderPartition;
	///经纪公司报单编码
	HSBrokerOrderID BrokerOrderID;
	///会话编号
	HSSessionID SessionID;
	///报单引用
	HSRef OrderRef;
	///客户端报单编号
	HSClientOrderID ClientOrderID;
};
///成交查询应答、主推
struct CHSSecuTradeField
{
	///交易日期
	HSDate TradingDay;
	///资产账户
	HSAccountID AccountID;
	///报单分区
	HSOrderPartition OrderPartition;
	///经纪公司报单编码
	HSBrokerOrderID BrokerOrderID;
	///会话编号
	HSSessionID SessionID;
	///报单引用
	HSRef OrderRef;
	///交易所代码
	HSExchangeID ExchangeID;
	///证券账号
	HSStockAccount StockAccount;
	///证券代码
	HSStockCode StockCode;
	///买卖方向
	HSOrderDirection Direction;
	///报单指令
	HSOrderCommand OrderCommand;
	///成交状态
	HSTradeStatus TradeStatus;
	///成交编号
	HSTradeID TradeID;
	///成交数量
	HSVolume TradeVolume;
	///成交价格
	HSPrice TradePrice;
	///成交时间
	HSTime TradeTime;
	///废单原因
	HSErrorMsg ErrorMsg;
	///报单批次号
	HSBatchNo BatchNo;
	///经纪公司撤单编码
  	HSBrokerOrderID BrokerWithdrawOrderID;  
	///成交金额
	HSBalance BusinessBalance;
    /// 营业部号
	HSNum BranchID;
	///报单状态
	HSOrderStatus OrderStatus;
	///发生时间
	HSTime OccurTime;
	///客户端报单编号
	HSClientOrderID ClientOrderID;
};

///可融资金查询请求
struct CHSSecuReqQryEnfinFundField
{
	///头寸属性
	HSCashGroupProp CashGroupProp;
};

///可融资金查询应答
struct CHSSecuRspQryEnfinFundField
{
	///可用资金
	HSBalance AvailableBalance;
};

///可融证券查询请求
struct CHSSecuReqQryEnsloStockField
{
	///市场类别
	HSExchangeID ExchangeID;
	///证券类别
	HSStockType StockType;
	///证券代码
	HSStockCode StockCode;
	///头寸属性
	HSCashGroupProp CashGroupProp;
};

///可融证券查询应答
struct CHSSecuRspQryEnsloStockField
{
	///市场类别
	HSExchangeID ExchangeID;
	///证券代码
	HSStockCode StockCode;
	///证券类别
	HSStockType StockType;
	///证券名称
	HSStockName StockName;
	///融券保证金比例
	HSRate ShortSellRatio;
	///融券状态
	HSStatus ShortSellStatus;
	///可用数量
	HSVolume AvailableVolume;
	///头寸属性
	HSCashGroupProp CashGroupProp;
};

///证券代码查询请求
struct CHSSecuReqQryStkcodeField
{
	///交易所代码
	HSExchangeID ExchangeID;	
	///证券代码
	HSStockCode StockCode;
};

///证券代码查询应答
struct CHSSecuRspQryStkcodeField
{
	///交易所代码
	HSExchangeID ExchangeID;
	///证券代码
	HSStockCode StockCode;
	///证券名称
	HSStockName	StockName;
	///买入单位
	HSNum BuyUnit;
	///最小价差(厘)
	HSNum PriceStep;
	///存放单位
	HSNum StoreUnit;
	///交易最高数量
	HSVolume MaxVolume;
	///交易最低数量
	HSVolume MinVolume;
	///证券类别
	HSStockType StockType;
	///面值
	HSPrice ParValue;
	///证券子类
	HSSubStockType SubStockType;
	///交易最高金额
	HSBalance MaxBalance;	
	///交易最少金额
	HSBalance MinBalance;
	///证券状态
	HSStatus StockCodeStatus;
	///退市标志
	HSDelistFlag DelistFlag;
	//上限价
	HSPrice UpPrice;
	//下限价
	HSPrice DownPrice;	
};

///担保证券信息查询请求
struct CHSSecuReqQryCreditCollateralField
{
	///交易所代码
	HSExchangeID ExchangeID;
	///证券代码
	HSStockCode StockCode;
};
///担保证券信息查询应答
struct CHSSecuRspQryCreditCollateralField
{
	///交易所代码
	HSExchangeID ExchangeID;
	///证券代码
	HSStockCode StockCode;
	///证券名称
	HSStockName StockName;
	///证券类别
	HSStockType StockType;
	///到期日期
	HSDate CollateralEndDate;
	///担保折算率
	HSRate CollateralRate;
	///担保状态
	HSCollateralStatus CollateralStatus;
};

///标的证券查询请求
struct CHSSecuReqQryCreditUnderlyingField
{
    ///交易所代码
	HSExchangeID ExchangeID;
	///证券代码
	HSStockCode StockCode;
};
///标的证券查询应答
struct CHSSecuRspQryCreditUnderlyingField
{
	///交易所代码
	HSExchangeID ExchangeID;
	///证券代码
	HSStockCode StockCode;
	///证券名称
	HSStockName StockName;
	///证券类别
	HSStockType StockType;
	///融资标的到期日
	HSDate MarginBuyEndDate;
	///融券标的到期日
	HSDate ShortSellEndDate;
	///融资状态
	HSCollateralStatus MarginBuyStatus;
	///融券状态
	HSCollateralStatus ShortSellStatus;
	///融资保证金比例
	HSRate MarginBuyRate;
	///融券保证金比例
	HSRate ShortSellRate;
};
///ETF代码信息查询
struct CHSSecuReqQryEtfcodeField
{
	///交易所代码
	HSExchangeID ExchangeID;
	///证券代码
	HSStockCode EtfCode;
	///申赎代码
	HSStockCode PurRedStockCode;
};
///ETF代码信息查询应答
struct CHSSecuRspQryEtfcodeField
{
	///交易所代码
	HSExchangeID ExchangeID;
	///ETF代码
	HSStockCode EtfCode;
	///申赎代码
	HSStockCode PurRedStockCode;
	///最大现金替代比率
	HSRate MaxCashRatio;
	///ETF状态
	HSEtfStatus EtfStatus;
	///T-1日申购基准单位现金余额
	HSBalance YdCashComponent;
	///T-1日申购基准单位净值
	HSBalance YdNavPercu;
	///T-1日基金单位净值
	HSPrice	YdNav;
	///ETF类别
	HSEtfType EtfType;
	///申购份额上限
	HSVolume PurchaseMax;
	///赎回份额上限
	HSVolume RedeemMax;
};
///ETF成分股信息查询请求
struct CHSSecuReqQryEtfcomponentField
{
	///交易所代码
	HSExchangeID ExchangeID;
	///申赎代码
	HSStockCode PurRedStockCode;
	///ETF成分股代码
	HSStockCode EtfComponentCode;
};
///ETF成分股信息查询应答
struct CHSSecuRspQryEtfcomponentField
{
	///交易所代码
	HSExchangeID ExchangeID;
	///申赎代码
	HSStockCode PurRedStockCode;
	///ETF成分股代码
	HSStockCode EtfComponentCode;
	///成份股名称
	HSStockName EtfComponentName;
	///成份股数量
	HSVolume EtfComponentVolume;
	///替代标志
	HSFlag ReplaceFlag;
	///溢价比率
	HSRate PremiumRate;
	///替代金额
	HSBalance ReplaceBalance;
	///成份市场
	HSExchangeID EtfComponentMarket;
};

///融资融券利率查询请求
struct CHSSecuReqQryCreditRateField
{
};

///融资融券利率查询请求应答
struct CHSSecuRspQryCreditRateField
{
	///证券代码
	HSStockCode StockCode;
	///利率类别
	HSCreditRateType CreditRateType;
	///年利率
	HSRate YearRate;
};

///信用资产信息查询请求
struct CHSSecuReqQryCreditAssetField
{
};
///信用资产信息查询应答
struct CHSSecuRspQryCreditAssetField
{
	///现金资产
	HSBalance CashAsset;
	///证券市值
	HSBalance MarketValue;
	///担保资产
	HSBalance CollateralAsset;
	///负债总额
	HSBalance TotalDebit;
	///个人维持担保比例
	HSRisk PerCollateralRatio;
	///可用保证金
	HSBalance AvailableMargin;
	///已用保证金
	HSBalance UsedMargin;
	///融资额度上限
	HSBalance MarginBuyQuota;
	///融资可用额度
	HSBalance MarginBuyAvailableQuota;
	///融资合约金额
	HSBalance MarginBuyCompactBalance;
	///融资合约费用
	HSBalance MarginBuyCompactFare;
	///融资合约利息
	HSBalance MarginBuyCompactInterest;
	///融资合约盈亏
	HSBalance MarginBuyProfit;
	///融券额度上限
	HSBalance ShortSellQuota;
	///融券可用额度
	HSBalance ShortSellAvailableQuota;
	///融券合约金额
	HSBalance ShortSellCompactBalance;
	///融券合约费用
	HSBalance ShortSellCompactFare;
	///融券合约利息
	HSBalance ShortSellCompactInterest;
	///融券合约盈亏
	HSBalance ShortSellProfit;
	///融券卖出所得剩余金额
	HSBalance SloSurplusBalance;
	///融券卖出所得已使用金额
	HSBalance SloUsedBalance;
};

///现金还款请求
struct CHSSecuReqCashRepayField
{
	///合约编号
	HSCompactID CompactID;
	///头寸性质
	HSCashGroupProp CashGroupProp;
	///还款金额
	HSBalance RepayBalance;
};
///现金还款应答
struct CHSSecuRspCashRepayField
{
	///发生金额
	HSBalance OccurBalance;
};

///两融合约信息查询请求
struct CHSSecuReqQryCompactField
{
	///交易所代码
	HSExchangeID ExchangeID;
	///证券代码
	HSStockCode	StockCode;
	///合约编号
	HSCompactID CompactID;
	///合约类别
	HSCompactType CompactType;
	///合约来源
	HSCompactSource CompactSource;
};

///两融合约信息查询应答
struct CHSSecuRspQryCompactField
{
	///开仓日期
	HSDate OpenDate;
	///合约编号
	HSCompactID CompactID;
	///币种类别
	HSCurrencyID CurrencyID;
	///证券账号
	HSStockAccount StockAccount;
	///交易所代码
	HSExchangeID ExchangeID;
	///证券代码
	HSStockCode StockCode;
	///证券名称
	HSStockName StockName;
	///保证金比率
	HSRate CreditRate;
	///合约类别
	HSCompactType CompactType;
	///合约状态
	HSCompactStatus CompactStatus;
	///未还合约金额
	HSBalance LeaveCompactBalance;
	///未还合约数量
	HSVolume LeaveCompactVolume;
	///未结合约费用
	HSBalance LeaveCompactFare;
	///未结合约利息
	HSBalance LeaveCompactInterest;
	///负债总额
	HSBalance TotalDebit;
	///年利率
	HSRate YearRate;
	///归还截止日
	HSDate RetEndDate;
	///合约来源
	HSCompactSource CompactSource;
	///融资合约盈亏
	HSBalance MarginBuyProfit;
	///融券合约盈亏
	HSBalance ShortSellProfit;
	///罚息开始日期
	HSDate FineBeginDate;
	///已还利息
	HSBalance RepaidInterest;
	///已还合约金额
	HSBalance RepaidBalance;
	///已还合约数量
	HSVolume RepaidAmount;
};

///质押入库债券明细查询请求
struct CHSSecuReqQryImpawnDetailField
{
	///证券账号
	HSStockAccount StockAccount;
	///交易所代码
	HSExchangeID ExchangeID;
	///证券代码
	HSStockCode StockCode;

};

///质押入库债券明细查询应答
struct CHSSecuRspQryImpawnDetailField
{
	///交易所代码
	HSExchangeID ExchangeID;
	///证券账号
	HSStockAccount StockAccount;
	///证券代码
	HSStockCode StockCode;
	///交易所库存数量
	HSVolume StoreVolume;
	///质押比率
	HSPrice ImpawnRate;
	///交易期间出库数量
	HSVolume ImpawnOutVolume;
	///交易期间入库数量
	HSVolume ImpawnInVolume;
	///质押数量
	HSVolume ImpawnVolume;
};

///债券入库集中度查询请求
struct CHSSecuReqQryBondImpawnConcField
{
	///交易所代码
	HSExchangeID ExchangeID;
	///证券代码
	HSStockCode StockCode;
};

///债券入库集中度查询应答
struct CHSSecuRspQryBondImpawnConcField
{
	///交易所代码
	HSExchangeID ExchangeID;
	///证券代码
	HSStockCode StockCode;
	///证券名称
	HSStockName StockName;
	///质押数量
	HSVolume ImpawnVolume;
	///市场托管量
	HSBalance TrusteeVolume;
	///债券入库集中度
	HSRate BondConcRatio;
	///集中度剩余可入库数量
	HSVolume ConcSurplusVolume;
};

//组合报单录入
struct CHSSecuReqComOrderInsertField
{
	//报单信息个数，即ReqOrder数组有效元素个数，有效元素从ReqOrder[0] ~ ReqOrder[Count-1]
	HSNum Count;
	//报单信息
	CHSSecuReqOrderInsertField ReqOrder[1000];
};

//组合报单录入应答
struct CHSSecuRspComOrderInsertField
{
	//报单应答信息个数，即RspOrder数组有效元素个数（跟组合报单录入请求的Count一致），有效元素从RspOrder[0] ~ RspOrder[Count-1]
	HSNum Count;
	//报单应答信息数组（与组合报单录入里的报单信息一一对应，需要根据组合应答信息，判断报单是否成功）
	CHSSecuRspOrderInsertField RspOrder[1000];
};

//组合应答信息
struct CHSSecuRspComInfoField
{
	//应答信息个数，即RspInfo数组有效元素个数（跟组合报单录入请求的Count一致），有效元素从RspInfo[0] ~ RspInfo[Count-1]
	HSNum Count;
	//应答信息数组（与组合报单录入里的报单信息一一对应，根据应答信息，依次判断每笔报单是否成功，如果成功，则可以从组合报单录入应答里获取报单应答信息）
	CHSSecuRspInfoField RspInfo[1000];
};

///合约展期申请请求
struct CHSSecuReqCompactApplyField
{
	///合约编号串（每个合约以逗号分隔）
	HSCompactIDStr CompactIDStr;
};

///合约展期申请应答
struct CHSSecuRspCompactApplyField
{

};

///新股申购代码查询请求
struct CHSSecuReqQryApplycodeField
{
	///交易所代码
	HSExchangeID ExchangeID;
	///证券代码
	HSStockCode StockCode;
	///证券子类
	HSSubStockType SubStockType;
};

///新股申购代码查询应答
struct CHSSecuRspQryApplycodeField
{
	///交易所代码
	HSExchangeID ExchangeID;
	///证券代码
	HSStockCode StockCode;
	///证券名称
	HSStockName	StockName;
	///买入单位
	HSNum BuyUnit;
	///最小价差(厘)
	HSNum PriceStep;
	///存放单位
	HSNum StoreUnit;
	///交易最高数量
	HSVolume MaxVolume;
	///交易最低数量
	HSVolume MinVolume;
	///证券类别
	HSStockType StockType;
	///面值
	HSPrice ParValue;
	///证券子类
	HSSubStockType SubStockType;
	///交易最高金额
	HSBalance MaxBalance;
	///交易最少金额
	HSBalance MinBalance;
	///证券状态
	HSStatus StockCodeStatus;
	///发行日期
	HSDate IssueDate;
};


///资金流水查询
struct CHSSecuReqQryFundRealJourField
{
	///币种类别
	HSCurrencyID CurrencyID;
};

///资金流水查询应答
struct CHSSecuRspQryFundRealJourField
{
	///流水序号
	HSNum		    SerialNo;
	///币种类别
	HSCurrencyID 	CurrencyID;
	///发生金额
	HSBalance 		OccurBalance;
	///后资金额
	HSBalance		PostBalance;
	///交易变动类型
	HSRealActionType		RealAction;
	///业务标志
	HSBusinessFlag		    BusinessFlag;
	///当前时间
	HSTime					CurrTime;
};

///实时合约流水查询
struct CHSSecuReqQryCompactRealJourField
{
	///证券代码
	HSStockCode					StockCode;
	///合约来源
	HSCompactSource             CompactSource;
	///合约类别
	HSCompactType               CompactType;
	///合约编号
	HSCompactID                 CompactID;
	///经纪公司报单编码
    HSBrokerOrderID 			BrokerOrderID;
};
    
///实时合约流水查询应答
struct CHSSecuRspQryCompactRealJourField
{
	///证券账号
	HSStockAccount              StockAccount;
	///币种
	HSCurrencyID                CurrencyID;
	///资产账号
	HSAccountID                 AccountID;
	///交易类别
	HSExchangeID                ExchangeType;
	///流水序号
	HSNum		    			SerialNo;
	///当前日期
	HSDate                      CurrDate;
	///当前时间
	HSTime                      CurrTime;
	///业务标志
	HSBusinessFlag              BusinessFlag;
	///发生金额
	HSBalance                   OccurBalance;
	///后资金额
	HSBalance                   PostBalance;
	///发生数量
	HSVolume                    OccurAmount;
	///后证券额
	HSVolume                    PostAmount;
	///发生费用
	HSBalance                   OccurFare;
	///后余费用
	HSBalance                   PostFare;
	///发生利息
	HSBalance                   OccurInterest;
	///后余利息
	HSBalance                   PostInterest;
	///经纪公司报单编码
    HSBrokerOrderID 			BrokerOrderID;
	///合约编号
	HSCompactID                 CompactID;
	///证券代码
	HSStockCode                 StockCode;
};

///可买卖数量获取请求
struct CHSSecuReqQryMaxEntradeNumField
{
	/// 交易所代码
	HSExchangeID 					ExchangeID;
	/// 证券代码
	HSStockCode    			        StockCode; 
    /// 报单指令
	HSOrderCommand				  	OrderCommand;
    /// 报单方向
    HSOrderDirection              	Direction;
    /// 报单价格
    HSPrice                       	OrderPrice;
    /// 头寸性质
	HSCashGroupProp               	CashGroupProp;
};

///可买卖数量获取应答
struct CHSSecuRspQryMaxEntradeNumField
{
	/// 可买卖数量
    HSVolume                        AvailableTradeAmount;
	/// 可用资金
	HSBalance                       AvailableBalance;
};

///股份流水查询
struct CHSSecuReqQryStockRealJourField
{
	///交易所代码
	HSExchangeID 		ExchangeID;
	///证券代码
	HSStockCode 		StockCode;
};

///股份流水查询应答
struct CHSSecuRspQryStockRealJourField
{
	  ///交易所代码
	HSExchangeID 		ExchangeID;
	///证券代码
	HSStockCode 		StockCode;
	///证券名称
	HSStockName  		StockName;
	///证券类别
	HSStockType  		StockType;
	///流水序号
	HSNum    			SerialNo;
	///发生数量
	HSVolume    		OccurVolume;
	///后资数量
	HSVolume    		PostVolume;
	///交易变动类型
	HSRealActionType	RealAction;
	///业务标志
	HSBusinessFlag		BusinessFlag;
	///证券账号
	HSStockAccount		StockAccount;
};

///银行账户查询
struct CHSSecuReqQryBankAccountField
{
    /// 银行代码
    HSBankID                      BankID;
    /// 币种
    HSCurrencyID                  CurrencyID;
};

///银行账户查询应答
struct CHSSecuRspQryBankAccountField
{
    /// 银行代码
    HSBankID                      BankID;
    /// 银行名称
    HSBankName                    BankName;
    /// 银行账号
    HSBankAccountID               BankAccountID;
    /// 币种
    HSCurrencyID                  CurrencyID;
};

///港股通客户个人交易汇率查询请求
struct CHSSecuReqQryHKSecurateField
{
	/// 交易所代码
	HSExchangeID                ExchangeID;
};

///港股通客户个人交易汇率查询应答
struct CHSSecuRspQryHKSecurateField
{
	/// 买入汇率（乘上浮动汇率后的）
	HSRate				BuyExchangeRate;
	/// 卖出汇率（乘上浮动汇率后的）
	HSRate				SellExchangeRate;
	/// 中间汇率
	HSRate				MiddleExchangeRate;
	/// 交易所买入汇率
	HSRate				SeBuyExchangeRate;
	/// 交易所卖出汇率
	HSRate				SeSellExchangeRate;
	/// 买入浮动比率
	HSRate				BuyFloatRatio;
	/// 卖出浮动比率
	HSRate				SellFloatRatio;
	/// 交易所代码
	HSExchangeID		ExchangeID;
	/// 有效日期
	HSDate				ValidDate;
};

///担保提交证券可用数量查询请求
struct CHSSecuReqQryAssureAmountField
{
	///证券代码
	HSStockCode	StockCode;
	///交易所代码
	HSExchangeID ExchangeID;
};

///担保提交证券可用数量查询应答
struct CHSSecuRspQryAssureAmountField
{
	///可用数量
	HSVolume 	EnableAmount;
};

///担保证券可返回数量查询请求
struct CHSSecuReqQryAssureBackAmountField
{
	///交易类别
	HSExchangeID					ExchangeID;
	///证券代码
	HSStockCode						StockCode;
};

///担保证券可返回数量查询应答
struct CHSSecuRspQryAssureBackAmountField
{
	///交易类别
	HSExchangeID	ExchangeID;
	///证券代码
	HSStockCode		StockCode;
	///可以还券数量
	HSVolume		EnableReturnAmount;
};

///对端快速交易中心资金查询
struct CHSSecuReqQryFundPeerField
{
	///	对端快速交易节点号（双中心模式下，可填0，API会自行获取正确节点号；三中心以上模式下，必须填，且必须大于0）
	HSSysnodeID			SysnodeID;
	///	币种类别
	HSCurrencyID		CurrencyID;
};

///对端快速交易中心资金查询应答
struct CHSSecuRspQryFundPeerField
{
	///	当前余额
	HSBalance			CurrentBalance;
	///	可用资金
	HSBalance			AvailableBalance;
	///	币种类别
	HSCurrencyID		CurrencyID;
};
//#pragma pack(pop)
#endif
