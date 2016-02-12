
// ------------------------------------------------Customer.cpp---------------------------------
// Selen Taskin CSS343 A
// Assignment4
// 12/15/2015
// Date of Last Modification : 12/14/2015
// Created by Selen Taskin on 11/28/15.
// -------------------------------------------------------------------------------------------
// Purpose: customer class holds customer info and holds action history in a list
// for each customer
// -------------------------------------------------------------------------------------------
// Notes on specifications, special algorithms, and assumptions:
// -------------------------------------------------------------------------------------------

#include "customer.h"

// ------------------------------------Customer default constructor---------------------------
// Description: creates an customer object
// -------------------------------------------------------------------------------------------
Customer::Customer()
{
    
}
// ------------------------------------Customer  constructor----------------------------------
// Description: creates customer by reading from stream
// -------------------------------------------------------------------------------------------
Customer::Customer(istream &stream)
{
	stream >> customerID;
	stream >> firstName;
	stream >> lastName;
}
// ------------------------------------Customer destructor------------------------------------
// Description: destructs customer object
// -------------------------------------------------------------------------------------------
Customer::~Customer()
{
	
}
// ------------------------------------getCustomerID------------------------------------------
// Description: returns customer  id
// -------------------------------------------------------------------------------------------
int Customer::getCustomerID() const
{
    return customerID;
}
// ------------------------------------setCustomerID------------------------------------------
// Description: sets customer id
// -------------------------------------------------------------------------------------------
void Customer::setCustomerID(int cid)
{
    customerID = cid;
}
// ------------------------------------getFirstName-------------------------------------------
// Description: returns customer's first name
// -------------------------------------------------------------------------------------------
const string &Customer::getFirstName() const
{
    return firstName;
}
// ------------------------------------setFirstName-------------------------------------------
// Description: sets customer first name
// -------------------------------------------------------------------------------------------
void Customer::setFirstName(const string & fname)
{
    firstName = fname;
}
// ------------------------------------getLastName--------------------------------------------
// Description: returns customer's last name
// -------------------------------------------------------------------------------------------
const string &Customer::getLastName() const
{
    return lastName;
}
// ------------------------------------setLastName--------------------------------------------
// Description: sets customers last name
// -------------------------------------------------------------------------------------------
void Customer::setLastName(const string & lname)
{
    lastName = lname;
}
// ------------------------------------getHistory---------------------------------------------
// Description: returns customers transaction history as a vector
// -------------------------------------------------------------------------------------------
const vector<Transaction *> Customer::getHistory() const
{
	return history;
}
// ------------------------------------addToHistory-------------------------------------------
// Description: adds transaction to history vector
// -------------------------------------------------------------------------------------------
void Customer::addToHistory(Transaction *transaction)
{
	history.push_back(transaction);
}
// ------------------------------------borrowMedia--------------------------------------------
// Description: adds the media to the borrowed vector
// -------------------------------------------------------------------------------------------
void Customer::borrowMedia(Media *media)
{
	borrowed.push_back(media);
}
// ------------------------------------returnMedia--------------------------------------------
// Description: erases media from the borrowed vector 
// -------------------------------------------------------------------------------------------
bool Customer::returnMedia(Media *media)
{
	list<Media *>::iterator i = find(borrowed.begin(), borrowed.end(), media);
	if (i == borrowed.end())
		return false;

	borrowed.erase(i);
	return true;
}