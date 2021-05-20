/*
  main.cpp
  Invoice

  Created by Eric Willoughby on 7/1/16.
  Copyright © 2016 Eric Willoughby. All rights reserved.
*/

#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

#include "Invoice.h"

int main()
{
    // initialization with constructor
    Invoice invoice1 ("Part_123", "one paper", -7, 2000);
    Invoice invoice2 ("Part_234", "long", 20, 50000);
    
    // output constructor results
    cout << "\nNew invoice details: \nPart Number: " << invoice1.getPartNumber()
    << "\nDescription: " << invoice1.getPartDescription()
    << "\nQuantity: " << invoice1.getQuantity()
    << "\nPrice: " << invoice1.getPrice() << endl;
    
    cout << "\nNew invoice details: \nPart Number: " << invoice2.getPartNumber()
    << "\nDescription: " << invoice2.getPartDescription()
    << "\nQuantity: " << invoice2.getQuantity()
    << "\nPrice: " << invoice2.getPrice() << endl;
    
    // get price and quantity by get functions
    int x1 = invoice1.getQuantity();
    int y1 = invoice1.getPrice();
    int x2 = invoice2.getQuantity();
    int y2 = invoice2.getPrice();
    
    // calculate invoice by getInvoiceAmount function
    cout << "\n1 amount is " << invoice1.getInvoiceAmount ( x1, y1 ) << endl;
    cout << "2 amount is " << invoice2.getInvoiceAmount ( x2, y2 ) << endl;
    
    cout << endl;
    
    // test program that using data entered by user
    cout << "*** Test Program ***";
    
    // variables
    string p_Number;
    string p_Desc;
    int ppi;
    int p_Quantity;
    
    // get data from user
    cout << "\nPlease enter Part Number: ";
    cin >> p_Number;
    cout << "Please enter Part Description: ";
    cin >> p_Desc;
    cout << "Please enter Price Per Item: ";
    cin >> ppi;
    cout << "Please enter Quantity: ";
    cin >> p_Quantity;
    
    //using set functions
    invoice1.setPartNumber(p_Number);
    invoice1.setPartDescription(p_Desc);
    invoice1.setPrice(ppi);
    invoice1.setQuantity(p_Quantity);
    
    // using get functions, invoice amount function and output result
    cout << "\nPart number is " << invoice1.getPartNumber();
    cout << "\nPart description is " << invoice1.getPartDescription();
    cout << "\nPrice is " << invoice1.getPrice();
    cout << "\nQuantity is " << invoice1.getQuantity();
    cout << "\nInvoice amount is " << invoice1.getInvoiceAmount(invoice1.getPrice(), invoice1.getQuantity());
    
}