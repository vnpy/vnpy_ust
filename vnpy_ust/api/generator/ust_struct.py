CHSSecuRspInfoField = {
    "ErrorID": "int",
    "ErrorMsg": "string",
}

CHSSecuReqAuthenticateField = {
    "AccountID": "string",
    "AppID": "string",
    "AuthCode": "string",
}

CHSSecuRspAuthenticateField = {
    "AccountID": "string",
    "AppID": "string",
    "AuthCode": "string",
}

CHSSecuReqUserLoginField = {
    "AccountID": "string",
    "Password": "string",
    "UserApplicationType": "char",
    "UserApplicationInfo": "string",
    "MacAddress": "string",
    "IPAddress": "string",
    "UserStationInfo": "string",
}

CHSSecuRspUserLoginField = {
    "BranchID": "int",
    "AccountID": "string",
    "AssetProp": "char",
    "UserName": "string",
    "TradingDay": "int",
    "OrderRef": "string",
    "SessionID": "int",
    "UserID": "string",
}

CHSSecuReqQryStkAcctField = {
    "ExchangeID": "string",
}

CHSSecuRspQryStkAcctField = {
    "AccountID": "string",
    "ExchangeID": "string",
    "StockAccount": "string",
}

CHSSecuReqUserPasswordUpdateField = {
    "PasswordType": "char",
    "Password": "string",
    "NewPassword": "string",
}

CHSSecuRspUserPasswordUpdateField = {
}

CHSSecuReqTransferField = {
    "BankID": "string",
    "TransferType": "char",
    "OccurBalance": "double",
    "FundPassword": "string",
    "BankPassword": "string",
    "CurrencyID": "char",
    "TransferOccasion": "string",
}

CHSSecuRspTransferField = {
    "TransferSerialID": "int",
    "BankID": "string",
    "TransferType": "char",
    "OccurBalance": "double",
    "CurrencyID": "char",
    "TransferOccasion": "string",
}

CHSSecuReqFundTransField = {
    "TransDirection": "char",
    "CurrencyID": "char",
    "OccurBalance": "double",
}

CHSSecuRspFundTransField = {
    "FundTransSerialID": "int",
}

CHSSecuReqFundAllocField = {
    "TransDirection": "char",
    "CurrencyID": "char",
    "OccurBalance": "double",
    "SysnodeID": "int",
}

CHSSecuRspFundAllocField = {
    "FundTransSerialID": "int",
}

CHSSecuReqStockTransField = {
    "TransDirection": "char",
    "StockAccount": "string",
    "ExchangeID": "string",
    "StockCode": "string",
    "OccurVolume": "double",
}

CHSSecuRspStockTransField = {
    "StockTransSerialID": "int",
}

CHSSecuReqOrderInsertField = {
    "ExchangeID": "string",
    "StockCode": "string",
    "OrderCommand": "int",
    "Direction": "int",
    "OrderPrice": "double",
    "OrderVolume": "double",
    "StockAccount": "string",
    "OrderRef": "string",
    "CashGroupProp": "char",
    "CompactID": "string",
    "BatchNo": "int",
    "ChannelType": "char",
    "StockProperty": "string",
    "ClientOrderID": "int",
    "SecuPassword": "string",
}

CHSSecuRspOrderInsertField = {
    "OrderPartition": "int",
    "BrokerOrderID": "string",
    "SessionID": "int",
    "OrderRef": "string",
    "BatchNo": "int",
    "ClientOrderID": "int",
}

CHSSecuReqOrderActionField = {
    "OrderPartition": "int",
    "BrokerOrderID": "string",
    "SessionID": "int",
    "OrderRef": "string",
    "ClientOrderID": "int",
}

CHSSecuRspOrderActionField = {
    "OrderPartition": "int",
    "BrokerOrderID": "string",
    "OrigOrderPartition": "int",
    "OrigBrokerOrderID": "string",
    "OrigSessionID": "int",
    "OrigOrderRef": "string",
    "OrigClientOrderID": "int",
}

