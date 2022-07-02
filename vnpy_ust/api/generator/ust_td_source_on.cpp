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

void onRspComOrderInsert(const dict &data, const dict &data, int requestid, bool islast) override
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

