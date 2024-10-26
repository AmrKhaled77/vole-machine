// main.cpp


#include "mainMemory/mainMemorey.h"
#include "CPU/CPU.h"
#include "volemachien/voleMachine.h"
#include "fstream"

using namespace std;




int main() {







    mainMemory memory(256);
    mainMemory regstir(16);
   CU cu;
//
    int indicator = 0;
    CPU cpu(indicator, regstir,cu);
    voleMachine vl(cpu, memory);

    vl.memory->addData();





    vl.cpu->runAll(memory);
//    vl.cpu->runOneCycle(memory);
//    vl.cpu->runOneCycle(memory);
//    vl.cpu->runOneCycle(memory);
//    vl.cpu->runOneCycle(memory);
//    vl.cpu->runOneCycle(memory);
//    vl.cpu->runOneCycle(memory);


//    vl.cpu->runOneCycle(memory);
//    vl.cpu->runOneCycle(memory);
//    vl.cpu->runOneCycle(memory);
//    vl.cpu->runOneCycle(memory);
//    vl.cpu->runOneCycle(memory);


    cout<<"memory : \n";
    memory.showData();
    cout<<"\n";
    cout<<"\n";
    cout<<"register : \n";
    regstir.showData();






    return 0;
}
