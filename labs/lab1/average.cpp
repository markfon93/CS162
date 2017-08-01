#include <iostream>

double avg(double doubleArray[], double size){

	double total = 0;
	for (int i = 0; i < size; i++){
		total += doubleArray[i];
	}
	return total / size;
}
