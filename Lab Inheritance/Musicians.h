/**
Purpose: This header file is meant to declare all functions that make up the base 
         class information and functions
		 
@author Steven Husar
@version 1.0 3/13/2019
*/

#ifndef MUSICIANS_H
#define MUSICIANS_H

#include <iostream>
#include <string>
#include <array>
using namespace std;

class Musicians {
  public:
    void string ();
    void wind ();
    void perc ();

  protected:
    std:: string strings [5];
    std:: string winds [5];
    std:: string percs [5];
};

#endif
