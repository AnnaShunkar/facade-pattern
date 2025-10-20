#include <iostream>
using namespace std;

// підсистема 1 //
class CPU {
public:
    void start() {
        cout << "CPU started." << endl;
    }
    void stop() {
        cout << "CPU stopped." << endl;
    }
};

// підсистема 2 //
class Memory {
public:
    void load() {
        cout << "Memory loaded." << endl;
    }
};

// підсистема 3 //
class HardDrive {
public:
    void read() {
        cout << "Hard drive reading data." << endl;
    }
};

// фасад//
class ComputerFacade {
private:
    CPU cpu;
    Memory memory;
    HardDrive hdd;
public:
    void startComputer() {
        cout << "Starting computer..." << endl;
        cpu.start();
        memory.load();
        hdd.read();
        cout << "Computer is ready to use." << endl;
    }

    void shutdownComputer() {
        cout << "Shutting down computer..." << endl;
        cpu.stop();
        cout << "Computer is off." << endl;
    }
};

int main() {
    ComputerFacade computer;
    computer.startComputer();
    cout << endl;
    computer.shutdownComputer();

    return 0;
}