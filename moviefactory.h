// ------------------------------------------------MovieFactory.h-----------------------------
// Selen Taskin CSS343 A
// Assignment4
// 12/15/2015
// Date of Last Modification : 12/14/2015
// Created by Selen Taskin on 11/28/15.
// -------------------------------------------------------------------------------------------
// Purpose: read from the .txt file and creates movies. Use static methods 
// -------------------------------------------------------------------------------------------
// Notes on specifications, special algorithms, and assumptions:
// -------------------------------------------------------------------------------------------

#ifndef moviefactory_h
#define moviefactory_h

#include <stdio.h>
#include "movie.h"
#include "comedy.h"
#include "drama.h"
#include "classics.h"


class MovieFactory
{
    
public:
    static Movie *Create(istream &stream);
    
private:
    static Comedy *CreateComedy(istream &stream);
    static Drama *CreateDrama(istream &stream);
    static Classics *CreateClassics(istream &stream);
    
};

#endif /* moviefactory_h */
