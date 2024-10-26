#include "helperFunctions.h"


// Function to convert hex to binary
std::string hexToBinary(const std::string& hex) {
    std::string binary;
    for (char hexChar : hex) {
        // Convert each hex character to an integer
        int value = (hexChar >= '0' && hexChar <= '9') ? hexChar - '0' : (hexChar - 'A' + 10);

        // Convert the integer to a binary string (4 bits)
        binary += std::bitset<4>(value).to_string();
    }
    return binary;
}

// Function to convert a binary string to an integer
int binaryStringToInt(const std::string& binaryString) {
    return std::stoi(binaryString, nullptr, 2);  // Convert binary string to an int (base 2)
}

// Function to convert an integer to a binary string
std::string intToBinaryString(int num) {
    return std::bitset<8>(num).to_string();  // Convert integer to binary using 32-bit width
}

// Function to convert an integer to hex (with width)
std::string toHex(int number, int width) {
    std::stringstream ss;
    ss << std::hex << std::uppercase << std::setfill('0') << std::setw(width) << number;
    return ss.str();
}

// Function to convert a hexadecimal string to an integer
int hexToInt(const std::string& hexStr) {
    int decimalValue = 0;
    try {
        decimalValue = std::stoi(hexStr, nullptr, 16);
    } catch (const std::invalid_argument& e) {
        std::cerr << "Invalid hexadecimal input: " << e.what() << std::endl;
    } catch (const std::out_of_range& e) {
        std::cerr << "Hexadecimal number out of range: " << e.what() << std::endl;
    }
    return decimalValue;
}

string addTwoComplement(const string &bin1, const string &bin2) {
    // Convert the binary strings to integers
    int num1 = stoi(bin1, nullptr, 2);
    int num2 = stoi(bin2, nullptr, 2);


    int sum = num1 + num2;


    std::bitset<8> result(sum);


    return result.to_string();
}



