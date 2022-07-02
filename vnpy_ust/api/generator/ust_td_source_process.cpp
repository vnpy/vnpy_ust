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
		data["RspOrder"] = toUtf(task_data->RspOrder);
		delete task_data;
	}
	dict data;
	if (task->task_data)
	{
		CHSSecuRspComInfoField *task_data = (CHSSecuRspComInfoField*)task->task_data;
		data["Count"] = task_data->Count;
		data["RspInfo"] = toUtf(task_data->RspInfo);
		delete task_data;
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

