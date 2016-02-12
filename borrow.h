
// ------------------------------------------------Borrow.h-----------------------------------
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

#ifndef borrow_h
#define borrow_h


#include <stdio.h>
#include "transaction.h"

class Borrow : public Transaction
{
public:
    Borrow();
    virtual ~Borrow();
	
	void Execute(Store *store);
	void print() const;
};

#endif /* borrow_h */
