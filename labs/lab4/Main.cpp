#include "Dice.h"
#include "LoadedDice.h"
#include <iostream>

using namespace std;


int main(){
  srand(time(NULL));
  Dice tempDice;
  tempDice.setCount();
  cout << "-------Default Dice--------" << endl;
  tempDice.printRolls(tempDice.getCount(), 0);
  tempDice.addRolls(tempDice.getCount());


  cout << "-------Custom Dice--------" << endl;
  tempDice.createDice();
  Dice newDice(tempDice.getSides(), tempDice.getCount());
  newDice.printRolls(tempDice.getCount(), 0);
  newDice.addRolls(tempDice.getCount());

  cout << "-------Loaded Dice--------" << endl;
  LoadedDice lodDice(tempDice.getSides(), tempDice.getCount());
  lodDice.printRolls(tempDice.getCount(), 1);
  lodDice.addRolls(tempDice.getCount());


  return 0;
}
