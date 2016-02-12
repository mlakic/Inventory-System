// ------------------------------------------------Transaction.h------------------------------
// Selen Taskin CSS343 A
// Assignment4
// 12/15/2015
// Date of Last Modification : 12/14/2015
// Created by Selen Taskin on 11/28/15.
// -------------------------------------------------------------------------------------------
// Purpose: inheriths from Action class. Parent class of Borrow and Return.
// Holds a pure virtual method. 
// -------------------------------------------------------------------------------------------
// Notes on specifications, special algorithms, and assumptions:
// -------------------------------------------------------------------------------------------

#ifndef transaction_h
#define transaction_h

#include <stdio.h>
#include "action.h"

class Transaction : public Action
{
public:
	virtual void print() const = 0;
	
	int getCustomerId() const;
	void setCustomerId(int cid);
	
	Media *getMedia() const;
	void setMedia(Media *media);
	
protected:
    int customerID;
	Media *media;
};

#endif /* transaction_h */
