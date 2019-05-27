/**
Purpose: This header file is meant to declare all functions that make up the derived 
         class information and functions from the base class.
@author Steven Husar
@version 1.0 3/13/2019
*/

#ifndef TYPEINS_H
#define TYPEINS_H

#include <iostream>
#include <string>
#include <array>
#include "Musicians.h"
using namespace std;

class Typeins : public Musicians {
  public:
    int get();
    void show();

  private:
    int selection = 0;

};

#endif
