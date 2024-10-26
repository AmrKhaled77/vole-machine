

#ifndef VOLEMACHINE_CPU_H
#define VOLEMACHINE_CPU_H

// CPU.h
#include "../mainMemory/mainMemorey.h"
#include "../cu/CU.h"

#ifndef CPU_H
#define CPU_H





using namespace std;

class CPU {

private:
    string fetchedDate;
    string opCode="";
    string R;
    string X;
    string Y;

    void fetch(mainMemory & memory);        // Fetch instruction
    void decode();       // Decode instruction
    void execute(mainMemory &memory);


public:
    int indecator;
    mainMemory*  Register;
    CU*  cu;


    CPU(int i, mainMemory & r,CU &  c);




    void runOneCycle(mainMemory &memory);
    void runAll(mainMemory &memory);




};

#endif // CPU_H


#endif //VOLEMACHINE_CPU_H
