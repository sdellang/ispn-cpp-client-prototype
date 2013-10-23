#include "DF_CMF_QUOTE.h"

#include <string.h>

void DF_CMF_QUOTE::setDFPInQuoteInQuoteMsgInfoInMsgId(const unsigned long& pDFPInQuoteInQuoteMsgInfoInMsgId)
{
  _txn.DFP.Quote.QuoteMsgInfo.MsgId = pDFPInQuoteInQuoteMsgInfoInMsgId;
}

void DF_CMF_QUOTE::setDFPInQuoteInQuoteMsgInfoInMarketId(const unsigned long& pDFPInQuoteInQuoteMsgInfoInMarketId)
{
  _txn.DFP.Quote.QuoteMsgInfo.MarketId = pDFPInQuoteInQuoteMsgInfoInMarketId;
}

void DF_CMF_QUOTE::setDFPInQuoteInQuoteMsgInfoInSectionId(const unsigned long& pDFPInQuoteInQuoteMsgInfoInSectionId)
{
  _txn.DFP.Quote.QuoteMsgInfo.SectionId = pDFPInQuoteInQuoteMsgInfoInSectionId;
}

void DF_CMF_QUOTE::setDFPInQuoteInQuoteMsgInfoInMsgDate(const unsigned long& pDFPInQuoteInQuoteMsgInfoInMsgDate)
{
  _txn.DFP.Quote.QuoteMsgInfo.MsgDate = pDFPInQuoteInQuoteMsgInfoInMsgDate;
}

void DF_CMF_QUOTE::setDFPInQuoteInQuoteMsgInfoInMsgTime(const uint64_t& pDFPInQuoteInQuoteMsgInfoInMsgTime)
{
  _txn.DFP.Quote.QuoteMsgInfo.MsgTime = pDFPInQuoteInQuoteMsgInfoInMsgTime;
}

void DF_CMF_QUOTE::setDFPInQuoteInProviderInMemberId(const unsigned long& pDFPInQuoteInProviderInMemberId)
{
  _txn.DFP.Quote.Provider.MemberId = pDFPInQuoteInProviderInMemberId;
}

void DF_CMF_QUOTE::setDFPInQuoteInProviderInTraderId(const unsigned long& pDFPInQuoteInProviderInTraderId)
{
  _txn.DFP.Quote.Provider.TraderId = pDFPInQuoteInProviderInTraderId;
}

void DF_CMF_QUOTE::setDFPInQuoteInProviderInTraderName(const std::string& pDFPInQuoteInProviderInTraderName)
{
  memset(_txn.DFP.Quote.Provider.TraderName, 0, sizeof(_txn.DFP.Quote.Provider.TraderName));
  memcpy(_txn.DFP.Quote.Provider.TraderName, pDFPInQuoteInProviderInTraderName.c_str(), pDFPInQuoteInProviderInTraderName.length() < sizeof(_txn.DFP.Quote.Provider.TraderName) ? pDFPInQuoteInProviderInTraderName.length() : sizeof(_txn.DFP.Quote.Provider.TraderName));
}

void DF_CMF_QUOTE::setDFPInQuoteInProviderInUserData(const std::string& pDFPInQuoteInProviderInUserData)
{
  memset(_txn.DFP.Quote.Provider.UserData, 0, sizeof(_txn.DFP.Quote.Provider.UserData));
  memcpy(_txn.DFP.Quote.Provider.UserData, pDFPInQuoteInProviderInUserData.c_str(), pDFPInQuoteInProviderInUserData.length() < sizeof(_txn.DFP.Quote.Provider.UserData) ? pDFPInQuoteInProviderInUserData.length() : sizeof(_txn.DFP.Quote.Provider.UserData));
}

void DF_CMF_QUOTE::setDFPInQuoteInInstrumentInInstrumentId(const unsigned long& pDFPInQuoteInInstrumentInInstrumentId)
{
  _txn.DFP.Quote.Instrument.InstrumentId = pDFPInQuoteInInstrumentInInstrumentId;
}

void DF_CMF_QUOTE::setDFPInQuoteInInstrumentInInstrumentType(const TI_INSTRUMENT_TYPEEnum& pDFPInQuoteInInstrumentInInstrumentType)
{
  _txn.DFP.Quote.Instrument.InstrumentType = pDFPInQuoteInInstrumentInInstrumentType;
}

void DF_CMF_QUOTE::setDFPInQuoteInSponsorId(const unsigned long& pDFPInQuoteInSponsorId)
{
  _txn.DFP.Quote.SponsorId = pDFPInQuoteInSponsorId;
}

void DF_CMF_QUOTE::setDFPInQuoteInEvent(const CMF_QUOTE_EVENTEnum& pDFPInQuoteInEvent)
{
  _txn.DFP.Quote.Event = pDFPInQuoteInEvent;
}

void DF_CMF_QUOTE::setDFPInQuoteInQuoteStatus(const CMF_QUOTE_STATUSEnum& pDFPInQuoteInQuoteStatus)
{
  _txn.DFP.Quote.QuoteStatus = pDFPInQuoteInQuoteStatus;
}

void DF_CMF_QUOTE::setDFPInQuoteInQuotingSide(const CMF_QUOTING_SIDEEnum& pDFPInQuoteInQuotingSide)
{
  _txn.DFP.Quote.QuotingSide = pDFPInQuoteInQuotingSide;
}

void DF_CMF_QUOTE::setDFPInQuoteInBidInQuotation(const double& pDFPInQuoteInBidInQuotation)
{
  _txn.DFP.Quote.Bid.Quotation = pDFPInQuoteInBidInQuotation;
}

