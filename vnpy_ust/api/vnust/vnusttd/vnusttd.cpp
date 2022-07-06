// vnusttd.cpp : 定义 DLL 应用程序的导出函数。
//

#include "vnusttd.h"


///-------------------------------------------------------------------------------------
///C++的回调函数将数据保存到队列中
///-------------------------------------------------------------------------------------

void TdApi::OnFrontConnected()
{
	Task task = Task();
	task.task_name = ONFRONTCONNECTED;
	this->task_queue.push(task);
};

void TdApi::OnFrontDisconnected(int nResult)
{
	Task task = Task();
	task.task_name = ONFRONTDISCONNECTED;
	task.task_id = nResult;
	this->task_queue.push(task);
};

void TdApi::OnRspAuthenticate(CHSSecuRspAuthenticateField *pRspAuthenticate, CHSSecuRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	Task task = Task();
	task.task_name = ONRSPAUTHENTICATE;
	if (pRspAuthenticate)
	{
		CHSSecuRspAuthenticateField *task_data = new CHSSecuRspAuthenticateField();
		*task_data = *pRspAuthenticate;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		CHSSecuRspInfoField *task_error = new CHSSecuRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_id = nRequestID;
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void TdApi::OnRspUserLogin(CHSSecuRspUserLoginField *pRspUserLogin, CHSSecuRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	Task task = Task();
	task.task_name = ONRSPUSERLOGIN;
	if (pRspUserLogin)
	{
		CHSSecuRspUserLoginField *task_data = new CHSSecuRspUserLoginField();
		*task_data = *pRspUserLogin;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		CHSSecuRspInfoField *task_error = new CHSSecuRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_id = nRequestID;
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void TdApi::OnRspQryStkAcct(CHSSecuRspQryStkAcctField *pRspRspQryStkAcct, CHSSecuRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	Task task = Task();
	task.task_name = ONRSPQRYSTKACCT;
	if (pRspRspQryStkAcct)
	{
		CHSSecuRspQryStkAcctField *task_data = new CHSSecuRspQryStkAcctField();
		*task_data = *pRspRspQryStkAcct;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		CHSSecuRspInfoField *task_error = new CHSSecuRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_id = nRequestID;
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void TdApi::OnRspUserPasswordUpdate(CHSSecuRspUserPasswordUpdateField *pRspUserPasswordUpdate, CHSSecuRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	Task task = Task();
	task.task_name = ONRSPUSERPASSWORDUPDATE;
	if (pRspUserPasswordUpdate)
	{
		CHSSecuRspUserPasswordUpdateField *task_data = new CHSSecuRspUserPasswordUpdateField();
		*task_data = *pRspUserPasswordUpdate;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		CHSSecuRspInfoField *task_error = new CHSSecuRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_id = nRequestID;
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void TdApi::OnRspTransfer(CHSSecuRspTransferField *pRspTransfer, CHSSecuRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	Task task = Task();
	task.task_name = ONRSPTRANSFER;
	if (pRspTransfer)
	{
		CHSSecuRspTransferField *task_data = new CHSSecuRspTransferField();
		*task_data = *pRspTransfer;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		CHSSecuRspInfoField *task_error = new CHSSecuRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_id = nRequestID;
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void TdApi::OnRspFundTrans(CHSSecuRspFundTransField *pRspFundTrans, CHSSecuRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	Task task = Task();
	task.task_name = ONRSPFUNDTRANS;
	if (pRspFundTrans)
	{
		CHSSecuRspFundTransField *task_data = new CHSSecuRspFundTransField();
		*task_data = *pRspFundTrans;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		CHSSecuRspInfoField *task_error = new CHSSecuRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_id = nRequestID;
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void TdApi::OnRspFundAlloc(CHSSecuRspFundAllocField *pRspFundAlloc, CHSSecuRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	Task task = Task();
	task.task_name = ONRSPFUNDALLOC;
	if (pRspFundAlloc)
	{
		CHSSecuRspFundAllocField *task_data = new CHSSecuRspFundAllocField();
		*task_data = *pRspFundAlloc;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		CHSSecuRspInfoField *task_error = new CHSSecuRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_id = nRequestID;
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void TdApi::OnRspStockTrans(CHSSecuRspStockTransField *pRspStockTrans, CHSSecuRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	Task task = Task();
	task.task_name = ONRSPSTOCKTRANS;
	if (pRspStockTrans)
	{
		CHSSecuRspStockTransField *task_data = new CHSSecuRspStockTransField();
		*task_data = *pRspStockTrans;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		CHSSecuRspInfoField *task_error = new CHSSecuRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_id = nRequestID;
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void TdApi::OnRspOrderInsert(CHSSecuRspOrderInsertField *pRspOrderInsert, CHSSecuRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	Task task = Task();
	task.task_name = ONRSPORDERINSERT;
	if (pRspOrderInsert)
	{
		CHSSecuRspOrderInsertField *task_data = new CHSSecuRspOrderInsertField();
		*task_data = *pRspOrderInsert;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		CHSSecuRspInfoField *task_error = new CHSSecuRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_id = nRequestID;
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void TdApi::OnRspOrderAction(CHSSecuRspOrderActionField *pRspOrderAction, CHSSecuRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	Task task = Task();
	task.task_name = ONRSPORDERACTION;
	if (pRspOrderAction)
	{
		CHSSecuRspOrderActionField *task_data = new CHSSecuRspOrderActionField();
		*task_data = *pRspOrderAction;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		CHSSecuRspInfoField *task_error = new CHSSecuRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_id = nRequestID;
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void TdApi::OnRspQryHold(CHSSecuRspQryHoldField *pRspQryHold, CHSSecuRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	Task task = Task();
	task.task_name = ONRSPQRYHOLD;
	if (pRspQryHold)
	{
		CHSSecuRspQryHoldField *task_data = new CHSSecuRspQryHoldField();
		*task_data = *pRspQryHold;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		CHSSecuRspInfoField *task_error = new CHSSecuRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_id = nRequestID;
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void TdApi::OnRspQryFund(CHSSecuRspQryFundField *pRspQryFund, CHSSecuRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	Task task = Task();
	task.task_name = ONRSPQRYFUND;
	if (pRspQryFund)
	{
		CHSSecuRspQryFundField *task_data = new CHSSecuRspQryFundField();
		*task_data = *pRspQryFund;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		CHSSecuRspInfoField *task_error = new CHSSecuRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_id = nRequestID;
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void TdApi::OnRspQryOrder(CHSSecuOrderField *pRspQryOrder, CHSSecuRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	Task task = Task();
	task.task_name = ONRSPQRYORDER;
	if (pRspQryOrder)
	{
		CHSSecuOrderField *task_data = new CHSSecuOrderField();
		*task_data = *pRspQryOrder;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		CHSSecuRspInfoField *task_error = new CHSSecuRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_id = nRequestID;
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void TdApi::OnRspQryTrade(CHSSecuTradeField *pRspQryTrade, CHSSecuRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	Task task = Task();
	task.task_name = ONRSPQRYTRADE;
	if (pRspQryTrade)
	{
		CHSSecuTradeField *task_data = new CHSSecuTradeField();
		*task_data = *pRspQryTrade;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		CHSSecuRspInfoField *task_error = new CHSSecuRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_id = nRequestID;
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void TdApi::OnRspQryEquity(CHSSecuRspQryEquityField *pRspQryEquity, CHSSecuRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	Task task = Task();
	task.task_name = ONRSPQRYEQUITY;
	if (pRspQryEquity)
	{
		CHSSecuRspQryEquityField *task_data = new CHSSecuRspQryEquityField();
		*task_data = *pRspQryEquity;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		CHSSecuRspInfoField *task_error = new CHSSecuRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_id = nRequestID;
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void TdApi::OnRspQryStkcode(CHSSecuRspQryStkcodeField *pRspQryStkcode, CHSSecuRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	Task task = Task();
	task.task_name = ONRSPQRYSTKCODE;
	if (pRspQryStkcode)
	{
		CHSSecuRspQryStkcodeField *task_data = new CHSSecuRspQryStkcodeField();
		*task_data = *pRspQryStkcode;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		CHSSecuRspInfoField *task_error = new CHSSecuRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_id = nRequestID;
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void TdApi::OnRtnOrder(CHSSecuOrderField *pRtnOrder)
{
	Task task = Task();
	task.task_name = ONRTNORDER;
	if (pRtnOrder)
	{
		CHSSecuOrderField *task_data = new CHSSecuOrderField();
		*task_data = *pRtnOrder;
		task.task_data = task_data;
	}
	this->task_queue.push(task);
};

void TdApi::OnRtnTrade(CHSSecuTradeField *pRtnTrade)
{
	Task task = Task();
	task.task_name = ONRTNTRADE;
	if (pRtnTrade)
	{
		CHSSecuTradeField *task_data = new CHSSecuTradeField();
		*task_data = *pRtnTrade;
		task.task_data = task_data;
	}
	this->task_queue.push(task);
};

void TdApi::OnRspQryEtfcode(CHSSecuRspQryEtfcodeField *pRspQryEtfcode, CHSSecuRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	Task task = Task();
	task.task_name = ONRSPQRYETFCODE;
	if (pRspQryEtfcode)
	{
		CHSSecuRspQryEtfcodeField *task_data = new CHSSecuRspQryEtfcodeField();
		*task_data = *pRspQryEtfcode;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		CHSSecuRspInfoField *task_error = new CHSSecuRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_id = nRequestID;
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void TdApi::OnRspQryEtfcomponent(CHSSecuRspQryEtfcomponentField *pRspQryEtfcomponent, CHSSecuRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	Task task = Task();
	task.task_name = ONRSPQRYETFCOMPONENT;
	if (pRspQryEtfcomponent)
	{
		CHSSecuRspQryEtfcomponentField *task_data = new CHSSecuRspQryEtfcomponentField();
		*task_data = *pRspQryEtfcomponent;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		CHSSecuRspInfoField *task_error = new CHSSecuRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_id = nRequestID;
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void TdApi::OnRspQryImpawnDetail(CHSSecuRspQryImpawnDetailField *pRspQryImpawnDetail, CHSSecuRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	Task task = Task();
	task.task_name = ONRSPQRYIMPAWNDETAIL;
	if (pRspQryImpawnDetail)
	{
		CHSSecuRspQryImpawnDetailField *task_data = new CHSSecuRspQryImpawnDetailField();
		*task_data = *pRspQryImpawnDetail;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		CHSSecuRspInfoField *task_error = new CHSSecuRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_id = nRequestID;
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void TdApi::OnRspQryBondImpawnConc(CHSSecuRspQryBondImpawnConcField *pRspQryBondImpawnConc, CHSSecuRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	Task task = Task();
	task.task_name = ONRSPQRYBONDIMPAWNCONC;
	if (pRspQryBondImpawnConc)
	{
		CHSSecuRspQryBondImpawnConcField *task_data = new CHSSecuRspQryBondImpawnConcField();
		*task_data = *pRspQryBondImpawnConc;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		CHSSecuRspInfoField *task_error = new CHSSecuRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_id = nRequestID;
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void TdApi::OnRspCashRepay(CHSSecuRspCashRepayField *pRspCashRepay, CHSSecuRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	Task task = Task();
	task.task_name = ONRSPCASHREPAY;
	if (pRspCashRepay)
	{
		CHSSecuRspCashRepayField *task_data = new CHSSecuRspCashRepayField();
		*task_data = *pRspCashRepay;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		CHSSecuRspInfoField *task_error = new CHSSecuRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_id = nRequestID;
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void TdApi::OnRspQryEnfinFund(CHSSecuRspQryEnfinFundField *pRspQryEnfinFund, CHSSecuRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	Task task = Task();
	task.task_name = ONRSPQRYENFINFUND;
	if (pRspQryEnfinFund)
	{
		CHSSecuRspQryEnfinFundField *task_data = new CHSSecuRspQryEnfinFundField();
		*task_data = *pRspQryEnfinFund;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		CHSSecuRspInfoField *task_error = new CHSSecuRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_id = nRequestID;
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void TdApi::OnRspQryEnsloStock(CHSSecuRspQryEnsloStockField *pRspQryEnsloStock, CHSSecuRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	Task task = Task();
	task.task_name = ONRSPQRYENSLOSTOCK;
	if (pRspQryEnsloStock)
	{
		CHSSecuRspQryEnsloStockField *task_data = new CHSSecuRspQryEnsloStockField();
		*task_data = *pRspQryEnsloStock;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		CHSSecuRspInfoField *task_error = new CHSSecuRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_id = nRequestID;
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void TdApi::OnRspQryCreditCollateral(CHSSecuRspQryCreditCollateralField *pRspQryCreditCollateral, CHSSecuRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	Task task = Task();
	task.task_name = ONRSPQRYCREDITCOLLATERAL;
	if (pRspQryCreditCollateral)
	{
		CHSSecuRspQryCreditCollateralField *task_data = new CHSSecuRspQryCreditCollateralField();
		*task_data = *pRspQryCreditCollateral;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		CHSSecuRspInfoField *task_error = new CHSSecuRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_id = nRequestID;
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void TdApi::OnRspQryCreditUnderlying(CHSSecuRspQryCreditUnderlyingField *pRspQryCreditUnderlying, CHSSecuRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	Task task = Task();
	task.task_name = ONRSPQRYCREDITUNDERLYING;
	if (pRspQryCreditUnderlying)
	{
		CHSSecuRspQryCreditUnderlyingField *task_data = new CHSSecuRspQryCreditUnderlyingField();
		*task_data = *pRspQryCreditUnderlying;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		CHSSecuRspInfoField *task_error = new CHSSecuRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_id = nRequestID;
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void TdApi::OnRspQryCreditRate(CHSSecuRspQryCreditRateField *pRspQryCreditRate, CHSSecuRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	Task task = Task();
	task.task_name = ONRSPQRYCREDITRATE;
	if (pRspQryCreditRate)
	{
		CHSSecuRspQryCreditRateField *task_data = new CHSSecuRspQryCreditRateField();
		*task_data = *pRspQryCreditRate;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		CHSSecuRspInfoField *task_error = new CHSSecuRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_id = nRequestID;
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void TdApi::OnRspQryCreditAsset(CHSSecuRspQryCreditAssetField *pRspQryCreditAsset, CHSSecuRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	Task task = Task();
	task.task_name = ONRSPQRYCREDITASSET;
	if (pRspQryCreditAsset)
	{
		CHSSecuRspQryCreditAssetField *task_data = new CHSSecuRspQryCreditAssetField();
		*task_data = *pRspQryCreditAsset;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		CHSSecuRspInfoField *task_error = new CHSSecuRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_id = nRequestID;
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void TdApi::OnRspQryCompact(CHSSecuRspQryCompactField *pRspQryCompact, CHSSecuRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	Task task = Task();
	task.task_name = ONRSPQRYCOMPACT;
	if (pRspQryCompact)
	{
		CHSSecuRspQryCompactField *task_data = new CHSSecuRspQryCompactField();
		*task_data = *pRspQryCompact;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		CHSSecuRspInfoField *task_error = new CHSSecuRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_id = nRequestID;
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void TdApi::OnRspComOrderInsert(CHSSecuRspComOrderInsertField *pRspComOrderInsert, CHSSecuRspComInfoField *pRspComInfo, int nRequestID, bool bIsLast)
{
	Task task = Task();
	task.task_name = ONRSPCOMORDERINSERT;
	if (pRspComOrderInsert)
	{
		CHSSecuRspComOrderInsertField *task_data = new CHSSecuRspComOrderInsertField();
		*task_data = *pRspComOrderInsert;
		task.task_data = task_data;
	}
	if (pRspComInfo)
	{
		CHSSecuRspComInfoField *task_data = new CHSSecuRspComInfoField();
		*task_data = *pRspComInfo;
		task.task_data = task_data;
	}
	task.task_id = nRequestID;
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void TdApi::OnRspCompactApply(CHSSecuRspCompactApplyField *pRspCompactApply, CHSSecuRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	Task task = Task();
	task.task_name = ONRSPCOMPACTAPPLY;
	if (pRspCompactApply)
	{
		CHSSecuRspCompactApplyField *task_data = new CHSSecuRspCompactApplyField();
		*task_data = *pRspCompactApply;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		CHSSecuRspInfoField *task_error = new CHSSecuRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_id = nRequestID;
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void TdApi::OnRspQryApplycode(CHSSecuRspQryApplycodeField *pRspQryApplycode, CHSSecuRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	Task task = Task();
	task.task_name = ONRSPQRYAPPLYCODE;
	if (pRspQryApplycode)
	{
		CHSSecuRspQryApplycodeField *task_data = new CHSSecuRspQryApplycodeField();
		*task_data = *pRspQryApplycode;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		CHSSecuRspInfoField *task_error = new CHSSecuRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_id = nRequestID;
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void TdApi::OnRspQryFundUF20(CHSSecuRspQryFundUF20Field *pRspQryFundUF20, CHSSecuRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	Task task = Task();
	task.task_name = ONRSPQRYFUNDUF20;
	if (pRspQryFundUF20)
	{
		CHSSecuRspQryFundUF20Field *task_data = new CHSSecuRspQryFundUF20Field();
		*task_data = *pRspQryFundUF20;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		CHSSecuRspInfoField *task_error = new CHSSecuRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_id = nRequestID;
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void TdApi::OnRspQryFundRealJour(CHSSecuRspQryFundRealJourField *pRspQryFundRealJour, CHSSecuRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	Task task = Task();
	task.task_name = ONRSPQRYFUNDREALJOUR;
	if (pRspQryFundRealJour)
	{
		CHSSecuRspQryFundRealJourField *task_data = new CHSSecuRspQryFundRealJourField();
		*task_data = *pRspQryFundRealJour;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		CHSSecuRspInfoField *task_error = new CHSSecuRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_id = nRequestID;
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void TdApi::OnRspQryCompactRealJour(CHSSecuRspQryCompactRealJourField *pRspQryCompactRealJour, CHSSecuRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	Task task = Task();
	task.task_name = ONRSPQRYCOMPACTREALJOUR;
	if (pRspQryCompactRealJour)
	{
		CHSSecuRspQryCompactRealJourField *task_data = new CHSSecuRspQryCompactRealJourField();
		*task_data = *pRspQryCompactRealJour;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		CHSSecuRspInfoField *task_error = new CHSSecuRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_id = nRequestID;
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void TdApi::OnRspQryMaxEntradeNum(CHSSecuRspQryMaxEntradeNumField *pRspQryMaxEntradeNum, CHSSecuRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	Task task = Task();
	task.task_name = ONRSPQRYMAXENTRADENUM;
	if (pRspQryMaxEntradeNum)
	{
		CHSSecuRspQryMaxEntradeNumField *task_data = new CHSSecuRspQryMaxEntradeNumField();
		*task_data = *pRspQryMaxEntradeNum;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		CHSSecuRspInfoField *task_error = new CHSSecuRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_id = nRequestID;
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void TdApi::OnRspQryStockRealJour(CHSSecuRspQryStockRealJourField *pRspQryStockRealJour, CHSSecuRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	Task task = Task();
	task.task_name = ONRSPQRYSTOCKREALJOUR;
	if (pRspQryStockRealJour)
	{
		CHSSecuRspQryStockRealJourField *task_data = new CHSSecuRspQryStockRealJourField();
		*task_data = *pRspQryStockRealJour;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		CHSSecuRspInfoField *task_error = new CHSSecuRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_id = nRequestID;
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void TdApi::OnRspQryBankAccount(CHSSecuRspQryBankAccountField *pRspQryBankAccount, CHSSecuRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	Task task = Task();
	task.task_name = ONRSPQRYBANKACCOUNT;
	if (pRspQryBankAccount)
	{
		CHSSecuRspQryBankAccountField *task_data = new CHSSecuRspQryBankAccountField();
		*task_data = *pRspQryBankAccount;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		CHSSecuRspInfoField *task_error = new CHSSecuRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_id = nRequestID;
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void TdApi::OnRspQryHKSecurate(CHSSecuRspQryHKSecurateField *pRspQryHKSecurate, CHSSecuRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	Task task = Task();
	task.task_name = ONRSPQRYHKSECURATE;
	if (pRspQryHKSecurate)
	{
		CHSSecuRspQryHKSecurateField *task_data = new CHSSecuRspQryHKSecurateField();
		*task_data = *pRspQryHKSecurate;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		CHSSecuRspInfoField *task_error = new CHSSecuRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_id = nRequestID;
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void TdApi::OnRspQryAssureAmount(CHSSecuRspQryAssureAmountField *pRspQryAssureAmount, CHSSecuRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	Task task = Task();
	task.task_name = ONRSPQRYASSUREAMOUNT;
	if (pRspQryAssureAmount)
	{
		CHSSecuRspQryAssureAmountField *task_data = new CHSSecuRspQryAssureAmountField();
		*task_data = *pRspQryAssureAmount;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		CHSSecuRspInfoField *task_error = new CHSSecuRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_id = nRequestID;
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void TdApi::OnRspQryAssureBackAmount(CHSSecuRspQryAssureBackAmountField *pRspQryAssureBackAmount, CHSSecuRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	Task task = Task();
	task.task_name = ONRSPQRYASSUREBACKAMOUNT;
	if (pRspQryAssureBackAmount)
	{
		CHSSecuRspQryAssureBackAmountField *task_data = new CHSSecuRspQryAssureBackAmountField();
		*task_data = *pRspQryAssureBackAmount;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		CHSSecuRspInfoField *task_error = new CHSSecuRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_id = nRequestID;
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void TdApi::OnRspQryFundPeer(CHSSecuRspQryFundPeerField *pRspQryFundPeer, CHSSecuRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	Task task = Task();
	task.task_name = ONRSPQRYFUNDPEER;
	if (pRspQryFundPeer)
	{
		CHSSecuRspQryFundPeerField *task_data = new CHSSecuRspQryFundPeerField();
		*task_data = *pRspQryFundPeer;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		CHSSecuRspInfoField *task_error = new CHSSecuRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_id = nRequestID;
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

///-------------------------------------------------------------------------------------
///工作线程从队列中取出数据，转化为python对象后，进行推送
///-------------------------------------------------------------------------------------


void TdApi::processTask()
{
	try
	{
		while (this->active)
		{
			Task task = this->task_queue.pop();

			switch (task.task_name)
			{
			case ONFRONTCONNECTED:
			{
				this->processFrontConnected(&task);
				break;
			}

			case ONFRONTDISCONNECTED:
			{
				this->processFrontDisconnected(&task);
				break;
			}

			case ONRSPAUTHENTICATE:
			{
				this->processRspAuthenticate(&task);
				break;
			}

			case ONRSPUSERLOGIN:
			{
				this->processRspUserLogin(&task);
				break;
			}

			case ONRSPQRYSTKACCT:
			{
				this->processRspQryStkAcct(&task);
				break;
			}

			case ONRSPUSERPASSWORDUPDATE:
			{
				this->processRspUserPasswordUpdate(&task);
				break;
			}

			case ONRSPTRANSFER:
			{
				this->processRspTransfer(&task);
				break;
			}

			case ONRSPFUNDTRANS:
			{
				this->processRspFundTrans(&task);
				break;
			}

			case ONRSPFUNDALLOC:
			{
				this->processRspFundAlloc(&task);
				break;
			}

			case ONRSPSTOCKTRANS:
			{
				this->processRspStockTrans(&task);
				break;
			}

			case ONRSPORDERINSERT:
			{
				this->processRspOrderInsert(&task);
				break;
			}

			case ONRSPORDERACTION:
			{
				this->processRspOrderAction(&task);
				break;
			}

			case ONRSPQRYHOLD:
			{
				this->processRspQryHold(&task);
				break;
			}

			case ONRSPQRYFUND:
			{
				this->processRspQryFund(&task);
				break;
			}

			case ONRSPQRYORDER:
			{
				this->processRspQryOrder(&task);
				break;
			}

			case ONRSPQRYTRADE:
			{
				this->processRspQryTrade(&task);
				break;
			}

			case ONRSPQRYEQUITY:
			{
				this->processRspQryEquity(&task);
				break;
			}

			case ONRSPQRYSTKCODE:
			{
				this->processRspQryStkcode(&task);
				break;
			}

			case ONRTNORDER:
			{
				this->processRtnOrder(&task);
				break;
			}

			case ONRTNTRADE:
			{
				this->processRtnTrade(&task);
				break;
			}

			case ONRSPQRYETFCODE:
			{
				this->processRspQryEtfcode(&task);
				break;
			}

			case ONRSPQRYETFCOMPONENT:
			{
				this->processRspQryEtfcomponent(&task);
				break;
			}

			case ONRSPQRYIMPAWNDETAIL:
			{
				this->processRspQryImpawnDetail(&task);
				break;
			}

			case ONRSPQRYBONDIMPAWNCONC:
			{
				this->processRspQryBondImpawnConc(&task);
				break;
			}

			case ONRSPCASHREPAY:
			{
				this->processRspCashRepay(&task);
				break;
			}

			case ONRSPQRYENFINFUND:
			{
				this->processRspQryEnfinFund(&task);
				break;
			}

			case ONRSPQRYENSLOSTOCK:
			{
				this->processRspQryEnsloStock(&task);
				break;
			}

			case ONRSPQRYCREDITCOLLATERAL:
			{
				this->processRspQryCreditCollateral(&task);
				break;
			}

			case ONRSPQRYCREDITUNDERLYING:
			{
				this->processRspQryCreditUnderlying(&task);
				break;
			}

			case ONRSPQRYCREDITRATE:
			{
				this->processRspQryCreditRate(&task);
				break;
			}

			case ONRSPQRYCREDITASSET:
			{
				this->processRspQryCreditAsset(&task);
				break;
			}

			case ONRSPQRYCOMPACT:
			{
				this->processRspQryCompact(&task);
				break;
			}

			case ONRSPCOMORDERINSERT:
			{
				this->processRspComOrderInsert(&task);
				break;
			}

			case ONRSPCOMPACTAPPLY:
			{
				this->processRspCompactApply(&task);
				break;
			}

			case ONRSPQRYAPPLYCODE:
			{
				this->processRspQryApplycode(&task);
				break;
			}

			case ONRSPQRYFUNDUF20:
			{
				this->processRspQryFundUF20(&task);
				break;
			}

			case ONRSPQRYFUNDREALJOUR:
			{
				this->processRspQryFundRealJour(&task);
				break;
			}

			case ONRSPQRYCOMPACTREALJOUR:
			{
				this->processRspQryCompactRealJour(&task);
				break;
			}

			case ONRSPQRYMAXENTRADENUM:
			{
				this->processRspQryMaxEntradeNum(&task);
				break;
			}

			case ONRSPQRYSTOCKREALJOUR:
			{
				this->processRspQryStockRealJour(&task);
				break;
			}

			case ONRSPQRYBANKACCOUNT:
			{
				this->processRspQryBankAccount(&task);
				break;
			}

			case ONRSPQRYHKSECURATE:
			{
				this->processRspQryHKSecurate(&task);
				break;
			}

			case ONRSPQRYASSUREAMOUNT:
			{
				this->processRspQryAssureAmount(&task);
				break;
			}

			case ONRSPQRYASSUREBACKAMOUNT:
			{
				this->processRspQryAssureBackAmount(&task);
				break;
			}

			case ONRSPQRYFUNDPEER:
			{
				this->processRspQryFundPeer(&task);
				break;
			}
			};
		}
	}
	catch (const TerminatedError&)
	{
	}
};

void TdApi::processFrontConnected(Task *task)
{
	gil_scoped_acquire acquire;
	this->onFrontConnected();
};

void TdApi::processFrontDisconnected(Task *task)
{
	gil_scoped_acquire acquire;
	this->onFrontDisconnected(task->task_id);
};

void TdApi::processRspAuthenticate(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CHSSecuRspAuthenticateField *task_data = (CHSSecuRspAuthenticateField*)task->task_data;
		data["AccountID"] = toUtf(task_data->AccountID);
		data["AppID"] = toUtf(task_data->AppID);
		data["AuthCode"] = toUtf(task_data->AuthCode);
		delete task_data;
	}
	dict error;
	if (task->task_error)
	{
		CHSSecuRspInfoField *task_error = (CHSSecuRspInfoField*)task->task_error;
		error["ErrorID"] = task_error->ErrorID;
		error["ErrorMsg"] = toUtf(task_error->ErrorMsg);
		delete task_error;
	}
	this->onRspAuthenticate(data, error, task->task_id, task->task_last);
};

void TdApi::processRspUserLogin(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CHSSecuRspUserLoginField *task_data = (CHSSecuRspUserLoginField*)task->task_data;
		data["BranchID"] = task_data->BranchID;
		data["AccountID"] = toUtf(task_data->AccountID);
		data["AssetProp"] = task_data->AssetProp;
		data["UserName"] = toUtf(task_data->UserName);
		data["TradingDay"] = task_data->TradingDay;
		data["OrderRef"] = toUtf(task_data->OrderRef);
		data["SessionID"] = task_data->SessionID;
		data["UserID"] = toUtf(task_data->UserID);
		delete task_data;
	}
	dict error;
	if (task->task_error)
	{
		CHSSecuRspInfoField *task_error = (CHSSecuRspInfoField*)task->task_error;
		error["ErrorID"] = task_error->ErrorID;
		error["ErrorMsg"] = toUtf(task_error->ErrorMsg);
		delete task_error;
	}
	this->onRspUserLogin(data, error, task->task_id, task->task_last);
};

void TdApi::processRspQryStkAcct(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CHSSecuRspQryStkAcctField *task_data = (CHSSecuRspQryStkAcctField*)task->task_data;
		data["AccountID"] = toUtf(task_data->AccountID);
		data["ExchangeID"] = toUtf(task_data->ExchangeID);
		data["StockAccount"] = toUtf(task_data->StockAccount);
		delete task_data;
	}
	dict error;
	if (task->task_error)
	{
		CHSSecuRspInfoField *task_error = (CHSSecuRspInfoField*)task->task_error;
		error["ErrorID"] = task_error->ErrorID;
		error["ErrorMsg"] = toUtf(task_error->ErrorMsg);
		delete task_error;
	}
	this->onRspQryStkAcct(data, error, task->task_id, task->task_last);
};

void TdApi::processRspUserPasswordUpdate(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CHSSecuRspUserPasswordUpdateField *task_data = (CHSSecuRspUserPasswordUpdateField*)task->task_data;
		delete task_data;
	}
	dict error;
	if (task->task_error)
	{
		CHSSecuRspInfoField *task_error = (CHSSecuRspInfoField*)task->task_error;
		error["ErrorID"] = task_error->ErrorID;
		error["ErrorMsg"] = toUtf(task_error->ErrorMsg);
		delete task_error;
	}
	this->onRspUserPasswordUpdate(data, error, task->task_id, task->task_last);
};

void TdApi::processRspTransfer(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CHSSecuRspTransferField *task_data = (CHSSecuRspTransferField*)task->task_data;
		data["TransferSerialID"] = task_data->TransferSerialID;
		data["BankID"] = toUtf(task_data->BankID);
		data["TransferType"] = task_data->TransferType;
		data["OccurBalance"] = task_data->OccurBalance;
		data["CurrencyID"] = task_data->CurrencyID;
		data["TransferOccasion"] = toUtf(task_data->TransferOccasion);
		delete task_data;
	}
	dict error;
	if (task->task_error)
	{
		CHSSecuRspInfoField *task_error = (CHSSecuRspInfoField*)task->task_error;
		error["ErrorID"] = task_error->ErrorID;
		error["ErrorMsg"] = toUtf(task_error->ErrorMsg);
		delete task_error;
	}
	this->onRspTransfer(data, error, task->task_id, task->task_last);
};

void TdApi::processRspFundTrans(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CHSSecuRspFundTransField *task_data = (CHSSecuRspFundTransField*)task->task_data;
		data["FundTransSerialID"] = task_data->FundTransSerialID;
		delete task_data;
	}
	dict error;
	if (task->task_error)
	{
		CHSSecuRspInfoField *task_error = (CHSSecuRspInfoField*)task->task_error;
		error["ErrorID"] = task_error->ErrorID;
		error["ErrorMsg"] = toUtf(task_error->ErrorMsg);
		delete task_error;
	}
	this->onRspFundTrans(data, error, task->task_id, task->task_last);
};

void TdApi::processRspFundAlloc(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CHSSecuRspFundAllocField *task_data = (CHSSecuRspFundAllocField*)task->task_data;
		data["FundTransSerialID"] = task_data->FundTransSerialID;
		delete task_data;
	}
	dict error;
	if (task->task_error)
	{
		CHSSecuRspInfoField *task_error = (CHSSecuRspInfoField*)task->task_error;
		error["ErrorID"] = task_error->ErrorID;
		error["ErrorMsg"] = toUtf(task_error->ErrorMsg);
		delete task_error;
	}
	this->onRspFundAlloc(data, error, task->task_id, task->task_last);
};

void TdApi::processRspStockTrans(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CHSSecuRspStockTransField *task_data = (CHSSecuRspStockTransField*)task->task_data;
		data["StockTransSerialID"] = task_data->StockTransSerialID;
		delete task_data;
	}
	dict error;
	if (task->task_error)
	{
		CHSSecuRspInfoField *task_error = (CHSSecuRspInfoField*)task->task_error;
		error["ErrorID"] = task_error->ErrorID;
		error["ErrorMsg"] = toUtf(task_error->ErrorMsg);
		delete task_error;
	}
	this->onRspStockTrans(data, error, task->task_id, task->task_last);
};

void TdApi::processRspOrderInsert(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CHSSecuRspOrderInsertField *task_data = (CHSSecuRspOrderInsertField*)task->task_data;
		data["OrderPartition"] = task_data->OrderPartition;
		data["BrokerOrderID"] = toUtf(task_data->BrokerOrderID);
		data["SessionID"] = task_data->SessionID;
		data["OrderRef"] = toUtf(task_data->OrderRef);
		data["BatchNo"] = task_data->BatchNo;
		data["ClientOrderID"] = task_data->ClientOrderID;
		delete task_data;
	}
	dict error;
	if (task->task_error)
	{
		CHSSecuRspInfoField *task_error = (CHSSecuRspInfoField*)task->task_error;
		error["ErrorID"] = task_error->ErrorID;
		error["ErrorMsg"] = toUtf(task_error->ErrorMsg);
		delete task_error;
	}
	this->onRspOrderInsert(data, error, task->task_id, task->task_last);
};

void TdApi::processRspOrderAction(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CHSSecuRspOrderActionField *task_data = (CHSSecuRspOrderActionField*)task->task_data;
		data["OrderPartition"] = task_data->OrderPartition;
		data["BrokerOrderID"] = toUtf(task_data->BrokerOrderID);
		data["OrigOrderPartition"] = task_data->OrigOrderPartition;
		data["OrigBrokerOrderID"] = toUtf(task_data->OrigBrokerOrderID);
		data["OrigSessionID"] = task_data->OrigSessionID;
		data["OrigOrderRef"] = toUtf(task_data->OrigOrderRef);
		data["OrigClientOrderID"] = task_data->OrigClientOrderID;
		delete task_data;
	}
	dict error;
	if (task->task_error)
	{
		CHSSecuRspInfoField *task_error = (CHSSecuRspInfoField*)task->task_error;
		error["ErrorID"] = task_error->ErrorID;
		error["ErrorMsg"] = toUtf(task_error->ErrorMsg);
		delete task_error;
	}
	this->onRspOrderAction(data, error, task->task_id, task->task_last);
};

void TdApi::processRspQryHold(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CHSSecuRspQryHoldField *task_data = (CHSSecuRspQryHoldField*)task->task_data;
		data["AccountID"] = toUtf(task_data->AccountID);
		data["ExchangeID"] = toUtf(task_data->ExchangeID);
		data["StockAccount"] = toUtf(task_data->StockAccount);
		data["StockCode"] = toUtf(task_data->StockCode);
		data["StockName"] = toUtf(task_data->StockName);
		data["StockType"] = toUtf(task_data->StockType);
		data["CurrentVolume"] = task_data->CurrentVolume;
		data["AvailableVolume"] = task_data->AvailableVolume;
		data["AvBuyPrice"] = task_data->AvBuyPrice;
		data["AssetPrice"] = task_data->AssetPrice;
		data["AchvProfit"] = task_data->AchvProfit;
		data["BeginVolume"] = task_data->BeginVolume;
		data["RealBuyVolume"] = task_data->RealBuyVolume;
		data["RealSellVolume"] = task_data->RealSellVolume;
		data["UncomeBuyVolume"] = task_data->UncomeBuyVolume;
		data["UncomeSellVolume"] = task_data->UncomeSellVolume;
		data["FloatProfit"] = task_data->FloatProfit;
		data["MarketValue"] = task_data->MarketValue;
		delete task_data;
	}
	dict error;
	if (task->task_error)
	{
		CHSSecuRspInfoField *task_error = (CHSSecuRspInfoField*)task->task_error;
		error["ErrorID"] = task_error->ErrorID;
		error["ErrorMsg"] = toUtf(task_error->ErrorMsg);
		delete task_error;
	}
	this->onRspQryHold(data, error, task->task_id, task->task_last);
};

void TdApi::processRspQryFund(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CHSSecuRspQryFundField *task_data = (CHSSecuRspQryFundField*)task->task_data;
		data["CurrencyID"] = task_data->CurrencyID;
		data["CurrentBalance"] = task_data->CurrentBalance;
		data["BeginBalance"] = task_data->BeginBalance;
		data["AvailableBalance"] = task_data->AvailableBalance;
		data["FetchBalance"] = task_data->FetchBalance;
		data["MarketValue"] = task_data->MarketValue;
		data["TotalAsset"] = task_data->TotalAsset;
		delete task_data;
	}
	dict error;
	if (task->task_error)
	{
		CHSSecuRspInfoField *task_error = (CHSSecuRspInfoField*)task->task_error;
		error["ErrorID"] = task_error->ErrorID;
		error["ErrorMsg"] = toUtf(task_error->ErrorMsg);
		delete task_error;
	}
	this->onRspQryFund(data, error, task->task_id, task->task_last);
};

void TdApi::processRspQryOrder(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CHSSecuOrderField *task_data = (CHSSecuOrderField*)task->task_data;
		data["TradingDay"] = task_data->TradingDay;
		data["AccountID"] = toUtf(task_data->AccountID);
		data["OrderPartition"] = task_data->OrderPartition;
		data["BrokerOrderID"] = toUtf(task_data->BrokerOrderID);
		data["SessionID"] = task_data->SessionID;
		data["OrderRef"] = toUtf(task_data->OrderRef);
		data["ExchangeID"] = toUtf(task_data->ExchangeID);
		data["StockAccount"] = toUtf(task_data->StockAccount);
		data["StockCode"] = toUtf(task_data->StockCode);
		data["Direction"] = task_data->Direction;
		data["OrderPrice"] = task_data->OrderPrice;
		data["OrderVolume"] = task_data->OrderVolume;
		data["OrderStatus"] = task_data->OrderStatus;
		data["OrderCommand"] = task_data->OrderCommand;
		data["ReportTime"] = task_data->ReportTime;
		data["ErrorMsg"] = toUtf(task_data->ErrorMsg);
		data["TradeVolume"] = task_data->TradeVolume;
		data["BatchNo"] = task_data->BatchNo;
		data["WithdrawVolume"] = task_data->WithdrawVolume;
		data["OrderTime"] = task_data->OrderTime;
		data["BrokerWithdrawOrderID"] = toUtf(task_data->BrokerWithdrawOrderID);
		data["FrozenBalance"] = task_data->FrozenBalance;
		data["FrozenFare"] = task_data->FrozenFare;
		data["BranchID"] = task_data->BranchID;
		data["OrderAssStatus"] = task_data->OrderAssStatus;
		data["WithdrawOrderStatus"] = task_data->WithdrawOrderStatus;
		data["OccurTime"] = task_data->OccurTime;
		data["ClientOrderID"] = task_data->ClientOrderID;
		data["StockName"] = toUtf(task_data->StockName);
		data["TradePrice"] = task_data->TradePrice;
		data["BusinessBalance"] = task_data->BusinessBalance;
		delete task_data;
	}
	dict error;
	if (task->task_error)
	{
		CHSSecuRspInfoField *task_error = (CHSSecuRspInfoField*)task->task_error;
		error["ErrorID"] = task_error->ErrorID;
		error["ErrorMsg"] = toUtf(task_error->ErrorMsg);
		delete task_error;
	}
	this->onRspQryOrder(data, error, task->task_id, task->task_last);
};

void TdApi::processRspQryTrade(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CHSSecuTradeField *task_data = (CHSSecuTradeField*)task->task_data;
		data["TradingDay"] = task_data->TradingDay;
		data["AccountID"] = toUtf(task_data->AccountID);
		data["OrderPartition"] = task_data->OrderPartition;
		data["BrokerOrderID"] = toUtf(task_data->BrokerOrderID);
		data["SessionID"] = task_data->SessionID;
		data["OrderRef"] = toUtf(task_data->OrderRef);
		data["ExchangeID"] = toUtf(task_data->ExchangeID);
		data["StockAccount"] = toUtf(task_data->StockAccount);
		data["StockCode"] = toUtf(task_data->StockCode);
		data["Direction"] = task_data->Direction;
		data["OrderCommand"] = task_data->OrderCommand;
		data["TradeStatus"] = task_data->TradeStatus;
		data["TradeID"] = toUtf(task_data->TradeID);
		data["TradeVolume"] = task_data->TradeVolume;
		data["TradePrice"] = task_data->TradePrice;
		data["TradeTime"] = task_data->TradeTime;
		data["ErrorMsg"] = toUtf(task_data->ErrorMsg);
		data["BatchNo"] = task_data->BatchNo;
		data["BrokerWithdrawOrderID"] = toUtf(task_data->BrokerWithdrawOrderID);
		data["BusinessBalance"] = task_data->BusinessBalance;
		data["BranchID"] = task_data->BranchID;
		data["OrderStatus"] = task_data->OrderStatus;
		data["OccurTime"] = task_data->OccurTime;
		data["ClientOrderID"] = task_data->ClientOrderID;
		delete task_data;
	}
	dict error;
	if (task->task_error)
	{
		CHSSecuRspInfoField *task_error = (CHSSecuRspInfoField*)task->task_error;
		error["ErrorID"] = task_error->ErrorID;
		error["ErrorMsg"] = toUtf(task_error->ErrorMsg);
		delete task_error;
	}
	this->onRspQryTrade(data, error, task->task_id, task->task_last);
};

void TdApi::processRspQryEquity(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CHSSecuRspQryEquityField *task_data = (CHSSecuRspQryEquityField*)task->task_data;
		data["TradingDay"] = task_data->TradingDay;
		data["BranchID"] = task_data->BranchID;
		data["AccountID"] = toUtf(task_data->AccountID);
		data["StockAccount"] = toUtf(task_data->StockAccount);
		data["ExchangeID"] = toUtf(task_data->ExchangeID);
		data["AvailableVolume"] = task_data->AvailableVolume;
		data["StarAvailableVolume"] = task_data->StarAvailableVolume;
		delete task_data;
	}
	dict error;
	if (task->task_error)
	{
		CHSSecuRspInfoField *task_error = (CHSSecuRspInfoField*)task->task_error;
		error["ErrorID"] = task_error->ErrorID;
		error["ErrorMsg"] = toUtf(task_error->ErrorMsg);
		delete task_error;
	}
	this->onRspQryEquity(data, error, task->task_id, task->task_last);
};

void TdApi::processRspQryStkcode(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CHSSecuRspQryStkcodeField *task_data = (CHSSecuRspQryStkcodeField*)task->task_data;
		data["ExchangeID"] = toUtf(task_data->ExchangeID);
		data["StockCode"] = toUtf(task_data->StockCode);
		data["StockName"] = toUtf(task_data->StockName);
		data["BuyUnit"] = task_data->BuyUnit;
		data["PriceStep"] = task_data->PriceStep;
		data["StoreUnit"] = task_data->StoreUnit;
		data["MaxVolume"] = task_data->MaxVolume;
		data["MinVolume"] = task_data->MinVolume;
		data["StockType"] = toUtf(task_data->StockType);
		data["ParValue"] = task_data->ParValue;
		data["SubStockType"] = toUtf(task_data->SubStockType);
		data["MaxBalance"] = task_data->MaxBalance;
		data["MinBalance"] = task_data->MinBalance;
		data["StockCodeStatus"] = task_data->StockCodeStatus;
		data["DelistFlag"] = task_data->DelistFlag;
		data["UpPrice"] = task_data->UpPrice;
		data["DownPrice"] = task_data->DownPrice;
		delete task_data;
	}
	dict error;
	if (task->task_error)
	{
		CHSSecuRspInfoField *task_error = (CHSSecuRspInfoField*)task->task_error;
		error["ErrorID"] = task_error->ErrorID;
		error["ErrorMsg"] = toUtf(task_error->ErrorMsg);
		delete task_error;
	}
	this->onRspQryStkcode(data, error, task->task_id, task->task_last);
};

void TdApi::processRtnOrder(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CHSSecuOrderField *task_data = (CHSSecuOrderField*)task->task_data;
		data["TradingDay"] = task_data->TradingDay;
		data["AccountID"] = toUtf(task_data->AccountID);
		data["OrderPartition"] = task_data->OrderPartition;
		data["BrokerOrderID"] = toUtf(task_data->BrokerOrderID);
		data["SessionID"] = task_data->SessionID;
		data["OrderRef"] = toUtf(task_data->OrderRef);
		data["ExchangeID"] = toUtf(task_data->ExchangeID);
		data["StockAccount"] = toUtf(task_data->StockAccount);
		data["StockCode"] = toUtf(task_data->StockCode);
		data["Direction"] = task_data->Direction;
		data["OrderPrice"] = task_data->OrderPrice;
		data["OrderVolume"] = task_data->OrderVolume;
		data["OrderStatus"] = task_data->OrderStatus;
		data["OrderCommand"] = task_data->OrderCommand;
		data["ReportTime"] = task_data->ReportTime;
		data["ErrorMsg"] = toUtf(task_data->ErrorMsg);
		data["TradeVolume"] = task_data->TradeVolume;
		data["BatchNo"] = task_data->BatchNo;
		data["WithdrawVolume"] = task_data->WithdrawVolume;
		data["OrderTime"] = task_data->OrderTime;
		data["BrokerWithdrawOrderID"] = toUtf(task_data->BrokerWithdrawOrderID);
		data["FrozenBalance"] = task_data->FrozenBalance;
		data["FrozenFare"] = task_data->FrozenFare;
		data["BranchID"] = task_data->BranchID;
		data["OrderAssStatus"] = task_data->OrderAssStatus;
		data["WithdrawOrderStatus"] = task_data->WithdrawOrderStatus;
		data["OccurTime"] = task_data->OccurTime;
		data["ClientOrderID"] = task_data->ClientOrderID;
		data["StockName"] = toUtf(task_data->StockName);
		data["TradePrice"] = task_data->TradePrice;
		data["BusinessBalance"] = task_data->BusinessBalance;
		delete task_data;
	}
	this->onRtnOrder(data);
};

void TdApi::processRtnTrade(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CHSSecuTradeField *task_data = (CHSSecuTradeField*)task->task_data;
		data["TradingDay"] = task_data->TradingDay;
		data["AccountID"] = toUtf(task_data->AccountID);
		data["OrderPartition"] = task_data->OrderPartition;
		data["BrokerOrderID"] = toUtf(task_data->BrokerOrderID);
		data["SessionID"] = task_data->SessionID;
		data["OrderRef"] = toUtf(task_data->OrderRef);
		data["ExchangeID"] = toUtf(task_data->ExchangeID);
		data["StockAccount"] = toUtf(task_data->StockAccount);
		data["StockCode"] = toUtf(task_data->StockCode);
		data["Direction"] = task_data->Direction;
		data["OrderCommand"] = task_data->OrderCommand;
		data["TradeStatus"] = task_data->TradeStatus;
		data["TradeID"] = toUtf(task_data->TradeID);
		data["TradeVolume"] = task_data->TradeVolume;
		data["TradePrice"] = task_data->TradePrice;
		data["TradeTime"] = task_data->TradeTime;
		data["ErrorMsg"] = toUtf(task_data->ErrorMsg);
		data["BatchNo"] = task_data->BatchNo;
		data["BrokerWithdrawOrderID"] = toUtf(task_data->BrokerWithdrawOrderID);
		data["BusinessBalance"] = task_data->BusinessBalance;
		data["BranchID"] = task_data->BranchID;
		data["OrderStatus"] = task_data->OrderStatus;
		data["OccurTime"] = task_data->OccurTime;
		data["ClientOrderID"] = task_data->ClientOrderID;
		delete task_data;
	}
	this->onRtnTrade(data);
};

void TdApi::processRspQryEtfcode(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CHSSecuRspQryEtfcodeField *task_data = (CHSSecuRspQryEtfcodeField*)task->task_data;
		data["ExchangeID"] = toUtf(task_data->ExchangeID);
		data["EtfCode"] = toUtf(task_data->EtfCode);
		data["PurRedStockCode"] = toUtf(task_data->PurRedStockCode);
		data["MaxCashRatio"] = task_data->MaxCashRatio;
		data["EtfStatus"] = task_data->EtfStatus;
		data["YdCashComponent"] = task_data->YdCashComponent;
		data["YdNavPercu"] = task_data->YdNavPercu;
		data["YdNav"] = task_data->YdNav;
		data["EtfType"] = task_data->EtfType;
		data["PurchaseMax"] = task_data->PurchaseMax;
		data["RedeemMax"] = task_data->RedeemMax;
		delete task_data;
	}
	dict error;
	if (task->task_error)
	{
		CHSSecuRspInfoField *task_error = (CHSSecuRspInfoField*)task->task_error;
		error["ErrorID"] = task_error->ErrorID;
		error["ErrorMsg"] = toUtf(task_error->ErrorMsg);
		delete task_error;
	}
	this->onRspQryEtfcode(data, error, task->task_id, task->task_last);
};

void TdApi::processRspQryEtfcomponent(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CHSSecuRspQryEtfcomponentField *task_data = (CHSSecuRspQryEtfcomponentField*)task->task_data;
		data["ExchangeID"] = toUtf(task_data->ExchangeID);
		data["PurRedStockCode"] = toUtf(task_data->PurRedStockCode);
		data["EtfComponentCode"] = toUtf(task_data->EtfComponentCode);
		data["EtfComponentName"] = toUtf(task_data->EtfComponentName);
		data["EtfComponentVolume"] = task_data->EtfComponentVolume;
		data["ReplaceFlag"] = task_data->ReplaceFlag;
		data["PremiumRate"] = task_data->PremiumRate;
		data["ReplaceBalance"] = task_data->ReplaceBalance;
		data["EtfComponentMarket"] = toUtf(task_data->EtfComponentMarket);
		delete task_data;
	}
	dict error;
	if (task->task_error)
	{
		CHSSecuRspInfoField *task_error = (CHSSecuRspInfoField*)task->task_error;
		error["ErrorID"] = task_error->ErrorID;
		error["ErrorMsg"] = toUtf(task_error->ErrorMsg);
		delete task_error;
	}
	this->onRspQryEtfcomponent(data, error, task->task_id, task->task_last);
};

void TdApi::processRspQryImpawnDetail(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CHSSecuRspQryImpawnDetailField *task_data = (CHSSecuRspQryImpawnDetailField*)task->task_data;
		data["ExchangeID"] = toUtf(task_data->ExchangeID);
		data["StockAccount"] = toUtf(task_data->StockAccount);
		data["StockCode"] = toUtf(task_data->StockCode);
		data["StoreVolume"] = task_data->StoreVolume;
		data["ImpawnRate"] = task_data->ImpawnRate;
		data["ImpawnOutVolume"] = task_data->ImpawnOutVolume;
		data["ImpawnInVolume"] = task_data->ImpawnInVolume;
		data["ImpawnVolume"] = task_data->ImpawnVolume;
		delete task_data;
	}
	dict error;
	if (task->task_error)
	{
		CHSSecuRspInfoField *task_error = (CHSSecuRspInfoField*)task->task_error;
		error["ErrorID"] = task_error->ErrorID;
		error["ErrorMsg"] = toUtf(task_error->ErrorMsg);
		delete task_error;
	}
	this->onRspQryImpawnDetail(data, error, task->task_id, task->task_last);
};

void TdApi::processRspQryBondImpawnConc(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CHSSecuRspQryBondImpawnConcField *task_data = (CHSSecuRspQryBondImpawnConcField*)task->task_data;
		data["ExchangeID"] = toUtf(task_data->ExchangeID);
		data["StockCode"] = toUtf(task_data->StockCode);
		data["StockName"] = toUtf(task_data->StockName);
		data["ImpawnVolume"] = task_data->ImpawnVolume;
		data["TrusteeVolume"] = task_data->TrusteeVolume;
		data["BondConcRatio"] = task_data->BondConcRatio;
		data["ConcSurplusVolume"] = task_data->ConcSurplusVolume;
		delete task_data;
	}
	dict error;
	if (task->task_error)
	{
		CHSSecuRspInfoField *task_error = (CHSSecuRspInfoField*)task->task_error;
		error["ErrorID"] = task_error->ErrorID;
		error["ErrorMsg"] = toUtf(task_error->ErrorMsg);
		delete task_error;
	}
	this->onRspQryBondImpawnConc(data, error, task->task_id, task->task_last);
};

void TdApi::processRspCashRepay(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CHSSecuRspCashRepayField *task_data = (CHSSecuRspCashRepayField*)task->task_data;
		data["OccurBalance"] = task_data->OccurBalance;
		delete task_data;
	}
	dict error;
	if (task->task_error)
	{
		CHSSecuRspInfoField *task_error = (CHSSecuRspInfoField*)task->task_error;
		error["ErrorID"] = task_error->ErrorID;
		error["ErrorMsg"] = toUtf(task_error->ErrorMsg);
		delete task_error;
	}
	this->onRspCashRepay(data, error, task->task_id, task->task_last);
};

void TdApi::processRspQryEnfinFund(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CHSSecuRspQryEnfinFundField *task_data = (CHSSecuRspQryEnfinFundField*)task->task_data;
		data["AvailableBalance"] = task_data->AvailableBalance;
		delete task_data;
	}
	dict error;
	if (task->task_error)
	{
		CHSSecuRspInfoField *task_error = (CHSSecuRspInfoField*)task->task_error;
		error["ErrorID"] = task_error->ErrorID;
		error["ErrorMsg"] = toUtf(task_error->ErrorMsg);
		delete task_error;
	}
	this->onRspQryEnfinFund(data, error, task->task_id, task->task_last);
};

void TdApi::processRspQryEnsloStock(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CHSSecuRspQryEnsloStockField *task_data = (CHSSecuRspQryEnsloStockField*)task->task_data;
		data["ExchangeID"] = toUtf(task_data->ExchangeID);
		data["StockCode"] = toUtf(task_data->StockCode);
		data["StockType"] = toUtf(task_data->StockType);
		data["StockName"] = toUtf(task_data->StockName);
		data["ShortSellRatio"] = task_data->ShortSellRatio;
		data["ShortSellStatus"] = task_data->ShortSellStatus;
		data["AvailableVolume"] = task_data->AvailableVolume;
		data["CashGroupProp"] = task_data->CashGroupProp;
		delete task_data;
	}
	dict error;
	if (task->task_error)
	{
		CHSSecuRspInfoField *task_error = (CHSSecuRspInfoField*)task->task_error;
		error["ErrorID"] = task_error->ErrorID;
		error["ErrorMsg"] = toUtf(task_error->ErrorMsg);
		delete task_error;
	}
	this->onRspQryEnsloStock(data, error, task->task_id, task->task_last);
};

void TdApi::processRspQryCreditCollateral(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CHSSecuRspQryCreditCollateralField *task_data = (CHSSecuRspQryCreditCollateralField*)task->task_data;
		data["ExchangeID"] = toUtf(task_data->ExchangeID);
		data["StockCode"] = toUtf(task_data->StockCode);
		data["StockName"] = toUtf(task_data->StockName);
		data["StockType"] = toUtf(task_data->StockType);
		data["CollateralEndDate"] = task_data->CollateralEndDate;
		data["CollateralRate"] = task_data->CollateralRate;
		data["CollateralStatus"] = task_data->CollateralStatus;
		delete task_data;
	}
	dict error;
	if (task->task_error)
	{
		CHSSecuRspInfoField *task_error = (CHSSecuRspInfoField*)task->task_error;
		error["ErrorID"] = task_error->ErrorID;
		error["ErrorMsg"] = toUtf(task_error->ErrorMsg);
		delete task_error;
	}
	this->onRspQryCreditCollateral(data, error, task->task_id, task->task_last);
};

void TdApi::processRspQryCreditUnderlying(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CHSSecuRspQryCreditUnderlyingField *task_data = (CHSSecuRspQryCreditUnderlyingField*)task->task_data;
		data["ExchangeID"] = toUtf(task_data->ExchangeID);
		data["StockCode"] = toUtf(task_data->StockCode);
		data["StockName"] = toUtf(task_data->StockName);
		data["StockType"] = toUtf(task_data->StockType);
		data["MarginBuyEndDate"] = task_data->MarginBuyEndDate;
		data["ShortSellEndDate"] = task_data->ShortSellEndDate;
		data["MarginBuyStatus"] = task_data->MarginBuyStatus;
		data["ShortSellStatus"] = task_data->ShortSellStatus;
		data["MarginBuyRate"] = task_data->MarginBuyRate;
		data["ShortSellRate"] = task_data->ShortSellRate;
		delete task_data;
	}
	dict error;
	if (task->task_error)
	{
		CHSSecuRspInfoField *task_error = (CHSSecuRspInfoField*)task->task_error;
		error["ErrorID"] = task_error->ErrorID;
		error["ErrorMsg"] = toUtf(task_error->ErrorMsg);
		delete task_error;
	}
	this->onRspQryCreditUnderlying(data, error, task->task_id, task->task_last);
};

void TdApi::processRspQryCreditRate(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CHSSecuRspQryCreditRateField *task_data = (CHSSecuRspQryCreditRateField*)task->task_data;
		data["StockCode"] = toUtf(task_data->StockCode);
		data["CreditRateType"] = task_data->CreditRateType;
		data["YearRate"] = task_data->YearRate;
		delete task_data;
	}
	dict error;
	if (task->task_error)
	{
		CHSSecuRspInfoField *task_error = (CHSSecuRspInfoField*)task->task_error;
		error["ErrorID"] = task_error->ErrorID;
		error["ErrorMsg"] = toUtf(task_error->ErrorMsg);
		delete task_error;
	}
	this->onRspQryCreditRate(data, error, task->task_id, task->task_last);
};

void TdApi::processRspQryCreditAsset(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CHSSecuRspQryCreditAssetField *task_data = (CHSSecuRspQryCreditAssetField*)task->task_data;
		data["CashAsset"] = task_data->CashAsset;
		data["MarketValue"] = task_data->MarketValue;
		data["CollateralAsset"] = task_data->CollateralAsset;
		data["TotalDebit"] = task_data->TotalDebit;
		data["PerCollateralRatio"] = task_data->PerCollateralRatio;
		data["AvailableMargin"] = task_data->AvailableMargin;
		data["UsedMargin"] = task_data->UsedMargin;
		data["MarginBuyQuota"] = task_data->MarginBuyQuota;
		data["MarginBuyAvailableQuota"] = task_data->MarginBuyAvailableQuota;
		data["MarginBuyCompactBalance"] = task_data->MarginBuyCompactBalance;
		data["MarginBuyCompactFare"] = task_data->MarginBuyCompactFare;
		data["MarginBuyCompactInterest"] = task_data->MarginBuyCompactInterest;
		data["MarginBuyProfit"] = task_data->MarginBuyProfit;
		data["ShortSellQuota"] = task_data->ShortSellQuota;
		data["ShortSellAvailableQuota"] = task_data->ShortSellAvailableQuota;
		data["ShortSellCompactBalance"] = task_data->ShortSellCompactBalance;
		data["ShortSellCompactFare"] = task_data->ShortSellCompactFare;
		data["ShortSellCompactInterest"] = task_data->ShortSellCompactInterest;
		data["ShortSellProfit"] = task_data->ShortSellProfit;
		data["SloSurplusBalance"] = task_data->SloSurplusBalance;
		data["SloUsedBalance"] = task_data->SloUsedBalance;
		delete task_data;
	}
	dict error;
	if (task->task_error)
	{
		CHSSecuRspInfoField *task_error = (CHSSecuRspInfoField*)task->task_error;
		error["ErrorID"] = task_error->ErrorID;
		error["ErrorMsg"] = toUtf(task_error->ErrorMsg);
		delete task_error;
	}
	this->onRspQryCreditAsset(data, error, task->task_id, task->task_last);
};

void TdApi::processRspQryCompact(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CHSSecuRspQryCompactField *task_data = (CHSSecuRspQryCompactField*)task->task_data;
		data["OpenDate"] = task_data->OpenDate;
		data["CompactID"] = toUtf(task_data->CompactID);
		data["CurrencyID"] = task_data->CurrencyID;
		data["StockAccount"] = toUtf(task_data->StockAccount);
		data["ExchangeID"] = toUtf(task_data->ExchangeID);
		data["StockCode"] = toUtf(task_data->StockCode);
		data["StockName"] = toUtf(task_data->StockName);
		data["CreditRate"] = task_data->CreditRate;
		data["CompactType"] = task_data->CompactType;
		data["CompactStatus"] = task_data->CompactStatus;
		data["LeaveCompactBalance"] = task_data->LeaveCompactBalance;
		data["LeaveCompactVolume"] = task_data->LeaveCompactVolume;
		data["LeaveCompactFare"] = task_data->LeaveCompactFare;
		data["LeaveCompactInterest"] = task_data->LeaveCompactInterest;
		data["TotalDebit"] = task_data->TotalDebit;
		data["YearRate"] = task_data->YearRate;
		data["RetEndDate"] = task_data->RetEndDate;
		data["CompactSource"] = task_data->CompactSource;
		data["MarginBuyProfit"] = task_data->MarginBuyProfit;
		data["ShortSellProfit"] = task_data->ShortSellProfit;
		data["FineBeginDate"] = task_data->FineBeginDate;
		data["RepaidInterest"] = task_data->RepaidInterest;
		data["RepaidBalance"] = task_data->RepaidBalance;
		data["RepaidAmount"] = task_data->RepaidAmount;
		delete task_data;
	}
	dict error;
	if (task->task_error)
	{
		CHSSecuRspInfoField *task_error = (CHSSecuRspInfoField*)task->task_error;
		error["ErrorID"] = task_error->ErrorID;
		error["ErrorMsg"] = toUtf(task_error->ErrorMsg);
		delete task_error;
	}
	this->onRspQryCompact(data, error, task->task_id, task->task_last);
};

void TdApi::processRspComOrderInsert(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CHSSecuRspComOrderInsertField *task_data = (CHSSecuRspComOrderInsertField*)task->task_data;
		data["Count"] = task_data->Count;
		data["OrderPartition"] = task_data->RspOrder->OrderPartition;
		data["BrokerOrderID"] = toUtf(task_data->RspOrder->BrokerOrderID);
		data["SessionID"] = task_data->RspOrder->SessionID;
		data["OrderRef"] = toUtf(task_data->RspOrder->OrderRef);
		data["BatchNo"] = task_data->RspOrder->BatchNo;
		data["ClientOrderID"] = task_data->RspOrder->ClientOrderID;
		delete task_data;
	}
	dict info;
	if (task->task_info)
	{
		CHSSecuRspComInfoField *task_info = (CHSSecuRspComInfoField*)task->task_data;
		data["Count"] = task_info->Count;
		data["ErrorID"] = task_info->RspInfo->ErrorID;
		data["ErrorMsg"] = toUtf(task_info->RspInfo->ErrorMsg);
		delete task_info;
	}
	this->onRspComOrderInsert(data, data, task->task_id, task->task_last);
};

void TdApi::processRspCompactApply(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CHSSecuRspCompactApplyField *task_data = (CHSSecuRspCompactApplyField*)task->task_data;
		delete task_data;
	}
	dict error;
	if (task->task_error)
	{
		CHSSecuRspInfoField *task_error = (CHSSecuRspInfoField*)task->task_error;
		error["ErrorID"] = task_error->ErrorID;
		error["ErrorMsg"] = toUtf(task_error->ErrorMsg);
		delete task_error;
	}
	this->onRspCompactApply(data, error, task->task_id, task->task_last);
};

void TdApi::processRspQryApplycode(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CHSSecuRspQryApplycodeField *task_data = (CHSSecuRspQryApplycodeField*)task->task_data;
		data["ExchangeID"] = toUtf(task_data->ExchangeID);
		data["StockCode"] = toUtf(task_data->StockCode);
		data["StockName"] = toUtf(task_data->StockName);
		data["BuyUnit"] = task_data->BuyUnit;
		data["PriceStep"] = task_data->PriceStep;
		data["StoreUnit"] = task_data->StoreUnit;
		data["MaxVolume"] = task_data->MaxVolume;
		data["MinVolume"] = task_data->MinVolume;
		data["StockType"] = toUtf(task_data->StockType);
		data["ParValue"] = task_data->ParValue;
		data["SubStockType"] = toUtf(task_data->SubStockType);
		data["MaxBalance"] = task_data->MaxBalance;
		data["MinBalance"] = task_data->MinBalance;
		data["StockCodeStatus"] = task_data->StockCodeStatus;
		data["IssueDate"] = task_data->IssueDate;
		delete task_data;
	}
	dict error;
	if (task->task_error)
	{
		CHSSecuRspInfoField *task_error = (CHSSecuRspInfoField*)task->task_error;
		error["ErrorID"] = task_error->ErrorID;
		error["ErrorMsg"] = toUtf(task_error->ErrorMsg);
		delete task_error;
	}
	this->onRspQryApplycode(data, error, task->task_id, task->task_last);
};

void TdApi::processRspQryFundUF20(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CHSSecuRspQryFundUF20Field *task_data = (CHSSecuRspQryFundUF20Field*)task->task_data;
		data["CurrencyID"] = task_data->CurrencyID;
		data["CurrentBalance"] = task_data->CurrentBalance;
		data["AvailableBalance"] = task_data->AvailableBalance;
		data["FetchBalance"] = task_data->FetchBalance;
		data["FrozenBalance"] = task_data->FrozenBalance;
		data["UnfrozenBalance"] = task_data->UnfrozenBalance;
		data["TotalAsset"] = task_data->TotalAsset;
		delete task_data;
	}
	dict error;
	if (task->task_error)
	{
		CHSSecuRspInfoField *task_error = (CHSSecuRspInfoField*)task->task_error;
		error["ErrorID"] = task_error->ErrorID;
		error["ErrorMsg"] = toUtf(task_error->ErrorMsg);
		delete task_error;
	}
	this->onRspQryFundUF20(data, error, task->task_id, task->task_last);
};

void TdApi::processRspQryFundRealJour(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CHSSecuRspQryFundRealJourField *task_data = (CHSSecuRspQryFundRealJourField*)task->task_data;
		data["SerialNo"] = task_data->SerialNo;
		data["CurrencyID"] = task_data->CurrencyID;
		data["OccurBalance"] = task_data->OccurBalance;
		data["PostBalance"] = task_data->PostBalance;
		data["RealAction"] = task_data->RealAction;
		data["BusinessFlag"] = task_data->BusinessFlag;
		data["CurrTime"] = task_data->CurrTime;
		delete task_data;
	}
	dict error;
	if (task->task_error)
	{
		CHSSecuRspInfoField *task_error = (CHSSecuRspInfoField*)task->task_error;
		error["ErrorID"] = task_error->ErrorID;
		error["ErrorMsg"] = toUtf(task_error->ErrorMsg);
		delete task_error;
	}
	this->onRspQryFundRealJour(data, error, task->task_id, task->task_last);
};

void TdApi::processRspQryCompactRealJour(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CHSSecuRspQryCompactRealJourField *task_data = (CHSSecuRspQryCompactRealJourField*)task->task_data;
		data["StockAccount"] = toUtf(task_data->StockAccount);
		data["CurrencyID"] = task_data->CurrencyID;
		data["AccountID"] = toUtf(task_data->AccountID);
		data["ExchangeType"] = toUtf(task_data->ExchangeType);
		data["SerialNo"] = task_data->SerialNo;
		data["CurrDate"] = task_data->CurrDate;
		data["CurrTime"] = task_data->CurrTime;
		data["BusinessFlag"] = task_data->BusinessFlag;
		data["OccurBalance"] = task_data->OccurBalance;
		data["PostBalance"] = task_data->PostBalance;
		data["OccurAmount"] = task_data->OccurAmount;
		data["PostAmount"] = task_data->PostAmount;
		data["OccurFare"] = task_data->OccurFare;
		data["PostFare"] = task_data->PostFare;
		data["OccurInterest"] = task_data->OccurInterest;
		data["PostInterest"] = task_data->PostInterest;
		data["BrokerOrderID"] = toUtf(task_data->BrokerOrderID);
		data["CompactID"] = toUtf(task_data->CompactID);
		data["StockCode"] = toUtf(task_data->StockCode);
		delete task_data;
	}
	dict error;
	if (task->task_error)
	{
		CHSSecuRspInfoField *task_error = (CHSSecuRspInfoField*)task->task_error;
		error["ErrorID"] = task_error->ErrorID;
		error["ErrorMsg"] = toUtf(task_error->ErrorMsg);
		delete task_error;
	}
	this->onRspQryCompactRealJour(data, error, task->task_id, task->task_last);
};

void TdApi::processRspQryMaxEntradeNum(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CHSSecuRspQryMaxEntradeNumField *task_data = (CHSSecuRspQryMaxEntradeNumField*)task->task_data;
		data["AvailableTradeAmount"] = task_data->AvailableTradeAmount;
		data["AvailableBalance"] = task_data->AvailableBalance;
		delete task_data;
	}
	dict error;
	if (task->task_error)
	{
		CHSSecuRspInfoField *task_error = (CHSSecuRspInfoField*)task->task_error;
		error["ErrorID"] = task_error->ErrorID;
		error["ErrorMsg"] = toUtf(task_error->ErrorMsg);
		delete task_error;
	}
	this->onRspQryMaxEntradeNum(data, error, task->task_id, task->task_last);
};

void TdApi::processRspQryStockRealJour(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CHSSecuRspQryStockRealJourField *task_data = (CHSSecuRspQryStockRealJourField*)task->task_data;
		data["ExchangeID"] = toUtf(task_data->ExchangeID);
		data["StockCode"] = toUtf(task_data->StockCode);
		data["StockName"] = toUtf(task_data->StockName);
		data["StockType"] = toUtf(task_data->StockType);
		data["SerialNo"] = task_data->SerialNo;
		data["OccurVolume"] = task_data->OccurVolume;
		data["PostVolume"] = task_data->PostVolume;
		data["RealAction"] = task_data->RealAction;
		data["BusinessFlag"] = task_data->BusinessFlag;
		data["StockAccount"] = toUtf(task_data->StockAccount);
		delete task_data;
	}
	dict error;
	if (task->task_error)
	{
		CHSSecuRspInfoField *task_error = (CHSSecuRspInfoField*)task->task_error;
		error["ErrorID"] = task_error->ErrorID;
		error["ErrorMsg"] = toUtf(task_error->ErrorMsg);
		delete task_error;
	}
	this->onRspQryStockRealJour(data, error, task->task_id, task->task_last);
};

void TdApi::processRspQryBankAccount(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CHSSecuRspQryBankAccountField *task_data = (CHSSecuRspQryBankAccountField*)task->task_data;
		data["BankID"] = toUtf(task_data->BankID);
		data["BankName"] = toUtf(task_data->BankName);
		data["BankAccountID"] = toUtf(task_data->BankAccountID);
		data["CurrencyID"] = task_data->CurrencyID;
		delete task_data;
	}
	dict error;
	if (task->task_error)
	{
		CHSSecuRspInfoField *task_error = (CHSSecuRspInfoField*)task->task_error;
		error["ErrorID"] = task_error->ErrorID;
		error["ErrorMsg"] = toUtf(task_error->ErrorMsg);
		delete task_error;
	}
	this->onRspQryBankAccount(data, error, task->task_id, task->task_last);
};

void TdApi::processRspQryHKSecurate(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CHSSecuRspQryHKSecurateField *task_data = (CHSSecuRspQryHKSecurateField*)task->task_data;
		data["BuyExchangeRate"] = task_data->BuyExchangeRate;
		data["SellExchangeRate"] = task_data->SellExchangeRate;
		data["MiddleExchangeRate"] = task_data->MiddleExchangeRate;
		data["SeBuyExchangeRate"] = task_data->SeBuyExchangeRate;
		data["SeSellExchangeRate"] = task_data->SeSellExchangeRate;
		data["BuyFloatRatio"] = task_data->BuyFloatRatio;
		data["SellFloatRatio"] = task_data->SellFloatRatio;
		data["ExchangeID"] = toUtf(task_data->ExchangeID);
		data["ValidDate"] = task_data->ValidDate;
		delete task_data;
	}
	dict error;
	if (task->task_error)
	{
		CHSSecuRspInfoField *task_error = (CHSSecuRspInfoField*)task->task_error;
		error["ErrorID"] = task_error->ErrorID;
		error["ErrorMsg"] = toUtf(task_error->ErrorMsg);
		delete task_error;
	}
	this->onRspQryHKSecurate(data, error, task->task_id, task->task_last);
};

void TdApi::processRspQryAssureAmount(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CHSSecuRspQryAssureAmountField *task_data = (CHSSecuRspQryAssureAmountField*)task->task_data;
		data["EnableAmount"] = task_data->EnableAmount;
		delete task_data;
	}
	dict error;
	if (task->task_error)
	{
		CHSSecuRspInfoField *task_error = (CHSSecuRspInfoField*)task->task_error;
		error["ErrorID"] = task_error->ErrorID;
		error["ErrorMsg"] = toUtf(task_error->ErrorMsg);
		delete task_error;
	}
	this->onRspQryAssureAmount(data, error, task->task_id, task->task_last);
};

void TdApi::processRspQryAssureBackAmount(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CHSSecuRspQryAssureBackAmountField *task_data = (CHSSecuRspQryAssureBackAmountField*)task->task_data;
		data["ExchangeID"] = toUtf(task_data->ExchangeID);
		data["StockCode"] = toUtf(task_data->StockCode);
		data["EnableReturnAmount"] = task_data->EnableReturnAmount;
		delete task_data;
	}
	dict error;
	if (task->task_error)
	{
		CHSSecuRspInfoField *task_error = (CHSSecuRspInfoField*)task->task_error;
		error["ErrorID"] = task_error->ErrorID;
		error["ErrorMsg"] = toUtf(task_error->ErrorMsg);
		delete task_error;
	}
	this->onRspQryAssureBackAmount(data, error, task->task_id, task->task_last);
};

void TdApi::processRspQryFundPeer(Task *task)
{
	gil_scoped_acquire acquire;
	dict data;
	if (task->task_data)
	{
		CHSSecuRspQryFundPeerField *task_data = (CHSSecuRspQryFundPeerField*)task->task_data;
		data["CurrentBalance"] = task_data->CurrentBalance;
		data["AvailableBalance"] = task_data->AvailableBalance;
		data["CurrencyID"] = task_data->CurrencyID;
		delete task_data;
	}
	dict error;
	if (task->task_error)
	{
		CHSSecuRspInfoField *task_error = (CHSSecuRspInfoField*)task->task_error;
		error["ErrorID"] = task_error->ErrorID;
		error["ErrorMsg"] = toUtf(task_error->ErrorMsg);
		delete task_error;
	}
	this->onRspQryFundPeer(data, error, task->task_id, task->task_last);
};

///-------------------------------------------------------------------------------------
///主动函数
///-------------------------------------------------------------------------------------

void TdApi::newSecuTradeApi(string pszFlowPath)
{
	this->api = NewSecuTradeApi(pszFlowPath.c_str());
	this->api->RegisterSpi(this);
};

void TdApi::release()
{
	this->api->ReleaseApi();
};

int TdApi::init(string licFile)
{
	this->active = true;
	this->task_thread = thread(&TdApi::processTask, this);

	int i = this->api->Init(licFile.c_str());
	return i;

};
int TdApi::join()
{
	int i = this->api->Join();
	return i;
};

int TdApi::exit()
{
	this->active = false;
	this->task_queue.terminate();
	this->task_thread.join();

	this->api->RegisterSpi(NULL);
	this->api->ReleaseApi();
	this->api = NULL;
	return 1;
};

string TdApi::getApiErrorMsg(int errorCode)
{
	string i = this->api->GetApiErrorMsg(errorCode);
	return toUtf(i);

};

int TdApi::registerFront(string pszFrontAddress)
{
	int i = this->api->RegisterFront(pszFrontAddress.c_str());
	return i;
};

int TdApi::registerFensServer(string pszFensAddress, string pszAccountID)
{
	int i = this->api->RegisterFensServer(pszFensAddress.c_str(), pszAccountID.c_str());
	return i;
};

int TdApi::registerSubModel(int eSubType)
{
	int i = this->api->RegisterSubModel((SUB_TERT_TYPE)eSubType);
	return i;
};

int TdApi::reqAuthenticate(const dict &req, int reqid)
{
	CHSSecuReqAuthenticateField myreq = CHSSecuReqAuthenticateField();
	memset(&myreq, 0, sizeof(myreq));
	getString(req, "AccountID", myreq.AccountID);
	getString(req, "AppID", myreq.AppID);
	getString(req, "AuthCode", myreq.AuthCode);
	int i = this->api->ReqAuthenticate(&myreq, reqid);
	return i;
};

int TdApi::reqUserLogin(const dict &req, int reqid)
{
	CHSSecuReqUserLoginField myreq = CHSSecuReqUserLoginField();
	memset(&myreq, 0, sizeof(myreq));
	getString(req, "AccountID", myreq.AccountID);
	getString(req, "Password", myreq.Password);
	getChar(req, "UserApplicationType", &myreq.UserApplicationType);
	getString(req, "UserApplicationInfo", myreq.UserApplicationInfo);
	getString(req, "MacAddress", myreq.MacAddress);
	getString(req, "IPAddress", myreq.IPAddress);
	getString(req, "UserStationInfo", myreq.UserStationInfo);
	int i = this->api->ReqUserLogin(&myreq, reqid);
	return i;
};

int TdApi::reqQryStkAcct(const dict &req, int reqid)
{
	CHSSecuReqQryStkAcctField myreq = CHSSecuReqQryStkAcctField();
	memset(&myreq, 0, sizeof(myreq));
	getString(req, "ExchangeID", myreq.ExchangeID);
	int i = this->api->ReqQryStkAcct(&myreq, reqid);
	return i;
};

int TdApi::reqUserPasswordUpdate(const dict &req, int reqid)
{
	CHSSecuReqUserPasswordUpdateField myreq = CHSSecuReqUserPasswordUpdateField();
	memset(&myreq, 0, sizeof(myreq));
	getChar(req, "PasswordType", &myreq.PasswordType);
	getString(req, "Password", myreq.Password);
	getString(req, "NewPassword", myreq.NewPassword);
	int i = this->api->ReqUserPasswordUpdate(&myreq, reqid);
	return i;
};

int TdApi::reqTransfer(const dict &req, int reqid)
{
	CHSSecuReqTransferField myreq = CHSSecuReqTransferField();
	memset(&myreq, 0, sizeof(myreq));
	getString(req, "BankID", myreq.BankID);
	getChar(req, "TransferType", &myreq.TransferType);
	getDouble(req, "OccurBalance", &myreq.OccurBalance);
	getString(req, "FundPassword", myreq.FundPassword);
	getString(req, "BankPassword", myreq.BankPassword);
	getChar(req, "CurrencyID", &myreq.CurrencyID);
	getString(req, "TransferOccasion", myreq.TransferOccasion);
	int i = this->api->ReqTransfer(&myreq, reqid);
	return i;
};

int TdApi::reqFundTrans(const dict &req, int reqid)
{
	CHSSecuReqFundTransField myreq = CHSSecuReqFundTransField();
	memset(&myreq, 0, sizeof(myreq));
	getChar(req, "TransDirection", &myreq.TransDirection);
	getChar(req, "CurrencyID", &myreq.CurrencyID);
	getDouble(req, "OccurBalance", &myreq.OccurBalance);
	int i = this->api->ReqFundTrans(&myreq, reqid);
	return i;
};

int TdApi::reqFundAlloc(const dict &req, int reqid)
{
	CHSSecuReqFundAllocField myreq = CHSSecuReqFundAllocField();
	memset(&myreq, 0, sizeof(myreq));
	getChar(req, "TransDirection", &myreq.TransDirection);
	getChar(req, "CurrencyID", &myreq.CurrencyID);
	getDouble(req, "OccurBalance", &myreq.OccurBalance);
	getInt(req, "SysnodeID", &myreq.SysnodeID);
	int i = this->api->ReqFundAlloc(&myreq, reqid);
	return i;
};

int TdApi::reqStockTrans(const dict &req, int reqid)
{
	CHSSecuReqStockTransField myreq = CHSSecuReqStockTransField();
	memset(&myreq, 0, sizeof(myreq));
	getChar(req, "TransDirection", &myreq.TransDirection);
	getString(req, "StockAccount", myreq.StockAccount);
	getString(req, "ExchangeID", myreq.ExchangeID);
	getString(req, "StockCode", myreq.StockCode);
	getDouble(req, "OccurVolume", &myreq.OccurVolume);
	int i = this->api->ReqStockTrans(&myreq, reqid);
	return i;
};

int TdApi::reqOrderInsert(const dict &req, int reqid)
{
	CHSSecuReqOrderInsertField myreq = CHSSecuReqOrderInsertField();
	memset(&myreq, 0, sizeof(myreq));
	getString(req, "ExchangeID", myreq.ExchangeID);
	getString(req, "StockCode", myreq.StockCode);
	getInt(req, "OrderCommand", &myreq.OrderCommand);
	getInt(req, "Direction", &myreq.Direction);
	getDouble(req, "OrderPrice", &myreq.OrderPrice);
	getDouble(req, "OrderVolume", &myreq.OrderVolume);
	getString(req, "StockAccount", myreq.StockAccount);
	getString(req, "OrderRef", myreq.OrderRef);
	getChar(req, "CashGroupProp", &myreq.CashGroupProp);
	getString(req, "CompactID", myreq.CompactID);
	getInt(req, "BatchNo", &myreq.BatchNo);
	getChar(req, "ChannelType", &myreq.ChannelType);
	getString(req, "StockProperty", myreq.StockProperty);
	getLonglong(req, "ClientOrderID", &myreq.ClientOrderID);
	getString(req, "SecuPassword", myreq.SecuPassword);
	int i = this->api->ReqOrderInsert(&myreq, reqid);
	return i;
};

int TdApi::reqOrderAction(const dict &req, int reqid)
{
	CHSSecuReqOrderActionField myreq = CHSSecuReqOrderActionField();
	memset(&myreq, 0, sizeof(myreq));
	getInt(req, "OrderPartition", &myreq.OrderPartition);
	getString(req, "BrokerOrderID", myreq.BrokerOrderID);
	getInt(req, "SessionID", &myreq.SessionID);
	getString(req, "OrderRef", myreq.OrderRef);
	getLonglong(req, "ClientOrderID", &myreq.ClientOrderID);
	int i = this->api->ReqOrderAction(&myreq, reqid);
	return i;
};

int TdApi::reqQryHold(const dict &req, int reqid)
{
	CHSSecuReqQryHoldField myreq = CHSSecuReqQryHoldField();
	memset(&myreq, 0, sizeof(myreq));
	getString(req, "ExchangeID", myreq.ExchangeID);
	getString(req, "StockCode", myreq.StockCode);
	int i = this->api->ReqQryHold(&myreq, reqid);
	return i;
};

int TdApi::reqQryFund(const dict &req, int reqid)
{
	CHSSecuReqQryFundField myreq = CHSSecuReqQryFundField();
	memset(&myreq, 0, sizeof(myreq));
	getChar(req, "CurrencyID", &myreq.CurrencyID);
	int i = this->api->ReqQryFund(&myreq, reqid);
	return i;
};

int TdApi::reqQryOrder(const dict &req, int reqid)
{
	CHSSecuReqQryOrderField myreq = CHSSecuReqQryOrderField();
	memset(&myreq, 0, sizeof(myreq));
	getInt(req, "OrderPartition", &myreq.OrderPartition);
	getString(req, "BrokerOrderID", myreq.BrokerOrderID);
	getInt(req, "SessionID", &myreq.SessionID);
	getString(req, "OrderRef", myreq.OrderRef);
	getLonglong(req, "ClientOrderID", &myreq.ClientOrderID);
	int i = this->api->ReqQryOrder(&myreq, reqid);
	return i;
};

int TdApi::reqQryTrade(const dict &req, int reqid)
{
	CHSSecuReqQryTradeField myreq = CHSSecuReqQryTradeField();
	memset(&myreq, 0, sizeof(myreq));
	getInt(req, "OrderPartition", &myreq.OrderPartition);
	getString(req, "BrokerOrderID", myreq.BrokerOrderID);
	getInt(req, "SessionID", &myreq.SessionID);
	getString(req, "OrderRef", myreq.OrderRef);
	getLonglong(req, "ClientOrderID", &myreq.ClientOrderID);
	int i = this->api->ReqQryTrade(&myreq, reqid);
	return i;
};

int TdApi::reqQryStkcode(const dict &req, int reqid)
{
	CHSSecuReqQryStkcodeField myreq = CHSSecuReqQryStkcodeField();
	memset(&myreq, 0, sizeof(myreq));
	getString(req, "ExchangeID", myreq.ExchangeID);
	getString(req, "StockCode", myreq.StockCode);
	int i = this->api->ReqQryStkcode(&myreq, reqid);
	return i;
};

int TdApi::reqQryEquity(const dict &req, int reqid)
{
	CHSSecuReqQryEquityField myreq = CHSSecuReqQryEquityField();
	memset(&myreq, 0, sizeof(myreq));
	getString(req, "ExchangeID", myreq.ExchangeID);
	int i = this->api->ReqQryEquity(&myreq, reqid);
	return i;
};

int TdApi::reqQryEtfcode(const dict &req, int reqid)
{
	CHSSecuReqQryEtfcodeField myreq = CHSSecuReqQryEtfcodeField();
	memset(&myreq, 0, sizeof(myreq));
	getString(req, "ExchangeID", myreq.ExchangeID);
	getString(req, "EtfCode", myreq.EtfCode);
	getString(req, "PurRedStockCode", myreq.PurRedStockCode);
	int i = this->api->ReqQryEtfcode(&myreq, reqid);
	return i;
};

int TdApi::reqQryEtfcomponent(const dict &req, int reqid)
{
	CHSSecuReqQryEtfcomponentField myreq = CHSSecuReqQryEtfcomponentField();
	memset(&myreq, 0, sizeof(myreq));
	getString(req, "ExchangeID", myreq.ExchangeID);
	getString(req, "PurRedStockCode", myreq.PurRedStockCode);
	getString(req, "EtfComponentCode", myreq.EtfComponentCode);
	int i = this->api->ReqQryEtfcomponent(&myreq, reqid);
	return i;
};

int TdApi::reqQryImpawnDetail(const dict &req, int reqid)
{
	CHSSecuReqQryImpawnDetailField myreq = CHSSecuReqQryImpawnDetailField();
	memset(&myreq, 0, sizeof(myreq));
	getString(req, "StockAccount", myreq.StockAccount);
	getString(req, "ExchangeID", myreq.ExchangeID);
	getString(req, "StockCode", myreq.StockCode);
	int i = this->api->ReqQryImpawnDetail(&myreq, reqid);
	return i;
};

int TdApi::reqQryBondImpawnConc(const dict &req, int reqid)
{
	CHSSecuReqQryBondImpawnConcField myreq = CHSSecuReqQryBondImpawnConcField();
	memset(&myreq, 0, sizeof(myreq));
	getString(req, "ExchangeID", myreq.ExchangeID);
	getString(req, "StockCode", myreq.StockCode);
	int i = this->api->ReqQryBondImpawnConc(&myreq, reqid);
	return i;
};

int TdApi::reqCashRepay(const dict &req, int reqid)
{
	CHSSecuReqCashRepayField myreq = CHSSecuReqCashRepayField();
	memset(&myreq, 0, sizeof(myreq));
	getString(req, "CompactID", myreq.CompactID);
	getChar(req, "CashGroupProp", &myreq.CashGroupProp);
	getDouble(req, "RepayBalance", &myreq.RepayBalance);
	int i = this->api->ReqCashRepay(&myreq, reqid);
	return i;
};

int TdApi::reqQryEnfinFund(const dict &req, int reqid)
{
	CHSSecuReqQryEnfinFundField myreq = CHSSecuReqQryEnfinFundField();
	memset(&myreq, 0, sizeof(myreq));
	getChar(req, "CashGroupProp", &myreq.CashGroupProp);
	int i = this->api->ReqQryEnfinFund(&myreq, reqid);
	return i;
};

int TdApi::reqQryEnsloStock(const dict &req, int reqid)
{
	CHSSecuReqQryEnsloStockField myreq = CHSSecuReqQryEnsloStockField();
	memset(&myreq, 0, sizeof(myreq));
	getString(req, "ExchangeID", myreq.ExchangeID);
	getString(req, "StockType", myreq.StockType);
	getString(req, "StockCode", myreq.StockCode);
	getChar(req, "CashGroupProp", &myreq.CashGroupProp);
	int i = this->api->ReqQryEnsloStock(&myreq, reqid);
	return i;
};

int TdApi::reqQryCreditCollateral(const dict &req, int reqid)
{
	CHSSecuReqQryCreditCollateralField myreq = CHSSecuReqQryCreditCollateralField();
	memset(&myreq, 0, sizeof(myreq));
	getString(req, "ExchangeID", myreq.ExchangeID);
	getString(req, "StockCode", myreq.StockCode);
	int i = this->api->ReqQryCreditCollateral(&myreq, reqid);
	return i;
};

int TdApi::reqQryCreditUnderlying(const dict &req, int reqid)
{
	CHSSecuReqQryCreditUnderlyingField myreq = CHSSecuReqQryCreditUnderlyingField();
	memset(&myreq, 0, sizeof(myreq));
	getString(req, "ExchangeID", myreq.ExchangeID);
	getString(req, "StockCode", myreq.StockCode);
	int i = this->api->ReqQryCreditUnderlying(&myreq, reqid);
	return i;
};

int TdApi::reqQryCreditRate(const dict &req, int reqid)
{
	CHSSecuReqQryCreditRateField myreq = CHSSecuReqQryCreditRateField();
	memset(&myreq, 0, sizeof(myreq));
	int i = this->api->ReqQryCreditRate(&myreq, reqid);
	return i;
};

int TdApi::reqQryCreditAsset(const dict &req, int reqid)
{
	CHSSecuReqQryCreditAssetField myreq = CHSSecuReqQryCreditAssetField();
	memset(&myreq, 0, sizeof(myreq));
	int i = this->api->ReqQryCreditAsset(&myreq, reqid);
	return i;
};

int TdApi::reqQryCompact(const dict &req, int reqid)
{
	CHSSecuReqQryCompactField myreq = CHSSecuReqQryCompactField();
	memset(&myreq, 0, sizeof(myreq));
	getString(req, "ExchangeID", myreq.ExchangeID);
	getString(req, "StockCode", myreq.StockCode);
	getString(req, "CompactID", myreq.CompactID);
	getChar(req, "CompactType", &myreq.CompactType);
	getChar(req, "CompactSource", &myreq.CompactSource);
	int i = this->api->ReqQryCompact(&myreq, reqid);
	return i;
};

int TdApi::reqComOrderInsert(const dict &req, int reqid)
{
	CHSSecuReqComOrderInsertField myreq = CHSSecuReqComOrderInsertField();
	memset(&myreq, 0, sizeof(myreq));
	getInt(req, "Count", &myreq.Count);
	getString(req, "ExchangeID", myreq.ReqOrder->ExchangeID);
	getString(req, "StockCode", myreq.ReqOrder->StockCode);
	getInt(req, "OrderCommand", &myreq.ReqOrder->OrderCommand);
	getInt(req, "Direction", &myreq.ReqOrder->Direction);
	getDouble(req, "OrderPrice", &myreq.ReqOrder->OrderPrice);
	getDouble(req, "OrderVolume", &myreq.ReqOrder->OrderVolume);
	getString(req, "StockAccount", myreq.ReqOrder->StockAccount);
	getString(req, "OrderRef", myreq.ReqOrder->OrderRef);
	getChar(req, "CashGroupProp", &myreq.ReqOrder->CashGroupProp);
	getString(req, "CompactID", myreq.ReqOrder->CompactID);
	getInt(req, "BatchNo", &myreq.ReqOrder->BatchNo);
	getChar(req, "ChannelType", &myreq.ReqOrder->ChannelType);
	getString(req, "StockProperty", myreq.ReqOrder->StockProperty);
	getLonglong(req, "ClientOrderID", &myreq.ReqOrder->ClientOrderID);
	getString(req, "SecuPassword", myreq.ReqOrder->SecuPassword);
	int i = this->api->ReqComOrderInsert(&myreq, reqid);
	return i;
};

int TdApi::reqCompactApply(const dict &req, int reqid)
{
	CHSSecuReqCompactApplyField myreq = CHSSecuReqCompactApplyField();
	memset(&myreq, 0, sizeof(myreq));
	getString(req, "CompactIDStr", myreq.CompactIDStr);
	int i = this->api->ReqCompactApply(&myreq, reqid);
	return i;
};

int TdApi::reqQryApplycode(const dict &req, int reqid)
{
	CHSSecuReqQryApplycodeField myreq = CHSSecuReqQryApplycodeField();
	memset(&myreq, 0, sizeof(myreq));
	getString(req, "ExchangeID", myreq.ExchangeID);
	getString(req, "StockCode", myreq.StockCode);
	getString(req, "SubStockType", myreq.SubStockType);
	int i = this->api->ReqQryApplycode(&myreq, reqid);
	return i;
};

int TdApi::reqQryFundUF20(const dict &req, int reqid)
{
	CHSSecuReqQryFundUF20Field myreq = CHSSecuReqQryFundUF20Field();
	memset(&myreq, 0, sizeof(myreq));
	getChar(req, "CurrencyID", &myreq.CurrencyID);
	int i = this->api->ReqQryFundUF20(&myreq, reqid);
	return i;
};

int TdApi::reqQryFundRealJour(const dict &req, int reqid)
{
	CHSSecuReqQryFundRealJourField myreq = CHSSecuReqQryFundRealJourField();
	memset(&myreq, 0, sizeof(myreq));
	getChar(req, "CurrencyID", &myreq.CurrencyID);
	int i = this->api->ReqQryFundRealJour(&myreq, reqid);
	return i;
};

int TdApi::reqQryCompactRealJour(const dict &req, int reqid)
{
	CHSSecuReqQryCompactRealJourField myreq = CHSSecuReqQryCompactRealJourField();
	memset(&myreq, 0, sizeof(myreq));
	getString(req, "StockCode", myreq.StockCode);
	getChar(req, "CompactSource", &myreq.CompactSource);
	getChar(req, "CompactType", &myreq.CompactType);
	getString(req, "CompactID", myreq.CompactID);
	getString(req, "BrokerOrderID", myreq.BrokerOrderID);
	int i = this->api->ReqQryCompactRealJour(&myreq, reqid);
	return i;
};

int TdApi::reqQryMaxEntradeNum(const dict &req, int reqid)
{
	CHSSecuReqQryMaxEntradeNumField myreq = CHSSecuReqQryMaxEntradeNumField();
	memset(&myreq, 0, sizeof(myreq));
	getString(req, "ExchangeID", myreq.ExchangeID);
	getString(req, "StockCode", myreq.StockCode);
	getInt(req, "OrderCommand", &myreq.OrderCommand);
	getInt(req, "Direction", &myreq.Direction);
	getDouble(req, "OrderPrice", &myreq.OrderPrice);
	getChar(req, "CashGroupProp", &myreq.CashGroupProp);
	int i = this->api->ReqQryMaxEntradeNum(&myreq, reqid);
	return i;
};

int TdApi::reqQryStockRealJour(const dict &req, int reqid)
{
	CHSSecuReqQryStockRealJourField myreq = CHSSecuReqQryStockRealJourField();
	memset(&myreq, 0, sizeof(myreq));
	getString(req, "ExchangeID", myreq.ExchangeID);
	getString(req, "StockCode", myreq.StockCode);
	int i = this->api->ReqQryStockRealJour(&myreq, reqid);
	return i;
};

int TdApi::reqQryBankAccount(const dict &req, int reqid)
{
	CHSSecuReqQryBankAccountField myreq = CHSSecuReqQryBankAccountField();
	memset(&myreq, 0, sizeof(myreq));
	getString(req, "BankID", myreq.BankID);
	getChar(req, "CurrencyID", &myreq.CurrencyID);
	int i = this->api->ReqQryBankAccount(&myreq, reqid);
	return i;
};

int TdApi::reqQryHKSecurate(const dict &req, int reqid)
{
	CHSSecuReqQryHKSecurateField myreq = CHSSecuReqQryHKSecurateField();
	memset(&myreq, 0, sizeof(myreq));
	getString(req, "ExchangeID", myreq.ExchangeID);
	int i = this->api->ReqQryHKSecurate(&myreq, reqid);
	return i;
};

int TdApi::reqQryAssureAmount(const dict &req, int reqid)
{
	CHSSecuReqQryAssureAmountField myreq = CHSSecuReqQryAssureAmountField();
	memset(&myreq, 0, sizeof(myreq));
	getString(req, "StockCode", myreq.StockCode);
	getString(req, "ExchangeID", myreq.ExchangeID);
	int i = this->api->ReqQryAssureAmount(&myreq, reqid);
	return i;
};

int TdApi::reqQryAssureBackAmount(const dict &req, int reqid)
{
	CHSSecuReqQryAssureBackAmountField myreq = CHSSecuReqQryAssureBackAmountField();
	memset(&myreq, 0, sizeof(myreq));
	getString(req, "ExchangeID", myreq.ExchangeID);
	getString(req, "StockCode", myreq.StockCode);
	int i = this->api->ReqQryAssureBackAmount(&myreq, reqid);
	return i;
};

int TdApi::reqQryFundPeer(const dict &req, int reqid)
{
	CHSSecuReqQryFundPeerField myreq = CHSSecuReqQryFundPeerField();
	memset(&myreq, 0, sizeof(myreq));
	getInt(req, "SysnodeID", &myreq.SysnodeID);
	getChar(req, "CurrencyID", &myreq.CurrencyID);
	int i = this->api->ReqQryFundPeer(&myreq, reqid);
	return i;
};

///-------------------------------------------------------------------------------------
///Boost.Python封装
///-------------------------------------------------------------------------------------

class PyTdApi : public TdApi
{
public:
	using TdApi::TdApi;

	void onFrontConnected() override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onFrontConnected);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onFrontDisconnected(int result) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onFrontDisconnected, result);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRspAuthenticate(const dict &data, const dict &error, int requestid, bool islast) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRspAuthenticate, data, error, requestid, islast);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRspUserLogin(const dict &data, const dict &error, int requestid, bool islast) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRspUserLogin, data, error, requestid, islast);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRspQryStkAcct(const dict &data, const dict &error, int requestid, bool islast) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRspQryStkAcct, data, error, requestid, islast);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRspUserPasswordUpdate(const dict &data, const dict &error, int requestid, bool islast) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRspUserPasswordUpdate, data, error, requestid, islast);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRspTransfer(const dict &data, const dict &error, int requestid, bool islast) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRspTransfer, data, error, requestid, islast);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRspFundTrans(const dict &data, const dict &error, int requestid, bool islast) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRspFundTrans, data, error, requestid, islast);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRspFundAlloc(const dict &data, const dict &error, int requestid, bool islast) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRspFundAlloc, data, error, requestid, islast);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRspStockTrans(const dict &data, const dict &error, int requestid, bool islast) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRspStockTrans, data, error, requestid, islast);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRspOrderInsert(const dict &data, const dict &error, int requestid, bool islast) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRspOrderInsert, data, error, requestid, islast);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRspOrderAction(const dict &data, const dict &error, int requestid, bool islast) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRspOrderAction, data, error, requestid, islast);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRspQryHold(const dict &data, const dict &error, int requestid, bool islast) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRspQryHold, data, error, requestid, islast);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRspQryFund(const dict &data, const dict &error, int requestid, bool islast) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRspQryFund, data, error, requestid, islast);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRspQryOrder(const dict &data, const dict &error, int requestid, bool islast) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRspQryOrder, data, error, requestid, islast);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRspQryTrade(const dict &data, const dict &error, int requestid, bool islast) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRspQryTrade, data, error, requestid, islast);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRspQryEquity(const dict &data, const dict &error, int requestid, bool islast) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRspQryEquity, data, error, requestid, islast);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRspQryStkcode(const dict &data, const dict &error, int requestid, bool islast) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRspQryStkcode, data, error, requestid, islast);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRtnOrder(const dict &data) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRtnOrder, data);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRtnTrade(const dict &data) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRtnTrade, data);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRspQryEtfcode(const dict &data, const dict &error, int requestid, bool islast) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRspQryEtfcode, data, error, requestid, islast);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRspQryEtfcomponent(const dict &data, const dict &error, int requestid, bool islast) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRspQryEtfcomponent, data, error, requestid, islast);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRspQryImpawnDetail(const dict &data, const dict &error, int requestid, bool islast) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRspQryImpawnDetail, data, error, requestid, islast);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRspQryBondImpawnConc(const dict &data, const dict &error, int requestid, bool islast) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRspQryBondImpawnConc, data, error, requestid, islast);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRspCashRepay(const dict &data, const dict &error, int requestid, bool islast) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRspCashRepay, data, error, requestid, islast);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRspQryEnfinFund(const dict &data, const dict &error, int requestid, bool islast) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRspQryEnfinFund, data, error, requestid, islast);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRspQryEnsloStock(const dict &data, const dict &error, int requestid, bool islast) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRspQryEnsloStock, data, error, requestid, islast);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRspQryCreditCollateral(const dict &data, const dict &error, int requestid, bool islast) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRspQryCreditCollateral, data, error, requestid, islast);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRspQryCreditUnderlying(const dict &data, const dict &error, int requestid, bool islast) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRspQryCreditUnderlying, data, error, requestid, islast);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRspQryCreditRate(const dict &data, const dict &error, int requestid, bool islast) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRspQryCreditRate, data, error, requestid, islast);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRspQryCreditAsset(const dict &data, const dict &error, int requestid, bool islast) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRspQryCreditAsset, data, error, requestid, islast);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRspQryCompact(const dict &data, const dict &error, int requestid, bool islast) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRspQryCompact, data, error, requestid, islast);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRspComOrderInsert(const dict &data, const dict &info, int requestid, bool islast) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRspComOrderInsert, data, data, requestid, islast);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRspCompactApply(const dict &data, const dict &error, int requestid, bool islast) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRspCompactApply, data, error, requestid, islast);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRspQryApplycode(const dict &data, const dict &error, int requestid, bool islast) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRspQryApplycode, data, error, requestid, islast);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRspQryFundUF20(const dict &data, const dict &error, int requestid, bool islast) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRspQryFundUF20, data, error, requestid, islast);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRspQryFundRealJour(const dict &data, const dict &error, int requestid, bool islast) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRspQryFundRealJour, data, error, requestid, islast);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRspQryCompactRealJour(const dict &data, const dict &error, int requestid, bool islast) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRspQryCompactRealJour, data, error, requestid, islast);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRspQryMaxEntradeNum(const dict &data, const dict &error, int requestid, bool islast) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRspQryMaxEntradeNum, data, error, requestid, islast);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRspQryStockRealJour(const dict &data, const dict &error, int requestid, bool islast) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRspQryStockRealJour, data, error, requestid, islast);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRspQryBankAccount(const dict &data, const dict &error, int requestid, bool islast) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRspQryBankAccount, data, error, requestid, islast);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRspQryHKSecurate(const dict &data, const dict &error, int requestid, bool islast) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRspQryHKSecurate, data, error, requestid, islast);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRspQryAssureAmount(const dict &data, const dict &error, int requestid, bool islast) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRspQryAssureAmount, data, error, requestid, islast);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRspQryAssureBackAmount(const dict &data, const dict &error, int requestid, bool islast) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRspQryAssureBackAmount, data, error, requestid, islast);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};

	void onRspQryFundPeer(const dict &data, const dict &error, int requestid, bool islast) override
	{
		try
		{
			PYBIND11_OVERLOAD(void, TdApi, onRspQryFundPeer, data, error, requestid, islast);
		}
		catch (const error_already_set &e)
		{
			cout << e.what() << endl;
		}
	};
};


