/**
Purpose: This header file is meant to declare all functions that make up the base 
         class information and functions
		 
@author Steven Husar
@version 1.0 4/9/2019
*/

#ifndef MERGESORTSCORES_H
#define MERGESORTSCORES_H

#include <iostream>
#include <iomanip>
#include <limits>
#include <array>
using namespace std;

// This function does the initial sorting based on what is loaded.
void MergeSort (double numbers [],int i, int j, int k);

// Completes the sorting first started by the previous function.
void MergeSortNumbers (double numbers [], int i, int k);

// Printing function
void print (double numbers [], int size);

#endif
