#ifndef CU_H
#define CU_H

#include <string>


#include "../mainMemory/mainMemorey.h"

class CU {
public:
    void OP1(mainMemory &memory, mainMemory *Register, const std::string &R, const std::string &X, const std::string &Y);
    void OP2(mainMemory &memory, mainMemory *Register, const std::string &R, const std::string &X, const std::string &Y);
    void OP3(mainMemory &memory, mainMemory *Register, const std::string &R, const std::string &X, const std::string &Y);
    void OP4(mainMemory &memory, mainMemory *Register, const std::string &R, const std::string &X, const std::string &Y);
    void OP5(mainMemory &memory, mainMemory *Register, const std::string &R, const std::string &X, const std::string &Y);
    void OP6(mainMemory &memory, mainMemory *Register, const std::string &R, const std::string &X, const std::string &Y);
    void OP7(mainMemory &memory, mainMemory *Register, const std::string &R, const std::string &X, const std::string &Y);
    void OP8(mainMemory &memory, mainMemory *Register, const std::string &R, const std::string &X, const std::string &Y);
    void OP9(mainMemory &memory, mainMemory *Register, const std::string &R, const std::string &X, const std::string &Y);
    void OPa(mainMemory &memory, mainMemory *Register, const std::string &R, const std::string &X, const std::string &Y);
    void OPb(mainMemory &memory, mainMemory *Register, const std::string &R, const std::string &X, const std::string &Y,int & indecator);
    void OPc(mainMemory &memory, mainMemory *Register, const std::string &R, const std::string &X, const std::string &Y);




};

#endif // CU_H
