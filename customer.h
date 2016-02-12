
// ------------------------------------------------Customer.h---------------------------------
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

#ifndef customer_h
#define customer_h

#include "media.h"
#include "BSTree.h"
#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <list>

using namespace std;

class Transaction;

class Customer
{
public:
	// constructors
    Customer();
    Customer(istream &stream);
    virtual ~Customer();
	
	
    // functions
	int getCustomerID() const;
	void setCustomerID(int cid);
	
	const string &getFirstName() const;
	void setFirstName(const string & fname);
    
	const string &getLastName() const;
	void setLastName(const string & lname);
	
	const vector<Transaction *> getHistory() const;
	void addToHistory(Transaction *transaction);
	void borrowMedia(Media *media);
	bool returnMedia(Media *media);
	
private:
    int customerID;
    string firstName;
    string lastName;
	vector<Transaction *> history;
	list<Media *> borrowed;
};

#endif /* customer_h */
