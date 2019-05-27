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
using namespace std;


// This function will both initialize the string array and display the values
// shortly after declaration.

 void Musicians ::  string () {
		// Loop to initialize and display all strings
		// Using a static value for the string array length
		// as the loop needs a declared size variable.
		//cout << "arrived" << endl;
		for (int i = 0; i < 5; i++) {
			//cout << i << "arrived" << endl;
			// Legally setting the protected array values
			if (i == 0) { 
				strings[0] = "venna";
			}
			else if (i == 1) { 
				strings[1] = "guitar";
			}
			else if (i == 2) { 
				strings[2] = "sitar";
			}
			else if (i == 3) { 
				strings[3] = "sarod";
			}
			else if (i == 4) { 
				strings[4] = "mandolin";
			}
			
			// Now displaying the newly declared array values
			if (i >= 0 && i < 4) {
				cout << strings[i] << ", ";
			}
			else {
				cout << strings[i] << "\n";				
			}
		}
	}
  
// This function will both initialize the wind array and display the values
// shortly after declaration.

 void Musicians ::  wind () {
		// Loop to initialize and display all strings
		// Using a static value for the string array length
		// as the loop needs a declared size variable.
		for (int i = 0; i < 5; i++) {
			
			// Legally setting the protected array values
			if (i == 0) { 
				winds[0] = "flute";
			}
			else if (i == 1) { 
				winds[1] = "clarinet";
			}
			else if (i == 2) { 
				winds[2] = "saxophone";
			}
			else if (i == 3) { 
				winds[3] = "nadhaswaram";
			}
			else if (i == 4) { 
				winds[4] = "piccolo";
			}
			
			// Now displaying the newly declared array values
			if (i >= 0 && i < 4) {
				cout << winds[i] << ", ";
			}
			else {
				cout << winds[i] << "\n";				
			}
		}
	}

// This function will both initialize the perc array and display the values
// shortly after declaration.
 void Musicians ::  perc () { 
		// Loop to initialize and display all strings
		// Using a static value for the string array length
		// as the loop needs a declared size variable.
		for (int i = 0; i < 5; i++) {
			
			// Legally setting the protected array values
			if (i == 0) { 
				percs[0] = "tabla";
			}
			else if (i == 1) { 
				percs[1] = "mridangam";
			}
			else if (i == 2) { 
				percs[2] = "bangos";
			}
			else if (i == 3) { 
				percs[3] = "drums";
			}
			else if (i == 4) { 
				percs[4] = "tambour";
			}
			
			// Now displaying the newly declared array values
			if (i >= 0 && i < 4) {
				cout << percs[i] << ", ";
			}
			else {
				cout << percs[i] << "\n";				
			}
		}
	}
