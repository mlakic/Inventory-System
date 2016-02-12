// ------------------------------------------------History.cpp--------------------------------
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
//

#include "history.h"
#include "transaction.h"
#include <iostream>

using namespace std;

// ------------------------------------History default constructor----------------------------
// Description: creates an history  object
// -------------------------------------------------------------------------------------------
History::History()
{
	
}
// ------------------------------------History destructor-------------------------------------
// Description: destructs history object
// -------------------------------------------------------------------------------------------
History::~History()
{
	
}
// ------------------------------------getCustomerID------------------------------------------
// Description: returns customer ID
// -------------------------------------------------------------------------------------------
int History::getCustomerId() const
{
	return customerId;
}
// ------------------------------------setCustomerID------------------------------------------
// Description: sets customer id for the user
// -------------------------------------------------------------------------------------------
void History::setCustomerId(int cid)
{
	customerId = cid;
}
// ------------------------------------Execute------------------------------------------------
// Description: finds customer with customer ID and prints out the transaction history
// gives error when there is no such customer with given ID
// -------------------------------------------------------------------------------------------
void History::Execute(Store *store)
{
	Customer *customer = store->getCustomers().getItem(customerId);
	if (!customer)
	{
		cerr << "Invalid customer ID: " << customerId << endl;
		return;
	}
	
	const vector<Transaction *> &history = customer->getHistory();
	for (int i = 0; i < history.size(); i++)
	{
		history[i]->print();
	}
}