
#include <iostream>

using namespace std;


void fillArray(double *doubleArray, int arraySize){
	
	int userInput;
	doubleArray = new double[arraySize];
	
	for (int i = 1; i < arraySize; i++){
		cout << "Enter an integer." << endl;
		cin >> userInput;
		doubleArray[i] = userInput;
	}
}


void printArray(double *doubleArray[], int size){
	for (int i = 0; i < size; i++){
		cout << doubleArray[i] << " ";
	}
}

