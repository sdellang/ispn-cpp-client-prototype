#ifndef _DF_CMF_QUOTE_
#define _DF_CMF_QUOTE_

#include <stdint.h>
#include "TradeImpact.h"
#include <string>
#include <algorithm>
#include <iostream>
#include <sstream>

class DF_CMF_QUOTE
{

private:
	DF_CMF_QUOTERec _txn;

public:
  DF_CMF_QUOTE();
  DF_CMF_QUOTE(const DF_CMF_QUOTE& src);
  ~DF_CMF_QUOTE();

  DF_CMF_QUOTE& operator = (const DF_CMF_QUOTE& src);
  DF_CMF_QUOTE* Create();

  unsigned long getDFPInQuoteInQuoteMsgInfoInMsgId() const
 {return _txn.DFP.Quote.QuoteMsgInfo.MsgId;}

  void setDFPInQuoteInQuoteMsgInfoInMsgId(const unsigned long& pDFPInQuoteInQuoteMsgInfoInMsgId);

  unsigned long getDFPInQuoteInQuoteMsgInfoInMarketId() const
 {return _txn.DFP.Quote.QuoteMsgInfo.MarketId;}

  void setDFPInQuoteInQuoteMsgInfoInMarketId(const unsigned long& pDFPInQuoteInQuoteMsgInfoInMarketId);

  unsigned long getDFPInQuoteInQuoteMsgInfoInSectionId() const
 {return _txn.DFP.Quote.QuoteMsgInfo.SectionId;}

  void setDFPInQuoteInQuoteMsgInfoInSectionId(const unsigned long& pDFPInQuoteInQuoteMsgInfoInSectionId);

  unsigned long getDFPInQuoteInQuoteMsgInfoInMsgDate() const
 {return _txn.DFP.Quote.QuoteMsgInfo.MsgDate;}

  void setDFPInQuoteInQuoteMsgInfoInMsgDate(const unsigned long& pDFPInQuoteInQuoteMsgInfoInMsgDate);

  uint64_t getDFPInQuoteInQuoteMsgInfoInMsgTime() const
 {return _txn.DFP.Quote.QuoteMsgInfo.MsgTime;}

  void setDFPInQuoteInQuoteMsgInfoInMsgTime(const uint64_t& pDFPInQuoteInQuoteMsgInfoInMsgTime);

  unsigned long getDFPInQuoteInProviderInMemberId() const
 {return _txn.DFP.Quote.Provider.MemberId;}

  void setDFPInQuoteInProviderInMemberId(const unsigned long& pDFPInQuoteInProviderInMemberId);

  unsigned long getDFPInQuoteInProviderInTraderId() const
 {return _txn.DFP.Quote.Provider.TraderId;}

  void setDFPInQuoteInProviderInTraderId(const unsigned long& pDFPInQuoteInProviderInTraderId);

  std::string getDFPInQuoteInProviderInTraderName() const
 {return std::string(_txn.DFP.Quote.Provider.TraderName, sizeof (_txn.DFP.Quote.Provider.TraderName));}

  void setDFPInQuoteInProviderInTraderName(const std::string& pDFPInQuoteInProviderInTraderName);

  std::string getDFPInQuoteInProviderInUserData() const
 {return std::string(_txn.DFP.Quote.Provider.UserData, sizeof (_txn.DFP.Quote.Provider.UserData));}

  void setDFPInQuoteInProviderInUserData(const std::string& pDFPInQuoteInProviderInUserData);

  unsigned long getDFPInQuoteInInstrumentInInstrumentId() const
 {return _txn.DFP.Quote.Instrument.InstrumentId;}

  void setDFPInQuoteInInstrumentInInstrumentId(const unsigned long& pDFPInQuoteInInstrumentInInstrumentId);

  TI_INSTRUMENT_TYPEEnum getDFPInQuoteInInstrumentInInstrumentType() const
 {return _txn.DFP.Quote.Instrument.InstrumentType;}

  void setDFPInQuoteInInstrumentInInstrumentType(const TI_INSTRUMENT_TYPEEnum& pDFPInQuoteInInstrumentInInstrumentType);

  unsigned long getDFPInQuoteInSponsorId() const
 {return _txn.DFP.Quote.SponsorId;}

  void setDFPInQuoteInSponsorId(const unsigned long& pDFPInQuoteInSponsorId);

