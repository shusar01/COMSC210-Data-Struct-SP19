/* 
 * File:   hash.h
 * Author: User1
 *
 * Created on May 8, 2019, 7:24 PM
 */

#ifndef HASH_H
#define HASH_H

#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

class hash {
public: 
    hash();
    //additionalNode(int, int);
    int hashFunction(int);
    void insert (int);
    void search (int);
    
private:
    int hashTableSize = 100;
    
    typedef struct item {
        int key;
        int value;
        item* prev;
        item* next;
    }* itemPtr;
    itemPtr head;
    itemPtr curr;
    itemPtr tail;
    itemPtr hashTable[100];
};
#endif /* HASH_H */

