// ------------------------------------------------Comedy.h------------------------------------
// Selen Taskin CSS343 A
// Assignment4
// 12/15/2015
// Date of Last Modification : 12/14/2015
// Created by Selen Taskin on 11/28/15.
// -------------------------------------------------------------------------------------------
// Purpose: inherits from Movie class. Creates comedy movies
// -------------------------------------------------------------------------------------------
// Notes on specifications, special algorithms, and assumptions:
// -------------------------------------------------------------------------------------------

#ifndef comedy_h
#define comedy_h

#include "movie.h"

using namespace std;


class Comedy : public Movie
{
public:
    //constructors 
    Comedy();
    Comedy(const Comedy & com);
    virtual ~Comedy();

    //functions
    bool isEqual(const Comedy &comedy) const;
    bool isGreater(const Comedy &comedy) const;
    
    virtual MovieType getMovieType() const;
	
	void print() const;
};

#endif /* comedy_h */
