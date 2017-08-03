#include "Stack.h"

Stack::Stack(){
  arraySize = 0;
}

int Stack::inputNumbers(){
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
  setArraySize();
  numArray = new char[arraySize];
  for (int i = 0; i < arraySize; i++){
    numArray[i] = inputNumbers();
  }
  convertToInt();
  cout << "1st number: " << popNumOne << endl;
  cout << "2nd number: " << popNumTwo << endl;
}

void Stack::setPopNumOne(){
  popNumOne = tempChar - '0';
  numCount++;
  cout << "numCount = " << numCount << endl;
}

void Stack::setPopNumTwo(){
  popNumTwo = tempChar - '0';
  numCount++;
  cout << "numCount = " << numCount << endl;
}


void Stack::convertToInt(){
  int numCount = 0;
  char tempChar;
  for (int i = arraySize; i >= 0; i--){
    tempChar = numArray[i];
    if (numArray[i] >= '0' && numArray[i] <= '9' && numCount == 0){
      setPopNumOne();
    }
    else if (numArray[i] >= '0' && numArray[i] <= '9' && numCount == 1){
      setPopNumTwo();
    }
    if (numCount == 2){
      for (int i = arraySize; i >= 0; i--){
        tempChar = numArray[i];
      }
      switch (tempChar){
        case '+':
          popNum = popNumOne + popNumTwo;
          cout << "sum of " << popNumOne << "+" << popNumTwo <<  " is " << popNum << endl;
      }
    }

  }

}
