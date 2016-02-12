
// ------------------------------------------------store.cpp------------------------------------
// Selen Taskin CSS343 A
// Assignment4
// 12/15/2015
// Date of Last Modification : 12/14/2015
// Created by Selen Taskin on 11/28/15.
// -------------------------------------------------------------------------------------------
// Purpose: implementation file for Store class. Reads customer info, movie info and commands
// info from .txt files. Holds movie information
// in three seperate Binary search tree and customer information in hashtable.
// -------------------------------------------------------------------------------------------
// Notes on specifications, special algorithms, and assumptions: assumes data in .txt file
// formatted correctly but may include errors.
// -------------------------------------------------------------------------------------------

//#include <stdio.h>
#include "store.h"
#include <iostream>
#include <fstream>
#include "moviefactory.h"
#include "actionfactory.h"


using namespace std;


// ------------------------------------Store default constructor------------------------------
// Description: creates an empty store
// -------------------------------------------------------------------------------------------
Store::Store()
{
    
}

// ------------------------------------Store default destructor------------------------------
// Description: destructs store
// ------------------------------------------------------------------------------------------
Store::~Store()
{
    
}

// ------------------------------------readMovieFile-----------------------------------------
// Description: reads from .txt file and insert each movie in
// movies in corresponding binary search tree.
// ------------------------------------------------------------------------------------------
void Store::readMovieFile()
{
	const string movieFileName = "data4movies.txt";
	fstream infile(movieFileName, ios_base::in);
	
	if (infile.fail())
	{
		cerr << "Can't find movie file: " << movieFileName << endl;
		return;
	}
	
    while(!infile.eof())
    {
        Movie *movie = MovieFactory::Create(infile);
        if (movie)
        {
            switch (movie->getMovieType())
            {
                case MovieType::ComedyType:
                    ComedyTree.insert(dynamic_cast<Comedy *>(movie));
                    break;
                case MovieType::DramaType:
                    DramaTree.insert(dynamic_cast<Drama *>(movie));
                    break;
                case MovieType::ClassicalType:
                    ClassicsTree.insert(dynamic_cast<Classics *>(movie));
                    break;
                default:
                    throw new logic_error("Unexpected type");
                    
            }
        }
    }
}

// ------------------------------------readCommandsFile--------------------------------------
// Description: reads from .txt file and creates actions
// ------------------------------------------------------------------------------------------
void Store::readCommandsFile()
{
	const string commandsFileName = "data4commands.txt";
	fstream infile(commandsFileName, ios_base::in);
	
	if (infile.fail())
	{
		cerr << "Can't find commands file: " << commandsFileName << endl;
		return;
	}
	
	while(!infile.eof())
	{
		Action *action = ActionFactory::Create(infile, this);
		if (action)
		{
			action->Execute(this);
		}
	}
}

// ------------------------------------readCustomerFile--------------------------------------
// Description: reads from .txt file and creates customers
// ------------------------------------------------------------------------------------------
void Store::readCustomerFile()
{
	const string customerFileName = "data4customers.txt";
    fstream infile(customerFileName, ios_base::in);
	
	if (infile.fail())
	{
		cerr << "Can't find customer file: " << customerFileName << endl;
		return;
	}
		
    while(!infile.eof())
    {
        Customer *customer = new Customer(infile);
        if (customer)
        {
			Customers.addItem(customer->getCustomerID(), customer);
        }
    }
}

// -------------------------------------getComedyTree()--------------------------------------
// Description: returns the three that holds comedy movies
// ------------------------------------------------------------------------------------------
const BSTree<Comedy> & Store::getComedyTree() const
{
    return ComedyTree;
}

// -------------------------------------getDramaTree()---------------------------------------
// Description: returns the three that holds drama movies
// ------------------------------------------------------------------------------------------
const BSTree<Drama> & Store::getDramaTree() const
{
    return DramaTree;
}

// -------------------------------------getClassicsTree()------------------------------------
// Description: returns the three that holds classics movies
// ------------------------------------------------------------------------------------------
const BSTree<Classics> & Store::getClassicsTree() const
{
    return ClassicsTree;
}
// -------------------------------------getCustomers()--------------------------------------
// Description: returns a hastable that holds customer info
// ------------------------------------------------------------------------------------------
const HashTable<Customer> & Store::getCustomers() const
{
    return Customers;
}

