
// ------------------------------------------------Inventory.cpp------------------------------
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

#include "inventory.h"
// ------------------------------------Inventory default constructor--------------------------
// Description: creates an inventory object
// -------------------------------------------------------------------------------------------
Inventory::Inventory()
{
	
}
// ------------------------------------Inventory destructor-----------------------------------
// Description: destructs inventory object
// -------------------------------------------------------------------------------------------
Inventory::~Inventory()
{
	
}
// ------------------------------------Execute------------------------------------------------
// Description: gets movie information from store and prints out the whole inventory system
// in order (first comedy, then drama and finally classics  movies
// -------------------------------------------------------------------------------------------
void Inventory::Execute(Store *store)
{
	store->getComedyTree().print();
	store->getDramaTree().print();
	store->getClassicsTree().print();
}