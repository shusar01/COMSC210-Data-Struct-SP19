/**
This file will have all functions and variables made in 
its respective header file to define its operations here

@author Steven Husar
@version 1.0 3/13/2019

*/

#include <iostream>
#include <string>
#include <array>
#include "Musicians.h"
#include "Typeins.h"
using namespace std;

// This function will check with the user which instruments list
// they would like to see
int Typeins :: get() {
		 // Prompting users to pick what instruments to display
			while (selection == 0) {
				cout << "\nProvide the number to show the type of instruments to be displayed\n" << "1. String instruments\n" 
							<< "2. Wind instruments\n" << "3. Precussion instruments" <<endl;
				cin >> selection;
				
				// checking if the selection is valid
				if (selection <= 0 || selection >= 4) {
					cout << "please select an applicable value '1', '2', or '3'" <<endl;
					selection = 0;
				}
			}
			return selection;
		}
	
	// This function will display all values in the specific array
	// picked in get() and show them here	
  void Typeins :: show() {
		if ( get() == 1) {
			cout << "String instruments include: ";  
			string();
		}
		else if ( get() == 2) {
			cout << "Wind instruments include: ";
			wind();
		}
		else if ( get() == 3) {
			cout << "Percussion instruments include: ";
			perc();
		}
	}
