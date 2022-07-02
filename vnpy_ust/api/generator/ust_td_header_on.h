virtual void onFrontConnected() {};

virtual void onFrontDisconnected(int result) {};

virtual void onRspAuthenticate(const dict &data, const dict &error, int requestid, bool islast) {};

virtual void onRspUserLogin(const dict &data, const dict &error, int requestid, bool islast) {};

virtual void onRspQryStkAcct(const dict &data, const dict &error, int requestid, bool islast) {};

virtual void onRspUserPasswordUpdate(const dict &data, const dict &error, int requestid, bool islast) {};

virtual void onRspTransfer(const dict &data, const dict &error, int requestid, bool islast) {};

virtual void onRspFundTrans(const dict &data, const dict &error, int requestid, bool islast) {};

virtual void onRspFundAlloc(const dict &data, const dict &error, int requestid, bool islast) {};

virtual void onRspStockTrans(const dict &data, const dict &error, int requestid, bool islast) {};

virtual void onRspOrderInsert(const dict &data, const dict &error, int requestid, bool islast) {};

virtual void onRspOrderAction(const dict &data, const dict &error, int requestid, bool islast) {};

virtual void onRspQryHold(const dict &data, const dict &error, int requestid, bool islast) {};

virtual void onRspQryFund(const dict &data, const dict &error, int requestid, bool islast) {};

virtual void onRspQryOrder(const dict &data, const dict &error, int requestid, bool islast) {};

virtual void onRspQryTrade(const dict &data, const dict &error, int requestid, bool islast) {};

virtual void onRspQryEquity(const dict &data, const dict &error, int requestid, bool islast) {};

virtual void onRspQryStkcode(const dict &data, const dict &error, int requestid, bool islast) {};

virtual void onRtnOrder(const dict &data) {};

virtual void onRtnTrade(const dict &data) {};

virtual void onRspQryEtfcode(const dict &data, const dict &error, int requestid, bool islast) {};

virtual void onRspQryEtfcomponent(const dict &data, const dict &error, int requestid, bool islast) {};

virtual void onRspQryImpawnDetail(const dict &data, const dict &error, int requestid, bool islast) {};

virtual void onRspQryBondImpawnConc(const dict &data, const dict &error, int requestid, bool islast) {};

virtual void onRspCashRepay(const dict &data, const dict &error, int requestid, bool islast) {};

virtual void onRspQryEnfinFund(const dict &data, const dict &error, int requestid, bool islast) {};

virtual void onRspQryEnsloStock(const dict &data, const dict &error, int requestid, bool islast) {};

virtual void onRspQryCreditCollateral(const dict &data, const dict &error, int requestid, bool islast) {};

virtual void onRspQryCreditUnderlying(const dict &data, const dict &error, int requestid, bool islast) {};

virtual void onRspQryCreditRate(const dict &data, const dict &error, int requestid, bool islast) {};

virtual void onRspQryCreditAsset(const dict &data, const dict &error, int requestid, bool islast) {};

virtual void onRspQryCompact(const dict &data, const dict &error, int requestid, bool islast) {};

virtual void onRspComOrderInsert(const dict &data, const dict &data, int requestid, bool islast) {};

virtual void onRspCompactApply(const dict &data, const dict &error, int requestid, bool islast) {};

virtual void onRspQryApplycode(const dict &data, const dict &error, int requestid, bool islast) {};

virtual void onRspQryFundUF20(const dict &data, const dict &error, int requestid, bool islast) {};

virtual void onRspQryFundRealJour(const dict &data, const dict &error, int requestid, bool islast) {};

virtual void onRspQryCompactRealJour(const dict &data, const dict &error, int requestid, bool islast) {};

virtual void onRspQryMaxEntradeNum(const dict &data, const dict &error, int requestid, bool islast) {};

virtual void onRspQryStockRealJour(const dict &data, const dict &error, int requestid, bool islast) {};

virtual void onRspQryBankAccount(const dict &data, const dict &error, int requestid, bool islast) {};

virtual void onRspQryHKSecurate(const dict &data, const dict &error, int requestid, bool islast) {};

virtual void onRspQryAssureAmount(const dict &data, const dict &error, int requestid, bool islast) {};

virtual void onRspQryAssureBackAmount(const dict &data, const dict &error, int requestid, bool islast) {};

virtual void onRspQryFundPeer(const dict &data, const dict &error, int requestid, bool islast) {};

