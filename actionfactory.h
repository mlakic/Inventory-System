// ------------------------------------------------ActionFactory.h----------------------------
// Selen Taskin CSS343 A
// Assignment4
// 12/15/2015
// Date of Last Modification : 12/14/2015
// Created by Selen Taskin on 11/28/15.
// -------------------------------------------------------------------------------------------
// Purpose: factory class to create actions
// -------------------------------------------------------------------------------------------
// Notes on specifications, special algorithms, and assumptions:
// -------------------------------------------------------------------------------------------

#ifndef actionfactory_hpp
#define actionfactory_hpp

#include <stdio.h>
#include <iostream>
#include "action.h"
#include "inventory.h"
#include "history.h"
#include "borrow.h"
#include "return.h"

using namespace std;


class ActionFactory
{
	
public:
	static Action *Create(istream &stream, Store *store);
	
private:
	static Inventory *CreateInventory(istream &stream, Store *store);
	static History *CreateHistory(istream &stream, Store *store);
	static Borrow *CreateBorrow(istream &stream, Store *store);
	static Return *CreateReturn(istream &stream, Store *store);
	static Media *FindMedia(istream &stream, Store *store);
	static Classics *FindClassics(istream &stream, Store *store);
	static Comedy *FindComedy(istream &stream, Store *store);
	static Drama *FindDrama(istream &stream, Store *store);
};

#endif /* actionfactory_hpp */