CHSSecuReqQryOrderField = {
    "OrderPartition": "int",
    "BrokerOrderID": "string",
    "SessionID": "int",
    "OrderRef": "string",
    "ClientOrderID": "int",
}

CHSSecuOrderField = {
    "TradingDay": "int",
    "AccountID": "string",
    "OrderPartition": "int",
    "BrokerOrderID": "string",
    "SessionID": "int",
    "OrderRef": "string",
    "ExchangeID": "string",
    "StockAccount": "string",
    "StockCode": "string",
    "Direction": "int",
    "OrderPrice": "double",
    "OrderVolume": "double",
    "OrderStatus": "char",
    "OrderCommand": "int",
    "ReportTime": "int",
    "ErrorMsg": "string",
    "TradeVolume": "double",
    "BatchNo": "int",
    "WithdrawVolume": "double",
    "OrderTime": "int",
    "BrokerWithdrawOrderID": "string",
    "FrozenBalance": "double",
    "FrozenFare": "double",
    "BranchID": "int",
    "OrderAssStatus": "char",
    "WithdrawOrderStatus": "char",
    "OccurTime": "int",
    "ClientOrderID": "int",
    "StockName": "string",
    "TradePrice": "double",
    "BusinessBalance": "double",
}

CHSSecuReqQryFundField = {
    "CurrencyID": "char",
}

CHSSecuRspQryFundField = {
    "CurrencyID": "char",
    "CurrentBalance": "double",
    "BeginBalance": "double",
    "AvailableBalance": "double",
    "FetchBalance": "double",
    "MarketValue": "double",
    "TotalAsset": "double",
}

CHSSecuReqQryFundUF20Field = {
    "CurrencyID": "char",
}

CHSSecuRspQryFundUF20Field = {
    "CurrencyID": "char",
    "CurrentBalance": "double",
    "AvailableBalance": "double",
    "FetchBalance": "double",
    "FrozenBalance": "double",
    "UnfrozenBalance": "double",
    "TotalAsset": "double",
}

CHSSecuReqQryHoldField = {
    "ExchangeID": "string",
    "StockCode": "string",
}

CHSSecuRspQryHoldField = {
    "AccountID": "string",
    "ExchangeID": "string",
    "StockAccount": "string",
    "StockCode": "string",
    "StockName": "string",
    "StockType": "string",
    "CurrentVolume": "double",
    "AvailableVolume": "double",
    "AvBuyPrice": "double",
    "AssetPrice": "double",
    "AchvProfit": "double",
    "BeginVolume": "double",
    "RealBuyVolume": "double",
    "RealSellVolume": "double",
    "UncomeBuyVolume": "double",
    "UncomeSellVolume": "double",
    "FloatProfit": "double",
    "MarketValue": "double",
}

CHSSecuReqQryEquityField = {
    "ExchangeID": "string",
}

CHSSecuRspQryEquityField = {
    "TradingDay": "int",
    "BranchID": "int",
    "AccountID": "string",
    "StockAccount": "string",
    "ExchangeID": "string",
    "AvailableVolume": "double",
    "StarAvailableVolume": "double",
}

CHSSecuReqQryTradeField = {
    "OrderPartition": "int",
    "BrokerOrderID": "string",
    "SessionID": "int",
    "OrderRef": "string",
    "ClientOrderID": "int",
}

CHSSecuTradeField = {
    "TradingDay": "int",
    "AccountID": "string",
    "OrderPartition": "int",
    "BrokerOrderID": "string",
    "SessionID": "int",
    "OrderRef": "string",
    "ExchangeID": "string",
    "StockAccount": "string",
    "StockCode": "string",
    "Direction": "int",
    "OrderCommand": "int",
    "TradeStatus": "char",
    "TradeID": "string",
    "TradeVolume": "double",
    "TradePrice": "double",
    "TradeTime": "int",
    "ErrorMsg": "string",
    "BatchNo": "int",
    "BrokerWithdrawOrderID": "string",
    "BusinessBalance": "double",
    "BranchID": "int",
    "OrderStatus": "char",
    "OccurTime": "int",
    "ClientOrderID": "int",
}

