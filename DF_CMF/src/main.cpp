//============================================================================
// Name        : DF_CMF.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "DF_CMF_QUOTE.h"
using namespace std;

int main() {
	DF_CMF_QUOTE* d = new DF_CMF_QUOTE();
	d->setDFPInQuoteInQuoteMsgInfoInMsgId(10000001);
	d->setDFPInQuoteInQuoteMsgInfoInMarketId(4);
	d->setDFPInQuoteInQuoteMsgInfoInSectionId(10);

	cout << "MsgId: " << d->getDFPInQuoteInQuoteMsgInfoInMsgId() << endl;

	return 0;
}
