// memoryUnit.cpp





#include "memoryUnit.h"

int  memoryUnit::count=-1;



// Constructor for memoryUnit class
memoryUnit::memoryUnit(const string data) {

    count++;
    hex = data;
    binary = hexToBinary(hex);
    address = toHex(count, 2);
}
