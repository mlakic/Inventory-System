
// ------------------------------------------------store.h------------------------------------
// Selen Taskin CSS343 A
// Assignment4
// 12/15/2015
// Date of Last Modification : 12/14/2015
// Created by Selen Taskin on 11/28/15.
// -------------------------------------------------------------------------------------------
// Purpose: header file for Store class. Reads customer info, movie info and commands
// info from .txt files. Holds movie information
// in three seperate Binary search tree and customer information in hashtable.
// -------------------------------------------------------------------------------------------
// Notes on specifications, special algorithms, and assumptions: assumes data in .txt file
// formatted correctly but may include errors.
// -------------------------------------------------------------------------------------------
#ifndef store_h
#define store_h

#include "customer.h"
#include "comedy.h"
#include "drama.h"
#include "classics.h"
#include "BSTree.h"
#include "hashtable.h"
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Store
{
public:
    
    // constructors
    Store();
    ~Store();
	
    // functions
    void readMovieFile();
    void readCustomerFile();
	void readCommandsFile();
    
    const BSTree<Comedy> &getComedyTree() const;
    const BSTree<Drama> &getDramaTree() const;
    const BSTree<Classics> &getClassicsTree() const;
    const HashTable<Customer> &getCustomers() const;
    
private:
    BSTree<Comedy> ComedyTree;
    BSTree<Drama> DramaTree;
    BSTree<Classics> ClassicsTree;
    HashTable<Customer> Customers;
    
};


#endif /* store_h */
