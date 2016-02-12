
// ------------------------------------------------Inventory.h---------------------------------
// Selen Taskin CSS343 A
// Assignment4
// 12/15/2015
// Date of Last Modification : 12/14/2015
// Created by Selen Taskin on 11/28/15.
// -------------------------------------------------------------------------------------------
// Purpose: inheriths from Query class. Prints out the inventory of a store
// -------------------------------------------------------------------------------------------
// Notes on specifications, special algorithms, and assumptions:
// -------------------------------------------------------------------------------------------

#ifndef inventory_h
#define inventory_h

#include <stdio.h>
#include "query.h"

class Inventory : public Query
{
public:
	Inventory();
	virtual ~Inventory();
	void Execute(Store *store);
};
#endif /* inventory_h */
