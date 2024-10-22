

#ifndef VOLEMACHINE_MAINMEMOREY_H
#define VOLEMACHINE_MAINMEMOREY_H
// mainMemory.h
#ifndef MAINMEMORY_H
#define MAINMEMORY_H

#include "iostream"
#include "vector"
#include "memoryUnit.h"
#include <iomanip>

// include the memoryUnit header file

using namespace std;

class mainMemory {
public:
    vector<memoryUnit> memory;
    int maxSize;

    mainMemory();           // Default constructor
    mainMemory(int m);      // Parameterized constructor

    void showData();        // Function to show data
    void setData();         // Function to set data
    void addData();         // Function to add data
    void clearData();       // Function to clear data
};

#endif // MAINMEMORY_H

#endif //VOLEMACHINE_MAINMEMOREY_H
