/**

Purpose: This .cpp file is meant to perform the operations each function
defined in the header file (Invoice.h) for the overall program.

@author Steven Husar
@version 1.0 2/28/2019

*/
#include <string>
#include "Invoice.h"


Invoice :: Invoice () {
	partNumber = "";
  partDescription = "";
  partQuantity = 0;
  partPrice = 0;
}


Invoice :: Invoice (string itemNumber, string itemDescription, int itemQuantity, int itemPrice) {
  if (itemPrice < 0) {
		cout << "price cannot be negative. price set to 0. \n" << endl;
		partPrice = 0;
		partDescription = "fail";
	}
	if (itemQuantity < 0) {
		cout << "quantity cannot be negative. quantity set to 0. \n" << endl;
		partQuantity = 0;
		partDescription = "fail";
	}
	else {
		partNumber = itemNumber;
		partDescription = itemDescription;
		partQuantity = itemQuantity;
		partPrice = itemPrice;
	}
}

void Invoice :: setInfo (string itemNumber2, string itemDescription2, int itemQuantity2, int itemPrice2) {
  if (itemPrice2 < 0) {
		cout << "price cannot be negative. price set to 0. \n" << endl;
		partPrice = 0;
		partDescription = "fail";
	}
	if (itemQuantity2 < 0) {
		cout << "quantity cannot be negative. quantity set to 0. \n" << endl;
		partQuantity = 0;
		partDescription = "fail";
	}
	else {
		partNumber = itemNumber2;
		partDescription = itemDescription2;
		partQuantity = itemQuantity2;
		partPrice = itemPrice2;
  	cout << "Invoice data members modified.\n" << endl;
	}

}

 void Invoice :: setNumber(string itemNumber3) {
	partNumber = itemNumber3;	 
 }
 void Invoice :: setDescription(string itemDescription3) {
  partDescription = itemDescription3;	 
 }
 void Invoice :: setQuantity(int itemQuantity3) {
  partQuantity = itemQuantity3;	 
 }
 void Invoice :: setPrice(int itemPrice3){
	partPrice = itemPrice3;
}
 string Invoice :: getNumber() {
	return partNumber;
}
 string Invoice :: getDescription() {
	return partDescription;
}
int Invoice :: getQuantity() {
	return partQuantity;
}
int Invoice :: getPrice() {
	return partPrice;
}

int Invoice :: getInvoiceAmount () {
	int finalAmount = 0;
	if (getQuantity() > 0 && getPrice() > 0) {
		finalAmount = getQuantity() * getPrice();
	}
	return finalAmount;
}

void Invoice :: printInvoice () {
	if (getDescription() != "fail") {	
		cout << "Part number: " << getNumber() << endl;
		cout << "Part description: " << getDescription() << endl;
		cout << "Quantity: " << getQuantity() << endl;
		cout << "Price per item: $" << getPrice() << endl;	
		cout << "Invoice amount $" << getInvoiceAmount() <<"\n" <<endl;
	}
}
