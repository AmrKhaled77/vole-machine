//
// Created by a on 10/24/2024.
//

#ifndef UNTITLED6_HELPERFUNCTIONS_H
#define UNTITLED6_HELPERFUNCTIONS_H
#ifndef CONVERTER_H
#define CONVERTER_H

#include <string>
#include <bitset>
#include <iomanip>
#include <iostream>
#include <sstream>
using namespace std;
// Function to convert hex to binary
std::string hexToBinary(const std::string& hex);

// Function to convert a binary string to an integer
int binaryStringToInt(const std::string& binaryString);

// Function to convert an integer to a binary string
std::string intToBinaryString(int num);

// Function to convert an integer to hex (with width)
std::string toHex(int number, int width);

// Function to convert a hexadecimal string to an integer
int hexToInt(const std::string& hexStr);

string addTwoComplement(const string &bin1, const string &bin2);

#endif  // CONVERTER_H

#endif //UNTITLED6_HELPERFUNCTIONS_H
