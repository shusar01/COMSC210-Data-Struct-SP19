/**
Lab Scope for Functions, Classes, and Objects (including Exceptions)
* Purpose: To have a functioning program that incorporates both pointer 
*          and Array logic.
* 				 Logistically, an array will be formed, data will be collected
*          then a new data array (double the original size) will be made, 
*          the data will be moved there, and then the original data array 
*          will be deleted from memory.

@author Steven Husar
@version 1.0 2/28/2019

*/


#include <iostream>
#include <string>
#include "Invoice.h"
using namespace std;

/**
Purpose: This will implement the entire program by presenting all operations
*         and needs this program will need.

@author Steven Husar
@version 1.0 2/13/2019

@return - 0 (This is meant to return to the operating system the program was a success)
  
**/


/* include all headers files */
int main()
{
	Invoice Part("12345", "Hammer", 100, 5);
	Part.printInvoice();	
	Part.setInfo("123", "Nails", -2, 2);
	Part.printInvoice();
	Part.setInfo("123456", "Saw", 0, 10);
	Part.printInvoice();
}

