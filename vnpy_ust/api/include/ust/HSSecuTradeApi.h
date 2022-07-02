#ifndef _HS_SECU_TRADE_API_H_
#define _HS_SECU_TRADE_API_H_

#include "HSSecuStruct.h"

#if (defined WIN32) || (defined WIN64)  
#define TRADE_API_EXPORT _declspec(dllexport)
#else
#ifdef HSTRADEAPI_EXPORTS
#define TRADE_API_EXPORT __attribute__((visibility("default"))) 
#else
#define TRADE_API_EXPORT
#endif
#endif

/// 回调虚类,请勿在回调函数中做较多耗时的业务处理，以免影响消息接收
class CHSSecuTradeSpi
{
public:
	/// Description: 当客户端与交易后台开始建立通信连接，连接成功后此方法被回调。
	virtual void OnFrontConnected(){};

	/// Description:当客户端与交易后台通信连接异常时，该方法被调用。
	/// Others     :通过GetApiErrorMsg(nResult)获取详细错误信息。
	virtual void OnFrontDisconnected(int nResult){};

	/// Description:接入认证
	virtual void OnRspAuthenticate(CHSSecuRspAuthenticateField *pRspAuthenticate, CHSSecuRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	/// Description:客户登录
	virtual void OnRspUserLogin(CHSSecuRspUserLoginField *pRspUserLogin, CHSSecuRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	/// Description:证券账户信息查询
	virtual void OnRspQryStkAcct(CHSSecuRspQryStkAcctField *pRspRspQryStkAcct, CHSSecuRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	/// Description:密码更改
	virtual void OnRspUserPasswordUpdate(CHSSecuRspUserPasswordUpdateField *pRspUserPasswordUpdate, CHSSecuRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	/// Description:银行转账
	virtual void OnRspTransfer(CHSSecuRspTransferField *pRspTransfer, CHSSecuRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	/// Description:快速交易与集中交易之间资金调拨
	virtual void OnRspFundTrans(CHSSecuRspFundTransField *pRspFundTrans, CHSSecuRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	/// Description:快速交易多中心之间资金调拨
	virtual void OnRspFundAlloc(CHSSecuRspFundAllocField *pRspFundAlloc, CHSSecuRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	/// Description:快速交易与集中交易之间股份调拨
	virtual void OnRspStockTrans(CHSSecuRspStockTransField *pRspStockTrans, CHSSecuRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	/// Description:报单录入
	virtual void OnRspOrderInsert(CHSSecuRspOrderInsertField *pRspOrderInsert, CHSSecuRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	/// Description:报单撤单
	virtual void OnRspOrderAction(CHSSecuRspOrderActionField *pRspOrderAction, CHSSecuRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	/// Description:持仓查询
	virtual void OnRspQryHold(CHSSecuRspQryHoldField *pRspQryHold, CHSSecuRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	/// Description:资金查询
	virtual void OnRspQryFund(CHSSecuRspQryFundField *pRspQryFund, CHSSecuRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	/// Description:报单查询
	virtual void OnRspQryOrder(CHSSecuOrderField *pRspQryOrder, CHSSecuRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	/// Description:成交查询
	virtual void OnRspQryTrade(CHSSecuTradeField *pRspQryTrade, CHSSecuRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	/// Description:新股申购额度查询
	virtual void OnRspQryEquity(CHSSecuRspQryEquityField *pRspQryEquity, CHSSecuRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	/// Description:证券代码查询
	virtual void OnRspQryStkcode(CHSSecuRspQryStkcodeField *pRspQryStkcode, CHSSecuRspInfoField *pRspInfo, int nRequestID, bool bIsLast){};	

	/// Description:主推-报单回报
	virtual void OnRtnOrder(CHSSecuOrderField *pRtnOrder) {};

	/// Description:主推-成交回报
	virtual void OnRtnTrade(CHSSecuTradeField *pRtnTrade) {};

	/// Description:ETF代码查询
	virtual void OnRspQryEtfcode(CHSSecuRspQryEtfcodeField *pRspQryEtfcode, CHSSecuRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	/// Description:ETF成份股查询
	virtual void OnRspQryEtfcomponent(CHSSecuRspQryEtfcomponentField *pRspQryEtfcomponent, CHSSecuRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	/// Description:质押入库债券明细查询
	virtual void OnRspQryImpawnDetail(CHSSecuRspQryImpawnDetailField *pRspQryImpawnDetail, CHSSecuRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	/// Description:债券入库集中度查询
	virtual void OnRspQryBondImpawnConc(CHSSecuRspQryBondImpawnConcField *pRspQryBondImpawnConc, CHSSecuRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	/// Description:现金还款
	virtual void OnRspCashRepay(CHSSecuRspCashRepayField *pRspCashRepay, CHSSecuRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	/// Description:可融资金查询
	virtual void OnRspQryEnfinFund(CHSSecuRspQryEnfinFundField *pRspQryEnfinFund, CHSSecuRspInfoField *pRspInfo, int nRequestID, bool bIsLast){};

	/// Description:可融证券查询
	virtual void OnRspQryEnsloStock(CHSSecuRspQryEnsloStockField *pRspQryEnsloStock, CHSSecuRspInfoField *pRspInfo, int nRequestID, bool bIsLast){};

	/// Description:担保证券查询
	virtual void OnRspQryCreditCollateral(CHSSecuRspQryCreditCollateralField *pRspQryCreditCollateral, CHSSecuRspInfoField *pRspInfo, int nRequestID, bool bIsLast){};

	/// Description:标的证券查询
	virtual void OnRspQryCreditUnderlying(CHSSecuRspQryCreditUnderlyingField *pRspQryCreditUnderlying, CHSSecuRspInfoField *pRspInfo, int nRequestID, bool bIsLast){};

	/// Description:融资融券利率查询
	virtual void OnRspQryCreditRate(CHSSecuRspQryCreditRateField *pRspQryCreditRate, CHSSecuRspInfoField *pRspInfo, int nRequestID, bool bIsLast){};

	/// Description:信用资产查询
	virtual void OnRspQryCreditAsset(CHSSecuRspQryCreditAssetField *pRspQryCreditAsset, CHSSecuRspInfoField *pRspInfo, int nRequestID, bool bIsLast){};

	/// Description:两融合约查询
	virtual void OnRspQryCompact(CHSSecuRspQryCompactField *pRspQryCompact, CHSSecuRspInfoField *pRspInfo, int nRequestID, bool bIsLast){};
	
	/// Description:组合报单录入
	virtual void OnRspComOrderInsert(CHSSecuRspComOrderInsertField *pRspComOrderInsert, CHSSecuRspComInfoField *pRspComInfo, int nRequestID, bool bIsLast) {};

	/// Description:合约展期申请
	virtual void OnRspCompactApply(CHSSecuRspCompactApplyField *pRspCompactApply, CHSSecuRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	/// Description:新股申购代码查询
	virtual void OnRspQryApplycode(CHSSecuRspQryApplycodeField *pRspQryApplycode, CHSSecuRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};
	
	/// Description:主柜台资金查询
	virtual void OnRspQryFundUF20(CHSSecuRspQryFundUF20Field *pRspQryFundUF20, CHSSecuRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};
	
	/// Description:资金流水查询
	virtual void OnRspQryFundRealJour(CHSSecuRspQryFundRealJourField *pRspQryFundRealJour, CHSSecuRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};
	
	/// Description:实时合约流水查询
	virtual void OnRspQryCompactRealJour(CHSSecuRspQryCompactRealJourField *pRspQryCompactRealJour, CHSSecuRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};
	
	/// Description:可买卖数量获取
	virtual void OnRspQryMaxEntradeNum(CHSSecuRspQryMaxEntradeNumField *pRspQryMaxEntradeNum, CHSSecuRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	/// Description:股份流水查询
	virtual void OnRspQryStockRealJour(CHSSecuRspQryStockRealJourField *pRspQryStockRealJour, CHSSecuRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	/// Description:银行账户查询
	virtual void OnRspQryBankAccount(CHSSecuRspQryBankAccountField *pRspQryBankAccount, CHSSecuRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};
	
	/// Description:港股通客户个人交易汇率查询
	virtual void OnRspQryHKSecurate(CHSSecuRspQryHKSecurateField *pRspQryHKSecurate, CHSSecuRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	/// Description:担保提交证券可用数量查询
	virtual void OnRspQryAssureAmount(CHSSecuRspQryAssureAmountField *pRspQryAssureAmount, CHSSecuRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	/// Description:担保证券可返回数量查询 
	virtual void OnRspQryAssureBackAmount(CHSSecuRspQryAssureBackAmountField *pRspQryAssureBackAmount, CHSSecuRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};
	
	/// Description:对端快速交易中心资金查询
	virtual void OnRspQryFundPeer(CHSSecuRspQryFundPeerField *pRspQryFundPeer, CHSSecuRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};
};

///交易
class  CHSSecuTradeApi
{
public:
	/// Description: 删除接口对象本身
	virtual void ReleaseApi() = 0;

	/// Description: 初始化连接
	///              pszLicFile            通讯证书
	///              pszSafeLevel          安全级别
	///              pszPwd                通讯密码
	///              pszSslFile            SSL证书
	///              pszSslPwd             SSL密码
	virtual int Init(const char *pszLicFile, const char *pszSafeLevel = "", const char *pszPwd = "", const char *pszSslFile = "", const char *pszSslPwd = "") = 0;

	/// Description: API和交易柜台建立连接，连接建立成功后，主线程会等待用户操作子线程退出
	/// Return     : int 0表示连接建立成功，否则表示失败，通过调用GetApiErrorInfo可以获取详细错误信息
	virtual int Join() = 0;

	/// Description: 注册回调接口
	/// Input      : pSpi            派生自回调接口类的实例     
	virtual void RegisterSpi(CHSSecuTradeSpi *pSpi) = 0;

	///注册前置机网络地址
	///@param pszFrontAddress：前置机网络地址。
	virtual int RegisterFront(const char *pszFrontAddress) = 0;

	///注册Fens网络地址
	/// Input      : pszFensAddress            Fens网络地址
	/// Input      : pszAccountID              账号
	virtual int RegisterFensServer(const char *pszFensAddress, const char *pszAccountID) = 0;

	/// Description: 注册订阅模式
	/// Input      : 订阅方式
	///                 HS_TERT_RESTART://从本交易日开始重传
	///                 HS_TERT_RESUME: //从上次收到的续传
	///                 HS_TERT_QUICK:  //从登录后最新的开始传
	virtual int RegisterSubModel(SUB_TERT_TYPE eSubType) = 0;
	
	/// Description: 获得错误详细信息
	virtual const char* GetApiErrorMsg(int nErrorCode) = 0;

	/// Description:接入认证 
	virtual int  ReqAuthenticate(CHSSecuReqAuthenticateField *pReqAuthenticate, int nRequestID) = 0;

	/// Description:客户登录
	virtual int  ReqUserLogin(CHSSecuReqUserLoginField *pReqUserLogin, int nRequestID) = 0;

	/// Description:证券账户信息查询
	virtual int  ReqQryStkAcct(CHSSecuReqQryStkAcctField *pReqQryStkAcct, int nRequestID) = 0;

	/// Description:密码更改
	virtual int  ReqUserPasswordUpdate(CHSSecuReqUserPasswordUpdateField *pReqUserPasswordUpdate, int nRequestID) = 0;

	/// Description:银证转账
	virtual int  ReqTransfer(CHSSecuReqTransferField *pReqTransfer, int nRequestID) = 0;

	/// Description:快速交易与集中交易之间资金调拨
	virtual int  ReqFundTrans(CHSSecuReqFundTransField *pReqFundTrans, int nRequestID) = 0;

	/// Description:快速交易多中心之间资金调拨
	virtual int  ReqFundAlloc(CHSSecuReqFundAllocField *pReqFundAlloc, int nRequestID) = 0;

	/// Description:快速交易与集中交易之间股份调拨
	virtual int  ReqStockTrans(CHSSecuReqStockTransField *pReqStockTrans, int nRequestID) = 0;

	/// Description:报单录入
	virtual int  ReqOrderInsert(CHSSecuReqOrderInsertField *pReqOrderInsert, int nRequestID) = 0;

	/// Description:报单撤单
	virtual int  ReqOrderAction(CHSSecuReqOrderActionField *pReqOrderAction, int nRequestID) = 0;

	/// Description:持仓查询
	virtual int  ReqQryHold(CHSSecuReqQryHoldField *pReqQryHold, int nRequestID) = 0;

	/// Description:资金查询
	virtual int  ReqQryFund(CHSSecuReqQryFundField *pReqQryFund, int nRequestID) = 0;

	/// Description:报单查询
	virtual int  ReqQryOrder(CHSSecuReqQryOrderField *pReqQryOrder, int nRequestID) = 0;

	/// Description:成交查询
	virtual int  ReqQryTrade(CHSSecuReqQryTradeField *pReqQryTrade, int nRequestID) = 0;

	/// Description:证券代码查询
	virtual int  ReqQryStkcode(CHSSecuReqQryStkcodeField *pReqQryStkcode, int nRequestID) = 0;
	
	/// Description:新股申购额度查询
	virtual int  ReqQryEquity(CHSSecuReqQryEquityField *pReqQryEquity, int nRequestID) = 0;

	/// Description:ETF代码查询
	virtual int  ReqQryEtfcode(CHSSecuReqQryEtfcodeField *pReqQryEtfcode, int nRequestID) = 0;

	/// Description:ETF成份股查询
	virtual int  ReqQryEtfcomponent(CHSSecuReqQryEtfcomponentField *pReqQryEtfcomponent, int nRequestID) = 0;

	/// Description:质押入库债券明细查询
	virtual int  ReqQryImpawnDetail(CHSSecuReqQryImpawnDetailField *pReqQryImpawnDetail, int nRequestID) = 0;

	/// Description:债券入库集中度查询
	virtual int  ReqQryBondImpawnConc(CHSSecuReqQryBondImpawnConcField *pReqQryBondImpawnConc, int nRequestID) = 0;

	/// Description:现金还款
	virtual int  ReqCashRepay(CHSSecuReqCashRepayField *pReqCashRepay, int nRequestID) = 0;

	/// Description:可融资金查询
	virtual int  ReqQryEnfinFund(CHSSecuReqQryEnfinFundField *pReqQryEnfinFund, int nRequestID) = 0;

	/// Description:可融证券查询
	virtual int  ReqQryEnsloStock(CHSSecuReqQryEnsloStockField *pReqQryEnsloStock, int nRequestID) = 0;

	/// Description:担保证券查询
	virtual int  ReqQryCreditCollateral(CHSSecuReqQryCreditCollateralField *pReqQryCreditCollateral, int nRequestID) = 0;

	/// Description:标的证券查询
	virtual int  ReqQryCreditUnderlying(CHSSecuReqQryCreditUnderlyingField *pReqQryCreditUnderlying, int nRequestID) = 0;

	/// Description:融资融券费率查询
	virtual int  ReqQryCreditRate(CHSSecuReqQryCreditRateField *pReqQryCreditRate, int nRequestID) = 0;

	/// Description:信用资产信息查询
	virtual int  ReqQryCreditAsset(CHSSecuReqQryCreditAssetField *pReqQryCreditAsset, int nRequestID) = 0;

	/// Description:两融合约查询
	virtual int  ReqQryCompact(CHSSecuReqQryCompactField *pReqQryCompact, int nRequestID) = 0;

	/// Description:组合报单录入
	virtual int  ReqComOrderInsert(CHSSecuReqComOrderInsertField *pReqComOrderInsert, int nRequestID) = 0;

	/// Description:合约展期申请
	virtual int  ReqCompactApply(CHSSecuReqCompactApplyField *pReqCompactApply, int nRequestID) = 0;

	/// Description:新股申购代码查询
	virtual int  ReqQryApplycode(CHSSecuReqQryApplycodeField *pReqQryApplycode, int nRequestID) = 0;

	///Description:主柜台资金查询
	virtual int  ReqQryFundUF20(CHSSecuReqQryFundUF20Field *pReqQryFundUF20, int nRequestID) = 0;

	///Description:资金流水查询
	virtual int  ReqQryFundRealJour(CHSSecuReqQryFundRealJourField *pReqQryFundRealJour, int nRequestID) = 0;

	///Description:合约流水表查询
	virtual int  ReqQryCompactRealJour(CHSSecuReqQryCompactRealJourField *pReqQryCompactRealJour, int nRequestID) = 0;

	///Description:可买卖数量获取
	virtual int  ReqQryMaxEntradeNum(CHSSecuReqQryMaxEntradeNumField *pReqQryMaxEntradeNum, int nRequestID) = 0;

	///Description:股份流水查询
	virtual int  ReqQryStockRealJour(CHSSecuReqQryStockRealJourField *pReqQryStockRealJour, int nRequestID) = 0;

	///Description:银行账号查询
	virtual int  ReqQryBankAccount(CHSSecuReqQryBankAccountField *pReqQueryBankAccount, int nRequestID) = 0;

	/// Description:港股通客户个人交易汇率查询
	virtual int  ReqQryHKSecurate(CHSSecuReqQryHKSecurateField *pReqQryHKSecurate, int nRequestID) = 0;

	///Description:担保提交证券可用数量查询
	virtual int  ReqQryAssureAmount(CHSSecuReqQryAssureAmountField *pReqQryAssureAmount, int nRequestID) = 0;

	///Description:担保证券可返回数量查询
	virtual int  ReqQryAssureBackAmount(CHSSecuReqQryAssureBackAmountField *pReqQryAssureBackAmount, int nRequestID) = 0;

	/// Description:对端快速交易中心资金查询
	virtual int  ReqQryFundPeer(CHSSecuReqQryFundPeerField *pReqQryFundPeer, int nRequestID) = 0;

	protected:
	~CHSSecuTradeApi(){};
};

extern   "C"
{
	/// Description: 获取API版本号
	TRADE_API_EXPORT const char*  GetSecuTradeApiVersion();

	/// Description: 创建交易接口    
	/// Input      : pszFlowPath    缓存路径，要求为gbk编码 
	TRADE_API_EXPORT CHSSecuTradeApi* NewSecuTradeApi(const char *pszFlowPath);
}

#endif