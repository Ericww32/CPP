//
//  Invoice.cpp
//  Invoice
//
//  Created by Eric Willoughby on 7/1/16.
//  Copyright © 2016 Eric Willoughby. All rights reserved.
//

//Invoice.cpp file
//10.07.2012

#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

#include "Invoice.h"

// initialization with constructor
Invoice::Invoice(  string initPartNumber, string initPartDescription, int initQuantity, int initPrice)
{
    setPartNumber( initPartNumber );
    // cout << "Part Number set completed" << endl; // uncomment it if you want to see sequence
    
    setPartDescription( initPartDescription );
    // cout << "Description set completed" << endl; // uncomment it if you want to see sequence
    
    // if number is positive
    if (initQuantity >= 0)
    {
        setQuantity( initQuantity );
        //cout << "Number set completed" << endl; // uncomment it if you want to see sequence
    }
    // if number is not positive it set as 0
    if (initQuantity < 0)
    {
        quantity = 0;
        cout << "Number can not be negative and set as 0" << endl;
    }
    // if number is positive
    if (initPrice >= 0)
    {
        setPrice( initPrice );
        // cout << "Price set completed" << endl; // uncomment it if you want to see sequence
    }
    // if number is not positive it set as 0
    if (initPrice < 0)
    {
        price = 0;
        cout << "Price can not be negative and set as 0" << endl;
    }
}

//set function for Part Number
void Invoice::setPartNumber( string initPartNumber )
{
    partNumber = initPartNumber;
}

//get function for Part Number
string Invoice::getPartNumber()
{
    return partNumber;
}

//function for set desc
void Invoice::setPartDescription ( string initPartDescription )
{
    partDescription = initPartDescription;
}

//function for get desc
string Invoice::getPartDescription()
{
    return partDescription;
}

//function for set number
void Invoice::setQuantity( int initQuantity)
{
    quantity = initQuantity;
}

//function for get number
int Invoice::getQuantity()
{
    return quantity;
}

//function for set price
void Invoice::setPrice( int initPrice)
{
    price = initPrice;
}

//function for get price
int Invoice::getPrice()
{
    return price;
}

//function for get invoice amount
int Invoice::getInvoiceAmount( int iQuantity, int iPrice)
{
    if((iQuantity<0)||(iPrice<0))
    {
        cout << "Incorrect args!" << endl;
    }
    else
    {
        invoiceAmount = iQuantity * iPrice;
    }
    return invoiceAmount;
}
