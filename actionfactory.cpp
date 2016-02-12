
// ------------------------------------------------ActionFactory.cpp--------------------------
// Selen Taskin CSS343 A
// Assignment4
// 12/15/2015
// Date of Last Modification : 12/14/2015
// Created by Selen Taskin on 11/28/15.
// -------------------------------------------------------------------------------------------
// Purpose: factory class to create actions
// -------------------------------------------------------------------------------------------
// Notes on specifications, special algorithms, and assumptions:
// -------------------------------------------------------------------------------------------

#include "actionfactory.h"

// ------------------------------------Create-------------------------------------------------
// Description: reads from the file creates actions
// -------------------------------------------------------------------------------------------
Action *ActionFactory::Create(istream &stream, Store *store)
{
	char actionType;
	
	stream >> actionType;
	if (stream.fail())
		return NULL;
	
	Action *action;
	switch (actionType)
	{
		case 'I':
			action = CreateInventory(stream, store);
			break;
		case 'H':
			action = CreateHistory(stream, store);
			break;
		case 'B':
			action = CreateBorrow(stream, store);
			break;
		case 'R':
			action = CreateReturn(stream, store);
			break;
		default:
			cerr << "Unknown action type: " << actionType << endl;
			stream.ignore(512, '\n');
			return NULL;
			break;
	}
	
	return action;
}


// ------------------------------------CreateInventory----------------------------------------
// Description: returns inventory
// -------------------------------------------------------------------------------------------
Inventory *ActionFactory::CreateInventory(istream &stream, Store *store)
{
	return new Inventory();
}


// ------------------------------------CreateHistory------------------------------------------
// Description: creates history for a customer
// -------------------------------------------------------------------------------------------
History *ActionFactory::CreateHistory(istream &stream, Store *store)
{
	int customerId;
	stream >> customerId;
	History *history = new History();
	history->setCustomerId(customerId);
	return history;
}

// ------------------------------------CreateBorrow-------------------------------------------
// Description: creates borrow transaction
// -------------------------------------------------------------------------------------------
Borrow *ActionFactory::CreateBorrow(istream &stream, Store *store)
{
	int customerId;
	stream >> customerId;
	
	Media *media = FindMedia(stream, store);
	if (!media)
		return NULL;
	
	Borrow *borrow = new Borrow();
	borrow->setMedia(media);
	borrow->setCustomerId(customerId);
	return borrow;
}

// ------------------------------------CreateReturn-------------------------------------------
// Description: creates return transaction
// -------------------------------------------------------------------------------------------
Return *ActionFactory::CreateReturn(istream &stream, Store *store)
{
	int customerId;
	stream >> customerId;
	
	Media *media = FindMedia(stream, store);
	if (!media)
	return NULL;
	
	Return *returnAction = new Return();
	returnAction->setMedia(media);
	returnAction->setCustomerId(customerId);
	return returnAction;
}

// ------------------------------------FindMedia----------------------------------------------
// Description: finds desired media
// -------------------------------------------------------------------------------------------
Media *ActionFactory::FindMedia(istream &stream, Store *store)
{
	char mediaType;
	stream >> mediaType;
	stream.ignore();
	
	if (mediaType != 'D')
	{
		cerr << "Invalid media type: " << mediaType << endl;
		stream.ignore(512, '\n');
		return NULL;
	}
	
	char movieType;
	stream >> movieType;
	stream.ignore();
	
	switch (movieType)
	{
		case 'C':
			return FindClassics(stream, store);
		case 'F':
			return FindComedy(stream, store);
		case 'D':
			return FindDrama(stream, store);
		default:
			cerr << "Invalid movie type: " << movieType << endl;
			stream.ignore(512, '\n');
			return NULL;
			break;
	}
}

// ------------------------------------FindMedia----------------------------------------------
// Description: finds desired media
// -------------------------------------------------------------------------------------------
Classics *ActionFactory::FindClassics(istream &stream, Store *store)
{
	int month;
	stream >> month;
	
	int year;
	stream >> year;
	
	string majorActorName;
	stream >> majorActorName;
	
	string majorActorLastname;
	stream >> majorActorLastname;
	
	Classics classicsToSearch;
	classicsToSearch.setMonth(month);
	classicsToSearch.setYear(year);
	classicsToSearch.setMajorActor(majorActorName + " " + majorActorLastname);
	
	Classics *found = NULL;
	if (!store->getClassicsTree().retrieve(classicsToSearch, found))
	{
		cerr << "Invalid classics movie " << month << " " << year << " " << majorActorName << " " << majorActorLastname << endl;
		return NULL;
	}
	
	return found;
}
// ------------------------------------FindComedy----------------------------------------------
// Description: finds desired comedy
// -------------------------------------------------------------------------------------------
Comedy *ActionFactory::FindComedy(istream &stream, Store *store)
{
	string movieTitle;
	getline(stream >> ws, movieTitle, ',');
	
	int year;
	stream >> year;
	
	Comedy comedyToSearch;
	comedyToSearch.setYear(year);
	comedyToSearch.setTitle(movieTitle);
	
	Comedy *found = NULL;
	if (!store->getComedyTree().retrieve(comedyToSearch, found))
	{
		cerr << "Invalid comedy movie " << movieTitle << " " << year << endl;
		return NULL;
	}
	
	return found;
}

// ------------------------------------FindDrama----------------------------------------------
// Description: finds desired drama movie 
// -------------------------------------------------------------------------------------------
Drama *ActionFactory::FindDrama(istream &stream, Store *store)
{
	string director;
	getline(stream >> ws, director, ',');
	
	string movieTitle;
	getline(stream >> ws, movieTitle, ',');
	
	Drama dramaToSearch;
	dramaToSearch.setDirector(director);
	dramaToSearch.setTitle(movieTitle);
	
	Drama *found = NULL;
	if (!store->getDramaTree().retrieve(dramaToSearch, found))
	{
		cerr << "Invalid drama movie " << director << " " << movieTitle << endl;
		return NULL;
	}
	
	return found;
}