#include <iostream>
#include <string>

using namespace std;

int *createArray(int size)
{
    int *newArray;

    newArray = new int[size];

    for( int i = 0; i < size; i++){
        cout << "Enter Element " << i << ": ";
        cin >> newArray[i];
    }
    return newArray;
}

int *dblArraySize ( int *myArray, int& size)
{
    int *newArray;

    newArray = new int[size*2];

    for (int i = 0; i < size; i++)
        newArray[i] = myArray[i];

    for (int i = size; i < size*2; i++){
        newArray[i] = 0;
    }

    size = size*2;
    return newArray;
}

void displayArray(int *anArray, int size, string msg)
{
    cout <<endl << endl << msg;
    for (int i = 0; i<size;i++){
        cout << endl << "Element " << i << "/" << size << " is " << anArray[i];
    }
}

int main ()
{
    int size,
        *mainArray;

    cout << "Enter array size: ";
    cin >> size;
    mainArray = createArray(size);

    displayArray(mainArray,size, "Entered Array:");

    dblArraySize(mainArray,size);

    displayArray(mainArray,size, "Resized Array:");
}
