/**
Lab Scope for Sorting and Time Complexity Merge Sort
* Purpose: To have a functioning program that incorporates two sorting functions
* 				 to then sort all the numbers in the program itself.

@author Steven Husar
@version 1.0 4/9/2019
*/

#include <iostream>
#include <iomanip>
#include <limits>
#include <array>
#include "mergeSortScores.h"
using namespace std;

/**
Purpose: This will implement the entire program by presenting all operations
*         and needs this program will need.

@author Steven Husar
@version 1.0 4/9/2019
**/

int main()
{
	double numbers [] = {66.70, 53.80, 45.30, 85.67, 23.30, 90.98, 46.50, 9.00, 74.87, 68.90, 84.00, 82.00, 36.00, 19.98, 42, 58.30, 31, 40, 76, 86, 97.3, 20.98, 80, 54.98, 27, 45.98, 93, 82, 69, 89, 28.98 };
	
	// I couldn't figure out how to get the array size to work here.
	int NUMBERS_SIZE = 31;
	
	cout << "Scores BEFORE sorting with merge sort: ";
	print(numbers, NUMBERS_SIZE);
	
	MergeSortNumbers (numbers, 0, NUMBERS_SIZE - 1);
	
	cout << "Scores AFTER sorting with merge sort: ";
	print(numbers, NUMBERS_SIZE);
	
	return 0;
}

