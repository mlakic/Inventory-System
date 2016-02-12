// ------------------------------------------------Return.cpp----------------------------------
// Selen Taskin CSS343 A
// Assignment4
// 12/15/2015
// Date of Last Modification : 12/14/2015
// Created by Selen Taskin on 11/28/15.
// -------------------------------------------------------------------------------------------
// Purpose: inheriths from Transaction class. Return object updates the inventory and
// adds itself to customer's transaction history
// -------------------------------------------------------------------------------------------
// Notes on specifications, special algorithms, and assumptions:
// -------------------------------------------------------------------------------------------
//

#include "return.h"
// ------------------------------------Return default constructor----------------------------
// Description: creates an return object
// -------------------------------------------------------------------------------------------
Return::Return()
{
	
}
// ------------------------------------Return destructor--------------------------------------
// Description: destructs return object
// -------------------------------------------------------------------------------------------
Return::~Return()
{
	
}
// ------------------------------------Execute------------------------------------------------
// Description: Updates the stock by returning a desired movie. Gives error if an unborrowed
// movie is been tried to returned. Also gives error if customer Id is invalid
// -------------------------------------------------------------------------------------------
void Return::Execute(Store *store)
{
	Customer *customer = store->getCustomers().getItem(customerID);
	if (!customer)
	{
		cerr << "Invalid customer ID: " << customerID << endl;
		return;
	}
	
	if (!customer->returnMedia(media))
	{
		cerr << "Can't return unborrowed media." << endl;
		return;
	}
	
	customer->addToHistory(this);
	media->increaseStock(1);
}
// ------------------------------------Print--------------------------------------------------
// Description: prints out returned movie info. just added for test puposes
// -------------------------------------------------------------------------------------------
void Return::print() const
{
	cout << "R " << customerID << " ";
	media->print();
}