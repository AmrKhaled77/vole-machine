// main.cpp






#include "mainMemory/memoryUnit.h"
#include "mainMemory/mainMemorey.h"
#include "CPU/CPU.h"
#include "volemachien/voleMachine.h"

using namespace std;

// Static variable initialization for memoryUnit


int main() {
    // Create a mainMemory object with a size of 16
   mainMemory memory(256);
mainMemory regstir(16);


     int indicator = 0;
//     CPU cpu(indicator, regstir);
//     voleMachine vl(cpu, memory);

    // Display the initial state of mainMemory
    memory.showData();
    regstir.showData();

    return 0;
}