  CMF_QUOTE_EVENTEnum getDFPInQuoteInEvent() const
 {return _txn.DFP.Quote.Event;}

  void setDFPInQuoteInEvent(const CMF_QUOTE_EVENTEnum& pDFPInQuoteInEvent);

  CMF_QUOTE_STATUSEnum getDFPInQuoteInQuoteStatus() const
 {return _txn.DFP.Quote.QuoteStatus;}

  void setDFPInQuoteInQuoteStatus(const CMF_QUOTE_STATUSEnum& pDFPInQuoteInQuoteStatus);

  CMF_QUOTING_SIDEEnum getDFPInQuoteInQuotingSide() const
 {return _txn.DFP.Quote.QuotingSide;}

  void setDFPInQuoteInQuotingSide(const CMF_QUOTING_SIDEEnum& pDFPInQuoteInQuotingSide);

  double getDFPInQuoteInBidInQuotation() const
 {return _txn.DFP.Quote.Bid.Quotation;}

  void setDFPInQuoteInBidInQuotation(const double& pDFPInQuoteInBidInQuotation);

  double getDFPInQuoteInBidInStrikerQuotation() const
 {return _txn.DFP.Quote.Bid.StrikerQuotation;}

  void setDFPInQuoteInBidInStrikerQuotation(const double& pDFPInQuoteInBidInStrikerQuotation);

  TI_FLAGEnum getDFPInQuoteInBidInStrikerQuotationFg() const
 {return _txn.DFP.Quote.Bid.StrikerQuotationFg;}

  void setDFPInQuoteInBidInStrikerQuotationFg(const TI_FLAGEnum& pDFPInQuoteInBidInStrikerQuotationFg);

  double getDFPInQuoteInBidInTotalQty() const
 {return _txn.DFP.Quote.Bid.TotalQty;}

  void setDFPInQuoteInBidInTotalQty(const double& pDFPInQuoteInBidInTotalQty);

  double getDFPInQuoteInBidInVisibleEBMQty() const
 {return _txn.DFP.Quote.Bid.VisibleEBMQty;}

  void setDFPInQuoteInBidInVisibleEBMQty(const double& pDFPInQuoteInBidInVisibleEBMQty);

  double getDFPInQuoteInBidInVisibleDomQty() const
 {return _txn.DFP.Quote.Bid.VisibleDomQty;}

  void setDFPInQuoteInBidInVisibleDomQty(const double& pDFPInQuoteInBidInVisibleDomQty);

  double getDFPInQuoteInBidInMinStrikerQty() const
 {return _txn.DFP.Quote.Bid.MinStrikerQty;}

  void setDFPInQuoteInBidInMinStrikerQty(const double& pDFPInQuoteInBidInMinStrikerQty);

  double getDFPInQuoteInAskInQuotation() const
 {return _txn.DFP.Quote.Ask.Quotation;}

  void setDFPInQuoteInAskInQuotation(const double& pDFPInQuoteInAskInQuotation);

  double getDFPInQuoteInAskInStrikerQuotation() const
 {return _txn.DFP.Quote.Ask.StrikerQuotation;}

  void setDFPInQuoteInAskInStrikerQuotation(const double& pDFPInQuoteInAskInStrikerQuotation);

  TI_FLAGEnum getDFPInQuoteInAskInStrikerQuotationFg() const
 {return _txn.DFP.Quote.Ask.StrikerQuotationFg;}

  void setDFPInQuoteInAskInStrikerQuotationFg(const TI_FLAGEnum& pDFPInQuoteInAskInStrikerQuotationFg);

  double getDFPInQuoteInAskInTotalQty() const
 {return _txn.DFP.Quote.Ask.TotalQty;}

  void setDFPInQuoteInAskInTotalQty(const double& pDFPInQuoteInAskInTotalQty);

  double getDFPInQuoteInAskInVisibleEBMQty() const
 {return _txn.DFP.Quote.Ask.VisibleEBMQty;}

  void setDFPInQuoteInAskInVisibleEBMQty(const double& pDFPInQuoteInAskInVisibleEBMQty);

  double getDFPInQuoteInAskInVisibleDomQty() const
 {return _txn.DFP.Quote.Ask.VisibleDomQty;}

  void setDFPInQuoteInAskInVisibleDomQty(const double& pDFPInQuoteInAskInVisibleDomQty);

