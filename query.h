
// ------------------------------------------------Query.h---------------------------------
// Selen Taskin CSS343 A
// Assignment4
// 12/15/2015
// Date of Last Modification : 12/14/2015
// Created by Selen Taskin on 11/28/15.
// -------------------------------------------------------------------------------------------
// Purpose: inheriths from action class. Parent class of Inventory and History classes.
// creates quesry actions
// -------------------------------------------------------------------------------------------
// Notes on specifications, special algorithms, and assumptions:
// -------------------------------------------------------------------------------------------

#ifndef query_h
#define query_h
#include "action.h"

#include <stdio.h>

class Query : public Action
{
public:
    
private:
    enum queryType{inventory, history};
    
    
};

#endif /* query_h */
