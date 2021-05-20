//
//  Invoice.h
//  Invoice
//
//  Created by Eric Willoughby on 7/1/16.
//  Copyright © 2016 Eric Willoughby. All rights reserved.
//
//  invoice.h file

#ifndef Invoice_h
#define Invoice_h

#endif /* Invoice_h */

#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

class Invoice
{
public:
    Invoice(string initPartNumber, string initPartDescription, int initQuantity, int initPrice);
    void setPartNumber( string);
    string getPartNumber();
    void setPartDescription (string);
    string getPartDescription();
    void setQuantity( int );
    int getQuantity();
    void setPrice( int );
    int getPrice();
    int getInvoiceAmount(int, int);
    
private:
    string partNumber;
    string partDescription;
    int quantity;
    int price;
    int invoiceAmount;
};