CHSSecuReqQryEnfinFundField = {
    "CashGroupProp": "char",
}

CHSSecuRspQryEnfinFundField = {
    "AvailableBalance": "double",
}

CHSSecuReqQryEnsloStockField = {
    "ExchangeID": "string",
    "StockType": "string",
    "StockCode": "string",
    "CashGroupProp": "char",
}

CHSSecuRspQryEnsloStockField = {
    "ExchangeID": "string",
    "StockCode": "string",
    "StockType": "string",
    "StockName": "string",
    "ShortSellRatio": "double",
    "ShortSellStatus": "char",
    "AvailableVolume": "double",
    "CashGroupProp": "char",
}

CHSSecuReqQryStkcodeField = {
    "ExchangeID": "string",
    "StockCode": "string",
}

CHSSecuRspQryStkcodeField = {
    "ExchangeID": "string",
    "StockCode": "string",
    "StockName": "string",
    "BuyUnit": "int",
    "PriceStep": "int",
    "StoreUnit": "int",
    "MaxVolume": "double",
    "MinVolume": "double",
    "StockType": "string",
    "ParValue": "double",
    "SubStockType": "string",
    "MaxBalance": "double",
    "MinBalance": "double",
    "StockCodeStatus": "char",
    "DelistFlag": "char",
    "UpPrice": "double",
    "DownPrice": "double",
}

CHSSecuReqQryCreditCollateralField = {
    "ExchangeID": "string",
    "StockCode": "string",
}

CHSSecuRspQryCreditCollateralField = {
    "ExchangeID": "string",
    "StockCode": "string",
    "StockName": "string",
    "StockType": "string",
    "CollateralEndDate": "int",
    "CollateralRate": "double",
    "CollateralStatus": "char",
}

CHSSecuReqQryCreditUnderlyingField = {
    "ExchangeID": "string",
    "StockCode": "string",
}

CHSSecuRspQryCreditUnderlyingField = {
    "ExchangeID": "string",
    "StockCode": "string",
    "StockName": "string",
    "StockType": "string",
    "MarginBuyEndDate": "int",
    "ShortSellEndDate": "int",
    "MarginBuyStatus": "char",
    "ShortSellStatus": "char",
    "MarginBuyRate": "double",
    "ShortSellRate": "double",
}

CHSSecuReqQryEtfcodeField = {
    "ExchangeID": "string",
    "EtfCode": "string",
    "PurRedStockCode": "string",
}

CHSSecuRspQryEtfcodeField = {
    "ExchangeID": "string",
    "EtfCode": "string",
    "PurRedStockCode": "string",
    "MaxCashRatio": "double",
    "EtfStatus": "char",
    "YdCashComponent": "double",
    "YdNavPercu": "double",
    "YdNav": "double",
    "EtfType": "char",
    "PurchaseMax": "double",
    "RedeemMax": "double",
}

CHSSecuReqQryEtfcomponentField = {
    "ExchangeID": "string",
    "PurRedStockCode": "string",
    "EtfComponentCode": "string",
}

CHSSecuRspQryEtfcomponentField = {
    "ExchangeID": "string",
    "PurRedStockCode": "string",
    "EtfComponentCode": "string",
    "EtfComponentName": "string",
    "EtfComponentVolume": "double",
    "ReplaceFlag": "char",
    "PremiumRate": "double",
    "ReplaceBalance": "double",
    "EtfComponentMarket": "string",
}

CHSSecuReqQryCreditRateField = {
}

CHSSecuRspQryCreditRateField = {
    "StockCode": "string",
    "CreditRateType": "char",
    "YearRate": "double",
}

