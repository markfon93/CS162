#ifndef STACK_H
#define STACK_H
#include <iostream>
#include <string>
#include <cstdlib>
#include "Structs.h"

using namespace std;

class Stack {
  private:
    char* charArray;
    int arraySize;
    char pushChar;
    int popNumOne;
    int popNumTwo;
    int numCount;
    char tempChar;

  public:
    Stack();
    char inputNumbers();
    void inputOperand();
    int setArraySize();
    void convertToInt();
    void findNumbers();
    void push();
    void pop();
};

#endif
