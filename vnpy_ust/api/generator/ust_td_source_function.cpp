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
	getInt(req, "ClientOrderID", &myreq.ClientOrderID);
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
	getInt(req, "ClientOrderID", &myreq.ClientOrderID);
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
	getInt(req, "ClientOrderID", &myreq.ClientOrderID);
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
	getInt(req, "ClientOrderID", &myreq.ClientOrderID);
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
	getString(req, "ReqOrder", myreq.ReqOrder);
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

