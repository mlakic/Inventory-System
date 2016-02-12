
// ------------------------------------------------Return.h-----------------------------------
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

#ifndef return_h
#define return_h

#include <stdio.h>
#include "Transaction.h"


class Return : public Transaction
{
    
public:
	Return();
	virtual ~Return();
	
	void Execute(Store *store);
	void print() const;
};

#endif /* return_h */
