// ------------------------------------------------Media.h-----------------------------------
// Selen Taskin CSS343 A
// Assignment4
// 12/15/2015
// Date of Last Modification : 12/14/2015
// Created by Selen Taskin on 11/28/15.
// -------------------------------------------------------------------------------------------
// Purpose: parent class of movies class. Holds pure virtual method
// -------------------------------------------------------------------------------------------
// Notes on specifications, special algorithms, and assumptions:
// -------------------------------------------------------------------------------------------
//

#ifndef media_h
#define media_h

#include <stdio.h>


enum MediaType
{
    DVDType 
};


class Media 
{
public :
	virtual ~Media();
	
    virtual int getStock() const ;
    virtual void setStock(int stock);
    virtual void increaseStock(int add);
    virtual void decreaseStock();
    
    virtual MediaType getMediaType() const = 0;
	virtual void print() const = 0;
	
protected:
    int stock;
};

#endif /* media_h */
