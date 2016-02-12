// ------------------------------------------------Comedy.cpp------------------------------------
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

#include "comedy.h"
#include <iostream>

using namespace std;

// ------------------------------------default Comedy constructor-----------------------------
// Description: creates Comedy object
// -------------------------------------------------------------------------------------------
Comedy::Comedy()
{
    
}
// ------------------------------------Comedy destructor---------------------------------------
// Description: destructs Comedy object
// -------------------------------------------------------------------------------------------
Comedy::~Comedy()
{
    
}
// ------------------------------------isEqual------------------------------------------------
// Description: checks whether two comedy movies is equal to each other. returns boolean
// -------------------------------------------------------------------------------------------
bool Comedy::isEqual(const Comedy &node) const
{
	return
		node.getTitle().compare(title) == 0 &&
		node.getYear() == year;
}
// ------------------------------------isGreater----------------------------------------------
// Description: checks whether one comedy object is greater than another. returns boolean
// -------------------------------------------------------------------------------------------
bool Comedy::isGreater(const Comedy &node) const
{
	if (title.compare(node.getTitle()) != 0)
		return title.compare(node.getTitle()) > 0;

	return year > node.getYear();
}
// ------------------------------------getMovieType-------------------------------------------
// Description: returns movie type
// -------------------------------------------------------------------------------------------
MovieType Comedy::getMovieType() const
{
    return MovieType::ComedyType;
}
// ------------------------------------print--------------------------------------------------
// Description: prints movie info. used for test puposes.
// -------------------------------------------------------------------------------------------
void Comedy::print() const
{
	cout << "F, " << stock << ", " << director << ", " << title << ", " << year << endl;
}









