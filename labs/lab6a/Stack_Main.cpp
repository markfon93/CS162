#include <iostream>
#include "Stack.h"

using namespace std;

int main()
{
  Stack s1;
  int answer;
  
do{
  cout << "Would you like to:" << endl; 
  cout << "Enter an input(1), print stack(2), remove top(3) or quit program(4): ?" << endl;
  cin >> answer;
  
  switch(answer)
  {
    case 1:
      s1.get_input();
      break;
    case 2:
      s1.print_stack();
      break;
    case 3:
      s1.remove();
      break;
  }
   }while(answer !=4);   
    

  return 0;
}