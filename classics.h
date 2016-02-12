// ------------------------------------------------Classics.h---------------------------------
// Selen Taskin CSS343 A
// Assignment4
// 12/15/2015
// Date of Last Modification : 12/14/2015
// Created by Selen Taskin on 11/28/15.
// -------------------------------------------------------------------------------------------
// Purpose: inherits from Movie class. Creates classics  movies
// -------------------------------------------------------------------------------------------
// Notes on specifications, special algorithms, and assumptions:
// -------------------------------------------------------------------------------------------

#ifndef classics_h
#define classics_h

#include <stdio.h>
#include "movie.h"
#include <iostream> 
#include <string>


using namespace std;

class Classics : public Movie
{
public:
    //constructors
    Classics();
    Classics(const Classics &cla);
    virtual ~Classics();
    
    // functions
    int getMonth() const;
    void setMonth(int month);
    
    virtual const string & getMajorActor() const;
    virtual void setMajorActor(const string & name);
 
    virtual bool isEqual(const Classics &mov) const;
    virtual bool isGreater(const Classics &mov) const;
    virtual MovieType getMovieType() const;
    
	void print() const;
private:
    
    int month;
    string majorActor;
    
   
    
};

#endif /* classics_h */