CHSSecuReqQryCreditAssetField = {
}

CHSSecuRspQryCreditAssetField = {
    "CashAsset": "double",
    "MarketValue": "double",
    "CollateralAsset": "double",
    "TotalDebit": "double",
    "PerCollateralRatio": "double",
    "AvailableMargin": "double",
    "UsedMargin": "double",
    "MarginBuyQuota": "double",
    "MarginBuyAvailableQuota": "double",
    "MarginBuyCompactBalance": "double",
    "MarginBuyCompactFare": "double",
    "MarginBuyCompactInterest": "double",
    "MarginBuyProfit": "double",
    "ShortSellQuota": "double",
    "ShortSellAvailableQuota": "double",
    "ShortSellCompactBalance": "double",
    "ShortSellCompactFare": "double",
    "ShortSellCompactInterest": "double",
    "ShortSellProfit": "double",
    "SloSurplusBalance": "double",
    "SloUsedBalance": "double",
}

CHSSecuReqCashRepayField = {
    "CompactID": "string",
    "CashGroupProp": "char",
    "RepayBalance": "double",
}

CHSSecuRspCashRepayField = {
    "OccurBalance": "double",
}

CHSSecuReqQryCompactField = {
    "ExchangeID": "string",
    "StockCode": "string",
    "CompactID": "string",
    "CompactType": "char",
    "CompactSource": "char",
}

CHSSecuRspQryCompactField = {
    "OpenDate": "int",
    "CompactID": "string",
    "CurrencyID": "char",
    "StockAccount": "string",
    "ExchangeID": "string",
    "StockCode": "string",
    "StockName": "string",
    "CreditRate": "double",
    "CompactType": "char",
    "CompactStatus": "char",
    "LeaveCompactBalance": "double",
    "LeaveCompactVolume": "double",
    "LeaveCompactFare": "double",
    "LeaveCompactInterest": "double",
    "TotalDebit": "double",
    "YearRate": "double",
    "RetEndDate": "int",
    "CompactSource": "char",
    "MarginBuyProfit": "double",
    "ShortSellProfit": "double",
    "FineBeginDate": "int",
    "RepaidInterest": "double",
    "RepaidBalance": "double",
    "RepaidAmount": "double",
}

CHSSecuReqQryImpawnDetailField = {
    "StockAccount": "string",
    "ExchangeID": "string",
    "StockCode": "string",
}

CHSSecuRspQryImpawnDetailField = {
    "ExchangeID": "string",
    "StockAccount": "string",
    "StockCode": "string",
    "StoreVolume": "double",
    "ImpawnRate": "double",
    "ImpawnOutVolume": "double",
    "ImpawnInVolume": "double",
    "ImpawnVolume": "double",
}

CHSSecuReqQryBondImpawnConcField = {
    "ExchangeID": "string",
    "StockCode": "string",
}

CHSSecuRspQryBondImpawnConcField = {
    "ExchangeID": "string",
    "StockCode": "string",
    "StockName": "string",
    "ImpawnVolume": "double",
    "TrusteeVolume": "double",
    "BondConcRatio": "double",
    "ConcSurplusVolume": "double",
}

CHSSecuReqComOrderInsertField = {
    "Count": "int",
    "ReqOrder": "string",
}

CHSSecuRspComOrderInsertField = {
    "Count": "int",
    "RspOrder": "string",
}

CHSSecuRspComInfoField = {
    "Count": "int",
    "RspInfo": "string",
}

CHSSecuReqCompactApplyField = {
    "CompactIDStr": "string",
}

CHSSecuRspCompactApplyField = {
}

CHSSecuReqQryApplycodeField = {
    "ExchangeID": "string",
    "StockCode": "string",
    "SubStockType": "string",
}

