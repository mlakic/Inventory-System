// ------------------------------------------------Borrow.cpp---------------------------------
// Selen Taskin CSS343 A
// Assignment4
// 12/15/2015
// Date of Last Modification : 12/14/2015
// Created by Selen Taskin on 11/28/15.
// -------------------------------------------------------------------------------------------
// Purpose: inheriths from Transaction class. Barrow object updates the inventory and
// adds itself to customer's transaction history
// -------------------------------------------------------------------------------------------
// Notes on specifications, special algorithms, and assumptions:
// -------------------------------------------------------------------------------------------

#include "borrow.h"
#include <iostream>

using namespace std;

// ------------------------------------Borrow default constructor-----------------------------
// Description: creates an borrow  object
// -------------------------------------------------------------------------------------------
Borrow::Borrow()
{
	
}
// ------------------------------------Borrow destructor--------------------------------------
// Description: destructs borrow object
// -------------------------------------------------------------------------------------------
Borrow::~Borrow()
{
	
}
// ------------------------------------Execute------------------------------------------------
// Description: Updates the stock by borrowing a desired movie. Gives error if the stock of the
// movie smaller than or equal to zero. Also gives error if customer Id is invalid
// -------------------------------------------------------------------------------------------
void Borrow::Execute(Store *store)
{
	Customer *customer = store->getCustomers().getItem(customerID);
	if (!customer)
	{
		cerr << "Invalid customer ID: " << customerID << endl;
		return;
	}
	
	if (media->getStock() <= 0)
	{
		cerr << "Can't borrow media. Out of stock." << endl;
		return;
	}
	
	customer->addToHistory(this);
	customer->borrowMedia(media);
	media->decreaseStock();
}
// ------------------------------------Print--------------------------------------------------
// Description: prints out borrowed movie info. just added for test puposes 
// -------------------------------------------------------------------------------------------
void Borrow::print() const
{
	cout << "B " << customerID << " ";
	media->print();
}