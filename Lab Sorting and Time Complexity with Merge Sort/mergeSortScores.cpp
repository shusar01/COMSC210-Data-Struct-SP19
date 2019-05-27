/**
This file will have all functions and variables made in 
its respective header file to define its operations here

@author Steven Husar
@version 1.0 4/9/2019
*/

#include <iostream>
#include <iomanip>
#include <limits>
#include <array>
#include "mergeSortScores.h"
using namespace std;


// This function does the initial sorting based on what is loaded.

void MergeSort (double numbers [],int i, int j, int k) {
	int mergedSize = j - i + 1;
	int mergedSize2 = k - j;
	double left[mergedSize], right[mergedSize2];
	
	for (int l = 0; l < mergedSize; l++) {
		left[l] = numbers[i + l];
	}
	for (int m = 0; m < mergedSize2; m++) {
		right[m] = numbers[j + 1 + m];
	}
	int l = 0;
	int m = 0;
	int n = i;
	
	while (l < mergedSize && m < mergedSize2) {
		if (left[l] <= right[m]){
			numbers[n] = left [l];
			l++;
		}
		else {
			numbers[n] = right[m];
			m++;
		}
		n++;
	}
	while (l < mergedSize) {
		numbers[n] = left[l];
		l++;
		n++;
	}
	while (m < mergedSize2) {
		numbers[n] = right[m];
		m++;
		n++;
	}
	
}


// Completes the sorting first started by the previous function
void MergeSortNumbers (double numbers [], int i, int k) {
	int j = 0;
	if (i < k) {
		j = (i + k) / 2;
		MergeSortNumbers (numbers, i, j);
		MergeSortNumbers (numbers, j+1, k);
		
		MergeSort (numbers, i, j, k);
	}
}

//printing function
void print (double numbers [], int size) {
	cout << fixed << setprecision(2);
		for (int i = 0; i < size; ++i) {
		cout << numbers[i] << " ";
	}
	cout << "\n" << endl;
}
