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

