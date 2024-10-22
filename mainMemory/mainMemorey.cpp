// mainMemory.cpp
#include "mainMemorey.h"

// Default constructor
mainMemory::mainMemory() {
    maxSize = 0;  // Initialize maxSize to zero
}



// Constructor implementation
mainMemory::mainMemory(int m) {
    maxSize = m;
    for (int i = 0; i < m; ++i) {
        memory.emplace_back("00");
    }
}

// showData method implementation
void mainMemory::showData() {
    cout << "address   " << setw(6) << "binary" << "        hex" << endl;
    for (const auto& unit : memory) {
        cout << unit.address << setw(6) << "      "
             << setw(10) << unit.binary << "      "
             << unit.hex << endl;
    }
}


// Placeholder function for setData
void mainMemory::setData() {
    // Implementation can go here
}

// Placeholder function for addData
void mainMemory::addData() {

}

// Placeholder function for clearData
void mainMemory::clearData() {
    // Implementation can go here
}
