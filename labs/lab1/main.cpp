#include "summation.h"
#include "average.h"
#include <iostream>

using namespace std;

int main (){
	int userSize;
	double doubleArray[10];

	cout << "enter an array size" << endl;
	cin >> userSize;
	
	cout << "enter that many numbers." << endl;
	for (int i=0; i <userSize; i++){
		cin >> doubleArray[i];
	}
	
	
	cout << "sum is... " << sum(doubleArray, userSize) << endl;
	cout << "average is... " << avg(doubleArray, userSize) << endl;
	
	return 0;
}