  double getDFPInQuoteInAskInMinStrikerQty() const
 {return _txn.DFP.Quote.Ask.MinStrikerQty;}

  void setDFPInQuoteInAskInMinStrikerQty(const double& pDFPInQuoteInAskInMinStrikerQty);

  unsigned long getDFPInQuoteInLinkedQuoteGroupId() const
 {return _txn.DFP.Quote.LinkedQuoteGroupId;}

  void setDFPInQuoteInLinkedQuoteGroupId(const unsigned long& pDFPInQuoteInLinkedQuoteGroupId);

  TI_FLAGEnum getDFPInQuoteInParallelQuotingFlag() const
 {return _txn.DFP.Quote.ParallelQuotingFlag;}

  void setDFPInQuoteInParallelQuotingFlag(const TI_FLAGEnum& pDFPInQuoteInParallelQuotingFlag);

  uint64_t getDFPInQuoteInEditTime() const
 {return _txn.DFP.Quote.EditTime;}

  void setDFPInQuoteInEditTime(const uint64_t& pDFPInQuoteInEditTime);

  unsigned long getDFPInQuoteInStageOrderId() const
 {return _txn.DFP.Quote.StageOrderId;}

  void setDFPInQuoteInStageOrderId(const unsigned long& pDFPInQuoteInStageOrderId);

  uint64_t getPriorityTimestamp() const
 {return _txn.PriorityTimestamp;}

  void setPriorityTimestamp(const uint64_t& pPriorityTimestamp);

  static size_t sizeOf() {return 272;}

  std::string toString() const {
     std::ostringstream ostr;
     ostr << " 1:" << getDFPInQuoteInQuoteMsgInfoInMsgId();
     ostr << " 2:" << getDFPInQuoteInQuoteMsgInfoInMarketId();
     ostr << " 3:" << getDFPInQuoteInQuoteMsgInfoInSectionId();
     ostr << " 4:" << getDFPInQuoteInQuoteMsgInfoInMsgDate();
     ostr << " 5:" << getDFPInQuoteInQuoteMsgInfoInMsgTime();
     ostr << " 6:" << getDFPInQuoteInProviderInMemberId();
     ostr << " 7:" << getDFPInQuoteInProviderInTraderId();
     ostr << " 8:" << getDFPInQuoteInProviderInTraderName();
     ostr << " 9:" << getDFPInQuoteInProviderInUserData();
     ostr << "10:" << getDFPInQuoteInInstrumentInInstrumentId();
     ostr << "11:" << getDFPInQuoteInInstrumentInInstrumentType();
     ostr << "12:" << getDFPInQuoteInSponsorId();
     ostr << "13:" << getDFPInQuoteInEvent();
     ostr << "14:" << getDFPInQuoteInQuoteStatus();
     ostr << "15:" << getDFPInQuoteInQuotingSide();
     ostr << "16:" << getDFPInQuoteInBidInQuotation();
     ostr << "17:" << getDFPInQuoteInBidInStrikerQuotation();
     ostr << "18:" << getDFPInQuoteInBidInStrikerQuotationFg();
     ostr << "19:" << getDFPInQuoteInBidInTotalQty();
     ostr << "20:" << getDFPInQuoteInBidInVisibleEBMQty();
     ostr << "21:" << getDFPInQuoteInBidInVisibleDomQty();
     ostr << "22:" << getDFPInQuoteInBidInMinStrikerQty();
     ostr << "23:" << getDFPInQuoteInAskInQuotation();
     ostr << "24:" << getDFPInQuoteInAskInStrikerQuotation();
     ostr << "25:" << getDFPInQuoteInAskInStrikerQuotationFg();
     ostr << "26:" << getDFPInQuoteInAskInTotalQty();
     ostr << "27:" << getDFPInQuoteInAskInVisibleEBMQty();
     ostr << "28:" << getDFPInQuoteInAskInVisibleDomQty();
     ostr << "29:" << getDFPInQuoteInAskInMinStrikerQty();
     ostr << "30:" << getDFPInQuoteInLinkedQuoteGroupId();
     ostr << "31:" << getDFPInQuoteInParallelQuotingFlag();
     ostr << "32:" << getDFPInQuoteInEditTime();
     ostr << "33:" << getDFPInQuoteInStageOrderId();
     ostr << "34:" << getPriorityTimestamp();

    return ostr.str();
  }
};

#endif