CHSSecuRspQryApplycodeField = {
    "ExchangeID": "string",
    "StockCode": "string",
    "StockName": "string",
    "BuyUnit": "int",
    "PriceStep": "int",
    "StoreUnit": "int",
    "MaxVolume": "double",
    "MinVolume": "double",
    "StockType": "string",
    "ParValue": "double",
    "SubStockType": "string",
    "MaxBalance": "double",
    "MinBalance": "double",
    "StockCodeStatus": "char",
    "IssueDate": "int",
}

CHSSecuReqQryFundRealJourField = {
    "CurrencyID": "char",
}

CHSSecuRspQryFundRealJourField = {
    "SerialNo": "int",
    "CurrencyID": "char",
    "OccurBalance": "double",
    "PostBalance": "double",
    "RealAction": "char",
    "BusinessFlag": "int",
    "CurrTime": "int",
}

CHSSecuReqQryCompactRealJourField = {
    "StockCode": "string",
    "CompactSource": "char",
    "CompactType": "char",
    "CompactID": "string",
    "BrokerOrderID": "string",
}

CHSSecuRspQryCompactRealJourField = {
    "StockAccount": "string",
    "CurrencyID": "char",
    "AccountID": "string",
    "ExchangeType": "string",
    "SerialNo": "int",
    "CurrDate": "int",
    "CurrTime": "int",
    "BusinessFlag": "int",
    "OccurBalance": "double",
    "PostBalance": "double",
    "OccurAmount": "double",
    "PostAmount": "double",
    "OccurFare": "double",
    "PostFare": "double",
    "OccurInterest": "double",
    "PostInterest": "double",
    "BrokerOrderID": "string",
    "CompactID": "string",
    "StockCode": "string",
}

CHSSecuReqQryMaxEntradeNumField = {
    "ExchangeID": "string",
    "StockCode": "string",
    "OrderCommand": "int",
    "Direction": "int",
    "OrderPrice": "double",
    "CashGroupProp": "char",
}

CHSSecuRspQryMaxEntradeNumField = {
    "AvailableTradeAmount": "double",
    "AvailableBalance": "double",
}

CHSSecuReqQryStockRealJourField = {
    "ExchangeID": "string",
    "StockCode": "string",
}

CHSSecuRspQryStockRealJourField = {
    "ExchangeID": "string",
    "StockCode": "string",
    "StockName": "string",
    "StockType": "string",
    "SerialNo": "int",
    "OccurVolume": "double",
    "PostVolume": "double",
    "RealAction": "char",
    "BusinessFlag": "int",
    "StockAccount": "string",
}

CHSSecuReqQryBankAccountField = {
    "BankID": "string",
    "CurrencyID": "char",
}

CHSSecuRspQryBankAccountField = {
    "BankID": "string",
    "BankName": "string",
    "BankAccountID": "string",
    "CurrencyID": "char",
}

CHSSecuReqQryHKSecurateField = {
    "ExchangeID": "string",
}

CHSSecuRspQryHKSecurateField = {
    "BuyExchangeRate": "double",
    "SellExchangeRate": "double",
    "MiddleExchangeRate": "double",
    "SeBuyExchangeRate": "double",
    "SeSellExchangeRate": "double",
    "BuyFloatRatio": "double",
    "SellFloatRatio": "double",
    "ExchangeID": "string",
    "ValidDate": "int",
}

CHSSecuReqQryAssureAmountField = {
    "StockCode": "string",
    "ExchangeID": "string",
}

CHSSecuRspQryAssureAmountField = {
    "EnableAmount": "double",
}

CHSSecuReqQryAssureBackAmountField = {
    "ExchangeID": "string",
    "StockCode": "string",
}

CHSSecuRspQryAssureBackAmountField = {
    "ExchangeID": "string",
    "StockCode": "string",
    "EnableReturnAmount": "double",
}

CHSSecuReqQryFundPeerField = {
    "SysnodeID": "int",
    "CurrencyID": "char",
}

CHSSecuRspQryFundPeerField = {
    "CurrentBalance": "double",
    "AvailableBalance": "double",
    "CurrencyID": "char",
}

