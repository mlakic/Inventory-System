
// ------------------------------------------------Action.h---------------------------------
// Selen Taskin CSS343 A
// Assignment4
// 12/15/2015
// Date of Last Modification : 12/14/2015
// Created by Selen Taskin on 11/28/15.
// -------------------------------------------------------------------------------------------
// Purpose: Parent class of query  and transaction classes. the class holds pure virtual method 
// -------------------------------------------------------------------------------------------
// Notes on specifications, special algorithms, and assumptions:
// -------------------------------------------------------------------------------------------

#ifndef action_h
#define action_h

#include <stdio.h>
#include "store.h"


enum ActionType
{
	query,
	transaction
};

class Action
{
public:
	virtual ~Action();
	virtual void Execute(Store *store) = 0;
};

#endif /* action_h */
