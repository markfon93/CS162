#ifndef STACK_H
#define STACK_H
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

class Stack {
  private:
    char* numArray;
    int arraySize;
    char pushChar;
    int popNumOne;
    int popNumTwo;
    int popNum;
    int numCount;

  public:
    Stack();
    int inputNumbers();
    void inputOperand();
    int setArraySize();
    void convertToInt();
    void push();
    void pop();
};

#endif
