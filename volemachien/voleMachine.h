//
// Created by a on 10/22/2024.
//

#ifndef VOLEMACHINE_VOLEMACHINE_H
#define VOLEMACHINE_VOLEMACHINE_H

// voleMachine.h
#ifndef VOLEMACHINE_H
#define VOLEMACHINE_H

#include "iostream"
#include "../mainMemory/mainMemorey.h"
#include "../CPU/CPU.h"


class voleMachine {
public:
    CPU cpu;            // Instance of CPU
    mainMemory memory;  // Instance of mainMemory

    // Constructor for voleMachine
    voleMachine(CPU& c, mainMemory& m);
};

#endif // VOLEMACHINE_H


#endif //VOLEMACHINE_VOLEMACHINE_H
