//
// Created by a on 10/22/2024.
//

#ifndef VOLEMACHINE_MEMORYUNIT_H
#define VOLEMACHINE_MEMORYUNIT_H

// memoryUnit.h
#ifndef MEMORYUNIT_H
#define MEMORYUNIT_H

#include "iostream"
#include <bitset>
#include <iomanip>
using namespace std;

// Function declarations
string hexToBinary(const string& hex);
string toHex(int number, int width = 2);

class memoryUnit {
public:
    string address;
    string hex;
    string binary;
    static int number;

    memoryUnit(const string data);
};

#endif // MEMORYUNIT_H


#endif //VOLEMACHINE_MEMORYUNIT_H