void DF_CMF_QUOTE::setDFPInQuoteInBidInStrikerQuotation(const double& pDFPInQuoteInBidInStrikerQuotation)
{
  _txn.DFP.Quote.Bid.StrikerQuotation = pDFPInQuoteInBidInStrikerQuotation;
}

void DF_CMF_QUOTE::setDFPInQuoteInBidInStrikerQuotationFg(const TI_FLAGEnum& pDFPInQuoteInBidInStrikerQuotationFg)
{
  _txn.DFP.Quote.Bid.StrikerQuotationFg = pDFPInQuoteInBidInStrikerQuotationFg;
}

void DF_CMF_QUOTE::setDFPInQuoteInBidInTotalQty(const double& pDFPInQuoteInBidInTotalQty)
{
  _txn.DFP.Quote.Bid.TotalQty = pDFPInQuoteInBidInTotalQty;
}

void DF_CMF_QUOTE::setDFPInQuoteInBidInVisibleEBMQty(const double& pDFPInQuoteInBidInVisibleEBMQty)
{
  _txn.DFP.Quote.Bid.VisibleEBMQty = pDFPInQuoteInBidInVisibleEBMQty;
}

void DF_CMF_QUOTE::setDFPInQuoteInBidInVisibleDomQty(const double& pDFPInQuoteInBidInVisibleDomQty)
{
  _txn.DFP.Quote.Bid.VisibleDomQty = pDFPInQuoteInBidInVisibleDomQty;
}

void DF_CMF_QUOTE::setDFPInQuoteInBidInMinStrikerQty(const double& pDFPInQuoteInBidInMinStrikerQty)
{
  _txn.DFP.Quote.Bid.MinStrikerQty = pDFPInQuoteInBidInMinStrikerQty;
}

void DF_CMF_QUOTE::setDFPInQuoteInAskInQuotation(const double& pDFPInQuoteInAskInQuotation)
{
  _txn.DFP.Quote.Ask.Quotation = pDFPInQuoteInAskInQuotation;
}

void DF_CMF_QUOTE::setDFPInQuoteInAskInStrikerQuotation(const double& pDFPInQuoteInAskInStrikerQuotation)
{
  _txn.DFP.Quote.Ask.StrikerQuotation = pDFPInQuoteInAskInStrikerQuotation;
}

void DF_CMF_QUOTE::setDFPInQuoteInAskInStrikerQuotationFg(const TI_FLAGEnum& pDFPInQuoteInAskInStrikerQuotationFg)
{
  _txn.DFP.Quote.Ask.StrikerQuotationFg = pDFPInQuoteInAskInStrikerQuotationFg;
}

void DF_CMF_QUOTE::setDFPInQuoteInAskInTotalQty(const double& pDFPInQuoteInAskInTotalQty)
{
  _txn.DFP.Quote.Ask.TotalQty = pDFPInQuoteInAskInTotalQty;
}

void DF_CMF_QUOTE::setDFPInQuoteInAskInVisibleEBMQty(const double& pDFPInQuoteInAskInVisibleEBMQty)
{
  _txn.DFP.Quote.Ask.VisibleEBMQty = pDFPInQuoteInAskInVisibleEBMQty;
}

void DF_CMF_QUOTE::setDFPInQuoteInAskInVisibleDomQty(const double& pDFPInQuoteInAskInVisibleDomQty)
{
  _txn.DFP.Quote.Ask.VisibleDomQty = pDFPInQuoteInAskInVisibleDomQty;
}

void DF_CMF_QUOTE::setDFPInQuoteInAskInMinStrikerQty(const double& pDFPInQuoteInAskInMinStrikerQty)
{
  _txn.DFP.Quote.Ask.MinStrikerQty = pDFPInQuoteInAskInMinStrikerQty;
}

void DF_CMF_QUOTE::setDFPInQuoteInLinkedQuoteGroupId(const unsigned long& pDFPInQuoteInLinkedQuoteGroupId)
{
  _txn.DFP.Quote.LinkedQuoteGroupId = pDFPInQuoteInLinkedQuoteGroupId;
}

void DF_CMF_QUOTE::setDFPInQuoteInParallelQuotingFlag(const TI_FLAGEnum& pDFPInQuoteInParallelQuotingFlag)
{
  _txn.DFP.Quote.ParallelQuotingFlag = pDFPInQuoteInParallelQuotingFlag;
}

void DF_CMF_QUOTE::setDFPInQuoteInEditTime(const uint64_t& pDFPInQuoteInEditTime)
{
  _txn.DFP.Quote.EditTime = pDFPInQuoteInEditTime;
}

void DF_CMF_QUOTE::setDFPInQuoteInStageOrderId(const unsigned long& pDFPInQuoteInStageOrderId)
{
  _txn.DFP.Quote.StageOrderId = pDFPInQuoteInStageOrderId;
}

void DF_CMF_QUOTE::setPriorityTimestamp(const uint64_t& pPriorityTimestamp)
{
  _txn.PriorityTimestamp = pPriorityTimestamp;
}

DF_CMF_QUOTE::DF_CMF_QUOTE()
{
	memset(&_txn,0,sizeOf());
}

DF_CMF_QUOTE::DF_CMF_QUOTE(const DF_CMF_QUOTE& src) : _txn(src._txn)
{
}

DF_CMF_QUOTE& DF_CMF_QUOTE::operator = (const DF_CMF_QUOTE& src)
{
  if (this != &src)
  {
	  _txn = src._txn;
  }
  return *this;
}

DF_CMF_QUOTE::~DF_CMF_QUOTE()
{
}
