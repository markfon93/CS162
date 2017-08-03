#include "Stack.h"

Stack::Stack(){
  arraySize = 0;
}

char Stack::inputNumbers(){
  cout << "input an element of your equation" << endl;
  cin >> pushChar;
  if (cin.fail()){
    cout << "Not a number. Try again." << endl;
    cin >> pushChar;
  }
  return pushChar;
}

int Stack::setArraySize(){
  cout << "How many elements including operands in your equation?" << endl;
  cin >> arraySize;
}

void Stack::push(){
  Node* newNode = new Node;
  newNode->element = inputNumbers();
}

void Stack::findNumbers(){

}

void Stack::convertToInt(){
}
