#include "Stack.h"

Stack::Stack(){
  arraySize = 0;
}



void Stack::inputNumbers(){
  while (pushNum != 'q'){
    cout << "input a number" << endl;
    cin >> pushNum;
    arraySize++;
    cout << "press q to exit" << endl;
  }
}

void Stack::push(int number;){
  inputNumbers();
  numArray = new int[arraySize]

}
