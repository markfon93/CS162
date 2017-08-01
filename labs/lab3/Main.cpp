#include <iostream>
#include <string>
#include "Date.h"

using namespace std;

int main(){

  Date newDate(1, 2, 1970);
  char choice;

  cout << "choose type of date to display (1/2)" << endl;
  cin >> choice;
  newDate.printDate(choice);



  return 0;
}
