// ------------------------------------------------Drama.cpp------------------------------------
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

#include "drama.h"


// ------------------------------------default Drama constructor------------------------------
// Description: creates Drama object
// -------------------------------------------------------------------------------------------
Drama::Drama()
{
    
}
// ------------------------------------drama Destructor---------------------------------------
// Description: destructs drama objects
// -------------------------------------------------------------------------------------------
Drama::~Drama()
{
    
}
// ------------------------------------isEqual------------------------------------------------
// Description: checks whether two drama movies is equal to each other. returns boolean
// -------------------------------------------------------------------------------------------

bool Drama::isEqual(const Drama &mov) const
{
	return
		mov.getDirector().compare(director) == 0 &&
		mov.getTitle().compare(title) == 0;
}
// ------------------------------------isGreater----------------------------------------------
// Description: checks whether one drama object is greater than another. returns boolean
// -------------------------------------------------------------------------------------------
bool Drama::isGreater(const Drama &mov) const
{
	if (director.compare(mov.getDirector()) != 0)
		return director.compare(mov.getDirector()) > 0;
	
	if (title.compare(mov.getTitle()) != 0)
		return title.compare(mov.getTitle()) > 0;
	
	return year > mov.getYear();
}
// ------------------------------------getMovieType-------------------------------------------
// Description: returns movie type
// -------------------------------------------------------------------------------------------
MovieType Drama::getMovieType() const // ok
{
    return MovieType::DramaType;
}
// ------------------------------------print--------------------------------------------------
// Description: prints movie info. used for test puposes.
// -------------------------------------------------------------------------------------------
void Drama::print() const
{
	cout << "D, " << stock << ", " << director << ", " << title << ", " << year << endl;
}



