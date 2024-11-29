//
// Created by shaon on 11/28/2024.
//

#ifndef LPC_H
#define LPC_H

#include <iostream>
#include <fstream>
#include <vector>
#define MAXMEM 100
using namespace std;
class decoder
{
public:
    int instruction = 0;
    decoder();
    void decode(int instruction);
    int getOpcode();
    int getOprand();
    void setOpcode(int opcode);
    void setOprand(int oprand);
private:
    int opcode = 0;
    int oprand = 0;
};


class cpu
{
public:
    // constructor
    int breakPoint = 0;


private:
    int accumulator = 0;
    int instructionCounter = 0;
    int instructionRegister = 0;
    int operationCode = 0;
    int operand = 0;

};



#endif //LPC_H
