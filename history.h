// ------------------------------------------------History.h----------------------------------
// Selen Taskin CSS343 A
// Assignment4
// 12/15/2015
// Date of Last Modification : 12/14/2015
// Created by Selen Taskin on 11/28/15.
// -------------------------------------------------------------------------------------------
// Purpose: inheriths from Query class. Holds action history for each customer
// -------------------------------------------------------------------------------------------
// Notes on specifications, special algorithms, and assumptions:
// -------------------------------------------------------------------------------------------

#ifndef history_h
#define history_h

#include <stdio.h>
#include "query.h"


class History : public Query
{
public:
    History();
    virtual ~History();
	
	int getCustomerId() const;
	void setCustomerId(int cid);
	
	void Execute(Store *store);
	
private:
	int customerId;
};

#endif /* history_h */
