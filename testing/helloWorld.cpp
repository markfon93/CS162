#include <iostream>
#include <vector>
#include <string>
#include <fstream>
// g++ baseFile -o outputFile
// -o name
// -c 

using namespace std;

int getFactorial(int number){
	int sum;
	if (number == 1){
		sum = 1;
	}
	else{
		sum = getFactorial(number -1) * number;
	}
	return sum;
}

int main()
{
	cout << getFactorial(4) << endl;

	return 0;
}


