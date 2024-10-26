// mainMemory.cpp


#include "mainMemorey.h"
#include "fstream"

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
      memoryUnit::count=-1;
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

        vector<string> hexValues;
        string filename="x.txt";
        cout<<"please enter file path of instructions : \n";
//        cin>>filename;

        ifstream file(filename);

        if (!file.is_open()) {
            cerr << "Unable to open file: " << filename << std::endl;

        }

        std::string word;
        while (file >> word) {

            if (word.size() > 2 && word.substr(0, 2) == "0x") {
                hexValues.push_back(word.substr(2));
            }
        }

        file.close();

        for(int i=0;i<hexValues.size();i++){
            if((hexValues[i].length()!=2)){
                cerr<<"the hex code in the file dose not form complete bytes please check your file  ";
                mainMemory::addData();
            }

            memory[i].hex=hexValues[i];
            memory[i].binary=hexToBinary(hexValues[0]);
        }


    if((hexValues.size())%2!=0){

        cerr<<"the hex code in the file dose not form complete bytes please check your file  ";
        mainMemory::addData();
    }
    }





// Placeholder function for clearData
void mainMemory::clearData() {
    for (int i = 0; i < memory.size(); ++i) {
        memory.emplace_back("00");
    }
    memoryUnit::count=-1;
}
