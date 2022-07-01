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

