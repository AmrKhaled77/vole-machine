

#ifndef VOLEMACHINE_CPU_H
#define VOLEMACHINE_CPU_H

// CPU.h
#ifndef CPU_H
#define CPU_H

#include "iostream"
#include "vector"
#include "../mainMemory/mainMemorey.h"


using namespace std;

class CPU {
public:
    int indecator;      // A Pointer to indicator
    mainMemory Register;  // Instance of mainMemory

    CPU(int i, mainMemory r); // Constructor declaration

    void fetch();        // Fetch instruction
    void decode();       // Decode instruction
    void execute();      // Execute instruction
};

#endif // CPU_H


#endif //VOLEMACHINE_CPU_H
