
// ------------------------------------------------Transaction.cpp----------------------------
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

#include "transaction.h"

// -----------------------------------getCustomerId-------------------------------------------
// Description: returns customer id
// -------------------------------------------------------------------------------------------
int Transaction::getCustomerId() const
{
	return customerID;
}
// -----------------------------------setCustomerId-------------------------------------------
// Description: sets customer ID
// -------------------------------------------------------------------------------------------
void Transaction::setCustomerId(int cid)
{
	customerID = cid;
}
// -----------------------------------getMedia------------------------------------------------
// Description: returns media type
// -------------------------------------------------------------------------------------------
Media *Transaction::getMedia() const
{
	return media;
}
// -----------------------------------setMedia------------------------------------------------
// Description: sets media type
// -------------------------------------------------------------------------------------------
void Transaction::setMedia(Media *media)
{
	this->media = media;
}