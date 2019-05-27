/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <cstdlib>
#include <iostream>
#include <string>
#include "hash.h"

using namespace std;

hash::hash () {
    for (int i = 0; i < hashTableSize; i++) {
        hashTable[i] = NULL;
    }
}
/*
int hash::additionalNode (int key, int value) {
    itemPtr object = new item;
    object->key = insert(key);
    object->value = value;
    object->next = NULL;
    object->prev = NULL;
}
 * */

int hash::hashFunction (int key) {
    return key % hashTableSize;
}

void hash::insert (int itemValue) {
    int index = hashFunction(itemValue);
    if (hashTable[index] == NULL) {
        hashTable[index] = new item;
        hashTable[index]->key = index;
        hashTable[index]->value = itemValue;
        hashTable[index]->next = NULL;
        head = hashTable[index];
    }
    else {
        curr = head;
        while (curr->next != NULL){
            curr = curr->next;
        }
        hashTable[index] = curr->next;
        hashTable[index]->key = index;
        hashTable[index]->value = itemValue;
        hashTable[index]->next = NULL;
        tail = curr->next;
        
    }
}

void hash::search (int searchValue) {
    int index = hashFunction(searchValue);
    for (int i = 0; i < 100; i++){
        if (hashTable[index]->value == searchValue) {
            cout << searchValue << " is found!" << endl;
            return;
        }
        cout << searchValue << " is not found." <<endl;
    }
}