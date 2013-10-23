/*
 * TradeImpact.h
 *
 *  Created on: Oct 16, 2013
 *      Author: sormanniandrea
 */

#ifndef TRADEIMPACT_H_
#define TRADEIMPACT_H_

/* main struct */
#define		DF_CMF_QUOTE_ID 114702
#define		DF_CMF_QUOTE_Key 1

/* internal struct */
#define		TI_MSG_INFO_ID 100900
#define		CMF_MEMBER_INFO_ID 114901
#define		CMF_INSTRUMENT_INFO_ID 114900
#define		CMF_QUOTING_DATA_ID 114902
#define		CMF_QUOTE_INFO_ID 114911
#define		CMF_QUOTE_ID 114110

#define		TRADERNAME_LEN 12
#define		USERDATA_LEN 8

typedef enum {		/*  (0) */
		TI_INSTRUMENT_TYPE_Bond,
		TI_INSTRUMENT_TYPE_Future,
		TI_INSTRUMENT_TYPE_GC,
		TI_INSTRUMENT_TYPE_Triparty,
		TI_INSTRUMENT_TYPE_Basis,
		TI_INSTRUMENT_TYPE_Spread,
		TI_INSTRUMENT_TYPE_SpreadFreeDouble,
		TI_INSTRUMENT_TYPE_SwitchAuction,
		TI_INSTRUMENT_TYPE_OIS,
		TI_INSTRUMENT_TYPE_IRS,
		EETI_INSTRUMENT_TYPE = -99999
} TI_INSTRUMENT_TYPEEnum;

typedef enum {		/*  (0) */
		CMF_QUOTE_STATUS_Active,
		CMF_QUOTE_STATUS_Suspended,
		CMF_QUOTE_STATUS_SuspByGov,
		CMF_QUOTE_STATUS_DelByGov,
		CMF_QUOTE_STATUS_SuspLinkQuote,
		CMF_QUOTE_STATUS_SuspThirdPartyLimit,
		CMF_QUOTE_STATUS_DelByMember,
		CMF_QUOTE_STATUS_IndirectLock,
		CMF_QUOTE_STATUS_CompFilled,
		CMF_QUOTE_STATUS_SuspOverlap,
		CMF_QUOTE_STATUS_SuspBySystem,
		EECMF_QUOTE_STATUS = -99999
} CMF_QUOTE_STATUSEnum;

typedef enum {		/*  (0) */
		TI_FLAG_No,
		TI_FLAG_Yes,
		EETI_FLAG = -99999
} TI_FLAGEnum;

typedef enum {		/*  (0) */
		CMF_QUOTE_EVENT_Activate,
		CMF_QUOTE_EVENT_Suspend,
		CMF_QUOTE_EVENT_Delete,
		EECMF_QUOTE_EVENT = -99999
} CMF_QUOTE_EVENTEnum;

typedef enum {		/*  (0) */
		CMF_QUOTING_SIDE_Bid,
		CMF_QUOTING_SIDE_Double,
		CMF_QUOTING_SIDE_Ask,
		EECMF_QUOTING_SIDE = -99999
} CMF_QUOTING_SIDEEnum;

typedef struct {		/* TI_MSG_INFO_ID (100900) */
		unsigned long       			MsgId;
		unsigned long       			MarketId;
		unsigned long       			SectionId;
		unsigned long       			MsgDate;
		uint64_t            			MsgTime;
} TI_MSG_INFORec, *TI_MSG_INFOPtr;

typedef struct {		/* CMF_MEMBER_INFO_ID (114901) */
		unsigned long       			MemberId;
		unsigned long       			TraderId;
		char                			TraderName[TRADERNAME_LEN + 1];
		char                			UserData[USERDATA_LEN + 1];
} CMF_MEMBER_INFORec, *CMF_MEMBER_INFOPtr;

typedef struct {		/* CMF_INSTRUMENT_INFO_ID (114900) */
		unsigned long       			InstrumentId;
		TI_INSTRUMENT_TYPEEnum			InstrumentType;
} CMF_INSTRUMENT_INFORec, *CMF_INSTRUMENT_INFOPtr;

typedef struct {		/* CMF_QUOTING_DATA_ID (114902) */
		double              			Quotation;
		double              			StrikerQuotation;
		TI_FLAGEnum         			StrikerQuotationFg;
		double              			TotalQty;
		double              			VisibleEBMQty;
		double              			VisibleDomQty;
		double              			MinStrikerQty;
} CMF_QUOTING_DATARec, *CMF_QUOTING_DATAPtr;


typedef struct {		/* CMF_QUOTE_INFO_ID (114911) */
		TI_MSG_INFORec      			QuoteMsgInfo;
		CMF_MEMBER_INFORec  			Provider;
		CMF_INSTRUMENT_INFORec			Instrument;
		unsigned long       			SponsorId;
		CMF_QUOTE_EVENTEnum 			Event;
		CMF_QUOTE_STATUSEnum			QuoteStatus;
		CMF_QUOTING_SIDEEnum			QuotingSide;
		CMF_QUOTING_DATARec 			Bid;
		CMF_QUOTING_DATARec 			Ask;
		unsigned long       			LinkedQuoteGroupId;
		TI_FLAGEnum         			ParallelQuotingFlag;
		uint64_t            			EditTime;
		unsigned long       			StageOrderId;
} CMF_QUOTE_INFORec, *CMF_QUOTE_INFOPtr;


typedef struct {		/* CMF_QUOTE_ID (114110) */
		CMF_QUOTE_INFORec   			Quote;
} CMF_QUOTERec, *CMF_QUOTEPtr;


/* main struct */
typedef struct {		/* DF_CMF_QUOTE_ID (114702) */
		CMF_QUOTERec        			DFP;
		uint64_t            			PriorityTimestamp;
} DF_CMF_QUOTERec, *DF_CMF_QUOTEPtr;


#endif /* TRADEIMPACT_H_ */
