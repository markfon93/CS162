#include "Stack.h"
#include <iostream>

using namespace std;

Stack::Stack()
{
  size_of_stack = 0;
  amount_in_stack = 0;
  stack = new int[size_of_stack];
  //use pointer to create new array
  //size starts at 1 with nothing in array in array
}

void Stack::get_input()
{
  cout << "Please enter either an integer or opperand: ";
  cin >> input;

  if(input >= 48 && input <= 59)
  {
    cout << "It is an int." << endl;
    num_input = input - '0';
    re_size_array();
    push();
  }
  else if(input >= 42 && input <= 47)
  {
    cout << "It is an opperand." << endl;
    num_input = pop();
    push();
  }
  //ask the user for an input
  //check the input for either an int or an opperand
    //if int:push onto stack and resize array
    //if opperand:pop, then push, and resize array
}

int Stack::pop()
{
  int combined = stack[0] + stack[1];
  --size_of_stack;
  --amount_in_stack;
  return combined;
}

void Stack::push()
{
  int *temp_array = new int[size_of_stack];
  temp_array[0] = num_input;

  for(int i = 0; i < amount_in_stack; i++)//copies old array to new array
  {
    temp_array[i+1] = stack[i];
  }

  delete []stack;//delete old array

  stack = temp_array;//reasigns pointer to new array
  //create temp* to new array
  //put int at index 0 in the new array
  //take old array and starting at index 0, copy array into new array starting at index 1
  //delete old array
}

void Stack::re_size_array()
{
  ++size_of_stack;
  ++amount_in_stack;
}

void Stack::print_stack()
{
  for(int i = 0; i < size_of_stack; i++)
  {
    cout << "#" << i << " = " << stack[i] << endl;
  }
}

void Stack::remove()
{
  --size_of_stack;
  --amount_in_stack;

  cout << stack[0] << " has been removed." << endl;

  for(int i = 0; i < size_of_stack; i++)
  {
    stack[i] = stack[i+1];
  }

}
