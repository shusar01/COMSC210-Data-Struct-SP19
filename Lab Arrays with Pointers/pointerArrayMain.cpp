/**
Lab Scope Lab Pointers with Arrays (Vectors)
* Purpose: To have a functioning program that incorporates both pointer 
*          and Array logic.
* 				 Logistically, an array will be formed, data will be collected
*          then a new data array (double the original size) will be made, 
*          the data will be moved there, and then the original data array 
*          will be deleted from memory.

@author Steven Husar
@version 1.0 2/13/2019

*/

using namespace std;
#include <iostream>
#include "pointerArray.h"

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
	int *dynamic_array, *second_dynamic_array;
	int data_size, data_size_2;
	
	cout << "Please provide the integer size of your array: ";
	cin >> data_size;
	dynamic_array = create_array(data_size);
	initial_data_array (dynamic_array, data_size);
	cout << "Original Array: "<< endl;
	display_data_array (dynamic_array, data_size); 
	cout << "Doubled Up Array: " << endl;
	data_size_2 = (data_size * 2);
	second_dynamic_array = create_array(data_size_2);
	second_data_array (dynamic_array, second_dynamic_array, data_size, data_size_2);
	delete [] dynamic_array;
	display_data_array (second_dynamic_array, data_size_2);
}

