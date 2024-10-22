// memoryUnit.cpp
#include "memoryUnit.h"

// Static variable initialization
int memoryUnit::number = -1;

// Function to convert hex to binary
string hexToBinary(const string& hex) {
    string binary;
    for (char hexChar : hex) {
        // Convert each hex character to an integer
        int value = (hexChar >= '0' && hexChar <= '9') ? hexChar - '0' : (hexChar - 'A' + 10);

        // Convert the integer to a binary string (4 bits)
        binary += std::bitset<4>(value).to_string();
    }
    return binary;
}

// Function to convert an integer to hex (with width)
string toHex(int number, int width) {
    std::stringstream ss;
    ss << std::hex << std::uppercase << std::setfill('0') << std::setw(width) << number;
    return ss.str();
}

// Constructor for memoryUnit class
memoryUnit::memoryUnit(const string data) {
    number++;
    hex = data;
    binary = hexToBinary(hex);
    address = toHex(number, 2);
}
