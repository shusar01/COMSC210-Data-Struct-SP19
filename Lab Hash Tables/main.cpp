/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: User1
 *
 * Created on May 8, 2019, 5:45 PM
 */

#include <cstdlib>
#include <iostream>
#include <string>

#include "hash.h"

using namespace std;

int main(int argc, char** argv) {
    
    hash hashObject;
    hashObject.insert(12);
    //hashObject.insert(45);
    hashObject.search(12);
    //hashObject.search(15);
    //hashObject.search(2);
    return 0;
}

