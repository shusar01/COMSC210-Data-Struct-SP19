/**
Purpose: This header file is meant to declare all functions that make up this lab's content.
		 
@author Steven Husar
@version 1.0 2/28/2019
*/

#ifndef INVOICE_H
#define INVOICE_H
#include <iostream>
#include <string>
/**
Purpose: This class is meant to structure a class of items, constructors, and functions meant to preform the work involved in this assignment.
		 
@author Steven Husar
@version 1.0 2/28/2019
*/
#include <string>
using namespace std;
class Invoice {
  public:
    Invoice ();
    Invoice (string itemNumber, string itemDescription, int itemQuantity, int itemPrice);
    void setInfo (string itemNumber2, string itemDescription2, int itemQuantity2, int itemPrice2);
    void setNumber(string itemNumber3);
    void setDescription(string itemDescription3);
    void setQuantity(int itemQuantity3);
    void setPrice(int itemPrice3);
    string getNumber();
    string getDescription ();
    int getQuantity();
    int getPrice();
    int getInvoiceAmount ();
    void printInvoice ();
  

  private:
    string partNumber;
    string partDescription;
    int partQuantity;
    int partPrice;
};



#endif
