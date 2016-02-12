// ------------------------------------------------Classics.cpp---------------------------------
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

#include "classics.h"

// ------------------------------------default Classics constructor---------------------------
// Description: creates Classics object
// -------------------------------------------------------------------------------------------
Classics::Classics()
{
	
}
// ------------------------------------Classics destructor------------------------------------
// Description: destructs classics object
// -------------------------------------------------------------------------------------------
Classics::~Classics()
{
    
}

// ------------------------------------getMonth-----------------------------------------------
// Description: returns month
// -------------------------------------------------------------------------------------------
int Classics::getMonth() const
{
    return month;
}
// ------------------------------------setMonth-----------------------------------------------
// Description: sets month info
// -------------------------------------------------------------------------------------------
void Classics::setMonth(int month)
{
	this->month = month;
}
// ------------------------------------getMajorActor------------------------------------------
// Description: returns major actor's name
// -------------------------------------------------------------------------------------------
const string & Classics::getMajorActor() const
{
    return majorActor;
}
// ------------------------------------setMajorActor------------------------------------------
// Description: sets major actor name
// -------------------------------------------------------------------------------------------
void Classics::setMajorActor(const string & mjName)
{
    majorActor = mjName;
}
// ------------------------------------isEqual------------------------------------------------
// Description: checks whether two classic movies is equal to each other. returns boolean
// -------------------------------------------------------------------------------------------
bool Classics::isEqual(const Classics &mov) const
{
	return
		mov.getYear() == year &&
		mov.getMajorActor().compare(majorActor) == 0 &&
		mov.getMonth() == month;
}
// ------------------------------------isGreater----------------------------------------------
// Description: checks whether one classics object is greater than another. returns boolean
// -------------------------------------------------------------------------------------------
bool Classics::isGreater(const Classics &mov) const
{
	if (year != mov.getYear())
		return year > mov.getYear();
	
	if (month != mov.getMonth())
		return month > mov.getMonth();
	
	return majorActor.compare(mov.getMajorActor()) > 0;
}
// ------------------------------------getMovieType-------------------------------------------
// Description: returns movie type
// -------------------------------------------------------------------------------------------
MovieType Classics::getMovieType() const
{
    return ClassicalType;
}
// ------------------------------------print--------------------------------------------------
// Description: prints movie info. used for test puposes.
// -------------------------------------------------------------------------------------------
void Classics::print() const
{
	cout << "C, " << stock << ", " << director << ", " << title << ", " << majorActor << " " << month << " " << year << endl;
}