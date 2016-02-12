
// ------------------------------------------------main.cpp--------------------------------
// Selen Taskin CSS343 A
// Assignment4
// 12/15/2015
// Date of Last Modification : 12/14/2015
// Created by Selen Taskin on 11/28/15.
// -------------------------------------------------------------------------------------------
// Purpose: main program logic. Provides an enterence point to the program.
// -------------------------------------------------------------------------------------------
// Notes on specifications, special algorithms, and assumptions:
// -------------------------------------------------------------------------------------------
#include <iostream>
#include "store.h"


int main(int argc, const char * argv[])
{
    Store selenStore;
    selenStore.readMovieFile();
	selenStore.readCustomerFile();
	selenStore.readCommandsFile();
	
    return 0;
}