PYBIND11_MODULE(vnusttd, m)
{
	class_<TdApi, PyTdApi> TdApi(m, "TdApi", module_local());
	TdApi
		.def(init<>())
		.def("newSecuTradeApi", &TdApi::newSecuTradeApi)
		.def("release", &TdApi::release)
		.def("init", &TdApi::init)
		.def("join", &TdApi::join)
		.def("exit", &TdApi::exit)
		.def("getApiErrorMsg", &TdApi::getApiErrorMsg)
		.def("registerFront", &TdApi::registerFront)
		.def("registerFensServer", &TdApi::registerFensServer)
		.def("registerSubModel", &TdApi::registerSubModel)
		.def("reqAuthenticate", &TdApi::reqAuthenticate)
		.def("reqUserLogin", &TdApi::reqUserLogin)
		.def("reqQryStkAcct", &TdApi::reqQryStkAcct)
		.def("reqUserPasswordUpdate", &TdApi::reqUserPasswordUpdate)
		.def("reqTransfer", &TdApi::reqTransfer)
		.def("reqFundTrans", &TdApi::reqFundTrans)
		.def("reqFundAlloc", &TdApi::reqFundAlloc)
		.def("reqStockTrans", &TdApi::reqStockTrans)
		.def("reqOrderInsert", &TdApi::reqOrderInsert)
		.def("reqOrderAction", &TdApi::reqOrderAction)
		.def("reqQryHold", &TdApi::reqQryHold)
		.def("reqQryFund", &TdApi::reqQryFund)
		.def("reqQryOrder", &TdApi::reqQryOrder)
		.def("reqQryTrade", &TdApi::reqQryTrade)
		.def("reqQryStkcode", &TdApi::reqQryStkcode)
		.def("reqQryEquity", &TdApi::reqQryEquity)
		.def("reqQryEtfcode", &TdApi::reqQryEtfcode)
		.def("reqQryEtfcomponent", &TdApi::reqQryEtfcomponent)
		.def("reqQryImpawnDetail", &TdApi::reqQryImpawnDetail)
		.def("reqQryBondImpawnConc", &TdApi::reqQryBondImpawnConc)
		.def("reqCashRepay", &TdApi::reqCashRepay)
		.def("reqQryEnfinFund", &TdApi::reqQryEnfinFund)
		.def("reqQryEnsloStock", &TdApi::reqQryEnsloStock)
		.def("reqQryCreditCollateral", &TdApi::reqQryCreditCollateral)
		.def("reqQryCreditUnderlying", &TdApi::reqQryCreditUnderlying)
		.def("reqQryCreditRate", &TdApi::reqQryCreditRate)
		.def("reqQryCreditAsset", &TdApi::reqQryCreditAsset)
		.def("reqQryCompact", &TdApi::reqQryCompact)
		.def("reqComOrderInsert", &TdApi::reqComOrderInsert)
		.def("reqCompactApply", &TdApi::reqCompactApply)
		.def("reqQryApplycode", &TdApi::reqQryApplycode)
		.def("reqQryFundUF20", &TdApi::reqQryFundUF20)
		.def("reqQryFundRealJour", &TdApi::reqQryFundRealJour)
		.def("reqQryCompactRealJour", &TdApi::reqQryCompactRealJour)
		.def("reqQryMaxEntradeNum", &TdApi::reqQryMaxEntradeNum)
		.def("reqQryStockRealJour", &TdApi::reqQryStockRealJour)
		.def("reqQryBankAccount", &TdApi::reqQryBankAccount)
		.def("reqQryHKSecurate", &TdApi::reqQryHKSecurate)
		.def("reqQryAssureAmount", &TdApi::reqQryAssureAmount)
		.def("reqQryAssureBackAmount", &TdApi::reqQryAssureBackAmount)
		.def("reqQryFundPeer", &TdApi::reqQryFundPeer)

		.def("onFrontConnected", &TdApi::onFrontConnected)
		.def("onFrontDisconnected", &TdApi::onFrontDisconnected)
		.def("onRspAuthenticate", &TdApi::onRspAuthenticate)
		.def("onRspUserLogin", &TdApi::onRspUserLogin)
		.def("onRspQryStkAcct", &TdApi::onRspQryStkAcct)
		.def("onRspUserPasswordUpdate", &TdApi::onRspUserPasswordUpdate)
		.def("onRspTransfer", &TdApi::onRspTransfer)
		.def("onRspFundTrans", &TdApi::onRspFundTrans)
		.def("onRspFundAlloc", &TdApi::onRspFundAlloc)
		.def("onRspStockTrans", &TdApi::onRspStockTrans)
		.def("onRspOrderInsert", &TdApi::onRspOrderInsert)
		.def("onRspOrderAction", &TdApi::onRspOrderAction)
		.def("onRspQryHold", &TdApi::onRspQryHold)
		.def("onRspQryFund", &TdApi::onRspQryFund)
		.def("onRspQryOrder", &TdApi::onRspQryOrder)
		.def("onRspQryTrade", &TdApi::onRspQryTrade)
		.def("onRspQryEquity", &TdApi::onRspQryEquity)
		.def("onRspQryStkcode", &TdApi::onRspQryStkcode)
		.def("onRtnOrder", &TdApi::onRtnOrder)
		.def("onRtnTrade", &TdApi::onRtnTrade)
		.def("onRspQryEtfcode", &TdApi::onRspQryEtfcode)
		.def("onRspQryEtfcomponent", &TdApi::onRspQryEtfcomponent)
		.def("onRspQryImpawnDetail", &TdApi::onRspQryImpawnDetail)
		.def("onRspQryBondImpawnConc", &TdApi::onRspQryBondImpawnConc)
		.def("onRspCashRepay", &TdApi::onRspCashRepay)
		.def("onRspQryEnfinFund", &TdApi::onRspQryEnfinFund)
		.def("onRspQryEnsloStock", &TdApi::onRspQryEnsloStock)
		.def("onRspQryCreditCollateral", &TdApi::onRspQryCreditCollateral)
		.def("onRspQryCreditUnderlying", &TdApi::onRspQryCreditUnderlying)
		.def("onRspQryCreditRate", &TdApi::onRspQryCreditRate)
		.def("onRspQryCreditAsset", &TdApi::onRspQryCreditAsset)
		.def("onRspQryCompact", &TdApi::onRspQryCompact)
		.def("onRspComOrderInsert", &TdApi::onRspComOrderInsert)
		.def("onRspCompactApply", &TdApi::onRspCompactApply)
		.def("onRspQryApplycode", &TdApi::onRspQryApplycode)
		.def("onRspQryFundUF20", &TdApi::onRspQryFundUF20)
		.def("onRspQryFundRealJour", &TdApi::onRspQryFundRealJour)
		.def("onRspQryCompactRealJour", &TdApi::onRspQryCompactRealJour)
		.def("onRspQryMaxEntradeNum", &TdApi::onRspQryMaxEntradeNum)
		.def("onRspQryStockRealJour", &TdApi::onRspQryStockRealJour)
		.def("onRspQryBankAccount", &TdApi::onRspQryBankAccount)
		.def("onRspQryHKSecurate", &TdApi::onRspQryHKSecurate)
		.def("onRspQryAssureAmount", &TdApi::onRspQryAssureAmount)
		.def("onRspQryAssureBackAmount", &TdApi::onRspQryAssureBackAmount)
		.def("onRspQryFundPeer", &TdApi::onRspQryFundPeer)
		;
}
