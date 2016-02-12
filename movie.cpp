// ------------------------------------------------Movie.cpp------------------------------------
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

#include "movie.h"

// ------------------------------------Movie destructor---------------------------------------
// Description: destructs Movie object
// -------------------------------------------------------------------------------------------
Movie::~Movie()
{
    
}
// ------------------------------------getDirector--------------------------------------------
// Description: returns director's name
// -------------------------------------------------------------------------------------------
const string & Movie::getDirector() const
{
    return director;
}
// ------------------------------------setDirector--------------------------------------------
// Description: setsdirector's name
// -------------------------------------------------------------------------------------------
void Movie::setDirector(const string & directorName)
{
    director = directorName;
}
// ------------------------------------getTitle-----------------------------------------------
// Description: returns movie title
// -------------------------------------------------------------------------------------------
const string & Movie::getTitle() const
{
    return title;
}
// ------------------------------------setTitle-----------------------------------------------
// Description: sets movie title
// -------------------------------------------------------------------------------------------
void Movie::setTitle(const string & titleN)
{
    title = titleN;
}
// ------------------------------------getYear------------------------------------------------
// Description: returns movie year
// -------------------------------------------------------------------------------------------
int Movie::getYear() const
{
    return year;
}
// ------------------------------------setYear------------------------------------------------
// Description: sets movie year
// -------------------------------------------------------------------------------------------
void Movie::setYear(int yearN)
{
     year = yearN;
}
// ------------------------------------getMediaType-------------------------------------------
// Description: returns media type 
// -------------------------------------------------------------------------------------------
MediaType Movie::getMediaType() const

{
    return MediaType::DVDType;
    
}



