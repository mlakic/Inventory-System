// ------------------------------------------------Movie.h------------------------------------
// Selen Taskin CSS343 A
// Assignment4
// 12/15/2015
// Date of Last Modification : 12/14/2015
// Created by Selen Taskin on 11/28/15.
// -------------------------------------------------------------------------------------------
// Purpose: inherits from Media class. Parent class of the comedy, drama, classics classes
// holds pure virtual method
// -------------------------------------------------------------------------------------------
// Notes on specifications, special algorithms, and assumptions:
// -------------------------------------------------------------------------------------------

#ifndef movie_h
#define movie_h

#include <stdio.h>
#include "media.h"
#include <iostream>
#include <fstream>
#include <string> 



using namespace std;

enum MovieType
{
    ComedyType,
    DramaType,
    ClassicalType
};

class Movie : public Media
{
    
public:
    //destructor
    virtual ~Movie();
    
    //functions
    virtual const string & getDirector() const ;
    virtual void setDirector (const string & directorName);
    
    virtual const string & getTitle() const;
    virtual void setTitle(const string & title);
    
    virtual int getYear() const ;
    virtual void setYear(int year);
    
    virtual MovieType getMovieType() const = 0;
    virtual MediaType getMediaType() const; // only one type so far
	
protected:
    string director;
    string title;
    int year;
};



#endif /* movie_h */
