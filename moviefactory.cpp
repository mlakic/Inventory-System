// ------------------------------------------------MovieFactory.cpp---------------------------
// Selen Taskin CSS343 A
// Assignment4
// 12/15/2015
// Date of Last Modification : 12/14/2015
// Created by Selen Taskin on 11/28/15.
// -------------------------------------------------------------------------------------------
// Purpose: read from the .txt file and creates movies. Use static methods. 
// -------------------------------------------------------------------------------------------
// Notes on specifications, special algorithms, and assumptions:
// -------------------------------------------------------------------------------------------

#include "moviefactory.h"
#include "BSTree.h"
#include <iostream>
#include <string>
using namespace std;

// ------------------------------------create-------------------------------------------------
// Description: reads from the file. creates movies . Depending on the movie type calls
// corresponding helper methods
// -------------------------------------------------------------------------------------------
Movie *MovieFactory::Create(istream &stream)
{
    char movieType;
    int movieStock;
    string movieDirector;
    string movieTitle;
    Movie *movie;

    stream >> movieType;
	if (stream.fail())
		return NULL;
	
    stream.ignore();
    stream >> movieStock;
    stream.ignore();
    getline(stream >> ws, movieDirector, ',');
    stream.ignore();
    getline(stream >> ws, movieTitle, ',');

    
    switch (movieType)
    {
        case 'F':
            movie = CreateComedy(stream);
            break;
        case 'C':
            movie = CreateClassics(stream);
            break;
        case 'D':
            movie = CreateDrama(stream);
            break;
        default:
            cerr << "Invalid movie type: " << movieType << endl;
            stream.ignore(512, '\n');
            return NULL;
            break;
    }
    
    movie->setDirector(movieDirector);
    movie->setTitle(movieTitle);
    movie->setStock(movieStock);

    return movie;
}

// ------------------------------------Create Comedy-------------------------------------------
// Description: helper method to create comedy movie
// -------------------------------------------------------------------------------------------
Comedy *MovieFactory::CreateComedy(istream &stream)
{
    int movieYear;
    stream >> movieYear;
    
    Comedy *comedy = new Comedy();
    comedy->setYear(movieYear);
    
    return comedy;
}
// ------------------------------------Create Drama-------------------------------------------
// Description: helper method to create drama movie
// -------------------------------------------------------------------------------------------
Drama *MovieFactory::CreateDrama(istream &stream)
{
    int movieYear;
    stream >> movieYear;
    Drama *drama = new Drama();
    drama-> setYear(movieYear);
    
    return drama;
    
}
// ------------------------------------CreateClassics -------------------------------------------
// Description: helper method to create classics  movie
// -------------------------------------------------------------------------------------------
Classics *MovieFactory::CreateClassics(istream &stream)
{
    int movieMonth;
    int movieYear;
    string movieMajorActorName;
    string movieMajorActorLastname;
 
	stream >> movieMajorActorName;
    stream >> movieMajorActorLastname;
    stream >> movieMonth;
    stream >> movieYear;
	
    Classics *classics = new Classics();
    
    classics->setMajorActor(movieMajorActorName + " " + movieMajorActorLastname);
    classics->setMonth(movieMonth);
    classics->setYear(movieYear);
	
    return classics;
}