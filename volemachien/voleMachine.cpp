// voleMachine.cpp




// Constructor definition



#include "voleMachine.h"
#include "../CPU/CPU.h"

voleMachine::voleMachine(CPU& c, mainMemory& m) : cpu(&c), memory(&m) {
    // Optionally add any initialization logic here
    std::cout << "Vole Machine initialized." << std::endl;
}
