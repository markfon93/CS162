/*********************************************************************
** Program Filename:  Main.cpp
** Author:  Mark Fontaine
** Date:  07/17/2017
** Description: Creates an array of objects that hold
              name, unit, purchase number, and price per.

** Input:       array size, name of item, unit of item,
              number of units, price of unit

** Output:      name of item, unit of item,
              number of units, price of unit, total
*********************************************************************/
#include "Item.h"
#include "List.h"
#include <iostream>
#include <string>

using namespace std;

int main(){
  List newList;
  newList.fillArray(newList.buildArray());
  newList.setTotal(newList.getArraySize());
  newList.printList(newList.getArraySize());
  return 0;
};
