#include "Dice.h"
#include "LoadedDice.h"

using namespace std;

Dice::Dice(){
  diceCount = 2;
  sides = 6;
  diceScore = 0;
  rollScore = 0;
  rolls = NULL;
}
void Dice::setSides(){
  cout << "input # of sides" << endl;
  cin >> sides;
}
void Dice::setCount(){
  cout << "input # of dice" << endl;
  cin >> diceCount;
}

void Dice::createDice(){
  setSides();
  setCount();
}

int Dice::getSides(){
  return sides;
}
int Dice::getCount(){
  return diceCount;
}

Dice::Dice(int newSides, int newDiceCount){
  sides = newSides;
  diceCount = newDiceCount;
  diceScore = 0;
  rollScore = 0;
  rolls = NULL;
}

int Dice::rollDice(int diceSides){
  roll1 = 0;
  roll2 = 0;
  roll1 = rand() % diceSides + 1;
  roll2 = rand() % diceSides + 1;
  rollScore = roll1 + roll2;
  return rollScore;
}

int* Dice::printRolls(int diceCount, bool isLoaded){
  bool loaded = isLoaded;
  rolls = new int[diceCount];
  cout << "rolls: ";
  for (int i = 0; i < diceCount; i++){
  //  if (isLoaded == 0){
        rolls[i] = rollDice(sides);
        cout << rolls[i] << " ";
//    }
    /*else{
      LoadedDice temp;
      rolls[i] = temp.rollDice(sides);
        cout << rolls[i] << " ";
    }*/

  }
  cout << endl;
  return rolls;
}

void Dice::addRolls(int diceCount){
  cout << "added rolls: ";
  for (int i = 0; i < diceCount; i++){
    diceScore += rolls[i];
  }
  cout << diceScore << endl;
}
