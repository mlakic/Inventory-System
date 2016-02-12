// ------------------------------------------------Drama.h------------------------------------
// Selen Taskin CSS343 A
// Assignment4
// 12/15/2015
// Date of Last Modification : 12/14/2015
// Created by Selen Taskin on 11/28/15.
// -------------------------------------------------------------------------------------------
// Purpose: inherits from Movie class. Creates drama movies
// -------------------------------------------------------------------------------------------
// Notes on specifications, special algorithms, and assumptions:
// -------------------------------------------------------------------------------------------

#ifndef drama_h
#define drama_h

#include <stdio.h>
#include "movie.h"

using namespace std;

class Drama : public Movie
{
public:
    //constructors 
    Drama();
    Drama (const Drama & dra);  // copy constructor
    
    virtual ~Drama();
    
    //functions
    bool isEqual(const Drama &mov) const;
    bool isGreater(const Drama &mov) const;
	
	virtual MovieType getMovieType() const;
    
	void print() const;
};
#endif /* drama_h */
