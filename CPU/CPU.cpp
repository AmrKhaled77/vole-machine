// CPU.cpp
#include "CPU.h"
#include "F:\voleMachine\mainMemory\mainMemorey.h"
// Constructor definition
CPU::CPU(int i, mainMemory r) {
    indecator = i;    // Initialize the indicator pointer
    Register = r;     // Initialize the Register with mainMemory
}

// Function to fetch instruction (empty for now)
void CPU::fetch() {
    // Implementation can go here
}

// Function to decode instruction (empty for now)
void CPU::decode() {
    // Implementation can go here
}

// Function to execute instruction (empty for now)
void CPU::execute() {
    // Implementation can go here
}
