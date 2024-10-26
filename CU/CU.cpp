#include "CU.h"
#include "../helperFunctions.h"


void CU::OP1(mainMemory &memory, mainMemory *Register, const std::string &R, const std::string &X, const std::string &Y) {
    std::string address = X + Y;
    Register->memory[std::stoi(R)].hex = memory.memory[hexToInt(address)].hex;
    Register->memory[std::stoi(R)].binary = memory.memory[hexToInt(address)].binary;
}

void CU::OP2(mainMemory &memory, mainMemory *Register, const std::string &R, const std::string &X, const std::string &Y) {
    Register->memory[std::stoi(R)].hex = X + Y;
    Register->memory[std::stoi(R)].binary = hexToBinary(X + Y);
}

void CU::OP3(mainMemory &memory, mainMemory *Register, const std::string &R, const std::string &X, const std::string &Y) {
    memory.memory[hexToInt(X + Y)].hex = Register->memory[std::stoi(R)].hex;
    memory.memory[hexToInt(X + Y)].binary = Register->memory[std::stoi(R)].binary;
}

void CU::OP4(mainMemory &memory, mainMemory *Register, const std::string &R, const std::string &X, const std::string &Y) {
    Register->memory[hexToInt(Y)].hex = Register->memory[hexToInt(X)].hex;
    Register->memory[hexToInt(Y)].binary = Register->memory[hexToInt(X)].binary;
}

void CU::OP5(mainMemory &memory, mainMemory *Register, const std::string &R, const std::string &X, const std::string &Y) {
    std::string res = addTwoComplement(Register->memory[hexToInt(X)].binary, Register->memory[hexToInt(Y)].binary);
    memoryUnit::count = -1;
    Register->memory[hexToInt(R)].binary = res;
    Register->memory[hexToInt(R)].hex = toHex(std::stoi(res, nullptr, 2));
}

void CU::OP6(mainMemory &memory, mainMemory *Register, const std::string &R, const std::string &X, const std::string &Y) {
    int num1 = binaryStringToInt(Register->memory[hexToInt(X)].binary);
    int num2 = binaryStringToInt(Register->memory[hexToInt(Y)].binary);
    int result = num1 | num2;

    Register->memory[hexToInt(R)].binary = intToBinaryString(result);
    Register->memory[hexToInt(R)].hex = toHex(result);
}



void CU::OP7(mainMemory &memory, mainMemory *Register, const std::string &R, const std::string &X, const std::string &Y) {
    std::string result;
    std::string num1 = Register->memory[hexToInt(X)].binary;
    std::string num2 = Register->memory[hexToInt(Y)].binary;

    for (size_t i = 0; i < num1.length(); ++i) {
        result += (num1[i] == num2[i] && num1[i] == '0') ? '0' : '1';
    }

    Register->memory[hexToInt(R)].binary = result;
    Register->memory[hexToInt(R)].hex = toHex(binaryStringToInt(result));
}

void CU::OP8(mainMemory &memory, mainMemory *Register, const std::string &R, const std::string &X, const std::string &Y) {
    int num1 = binaryStringToInt(Register->memory[hexToInt(X)].binary);
    int num2 = binaryStringToInt(Register->memory[hexToInt(Y)].binary);
    int result = num1 & num2;

    Register->memory[hexToInt(R)].binary = intToBinaryString(result);
    Register->memory[hexToInt(R)].hex = toHex(result);
}

void CU::OP9(mainMemory &memory, mainMemory *Register, const std::string &R, const std::string &X, const std::string &Y) {
    int num1 = binaryStringToInt(Register->memory[hexToInt(X)].binary);
    int num2 = binaryStringToInt(Register->memory[hexToInt(Y)].binary);
    int result = num1 ^ num2;

    Register->memory[hexToInt(R)].binary = intToBinaryString(result);
    Register->memory[hexToInt(R)].hex = toHex(result);
}

void CU::OPa(mainMemory &memory, mainMemory *Register, const std::string &R, const std::string &X, const std::string &Y) {
    std::string x = Register->memory[hexToInt(R)].binary;
    std::string rotated;

    for (int i = 0; i < std::stoi(Y); ++i) {
        rotated = x[7];
        rotated += x.substr(0, x.size() - 1);
        x = rotated;
    }

    Register->memory[hexToInt(R)].binary = rotated;
    Register->memory[hexToInt(R)].hex = toHex(binaryStringToInt(rotated));
}

void CU::OPb(mainMemory &memory, mainMemory *Register, const std::string &R, const std::string &X, const std::string &Y,int & indecator) {
    if (memory.memory[0].binary == memory.memory[std::stoi(R)].binary) {
        std::string x = X + Y;
        indecator = hexToInt(x);
    }
}

void CU::OPc(mainMemory &memory, mainMemory *Register, const std::string &R, const std::string &X, const std::string &Y) {
    // No operation (NOP)
}
