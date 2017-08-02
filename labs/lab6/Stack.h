#ifndef STACK_H
#define STACK_H
#include <iostream>

using namespace std;

class Stack {
  private:
    int* numArray;
    int arraySize;
    int pushNum;
    int popNum;

  public:
    Stack();
    void push(int);
    void pop();
};

#endif
