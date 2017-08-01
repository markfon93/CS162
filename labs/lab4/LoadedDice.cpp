#include "LoadedDice.h"

using namespace std;

LoadedDice::LoadedDice(int newSides, int newDiceCount) :
Dice(newSides, newDiceCount){
}

int LoadedDice::rollDice(int diceSides){
  cout << "I was called" << endl;
  for (int i = 0; i < diceCount; i++){
    chance = rand() % 100 + 1;
    if (chance <= 5){
      while (roll1 <= diceSides || roll2 <= diceSides){
        roll1 = 1;
        roll2 = 1;
        roll1 += rand() % diceSides + 1;
        roll2 += rand() % diceSides + 1;
      }
      rollScore = roll1 + roll2;
    }
    else if (chance > 5){
      roll1 = 0;
      roll2 = 0;
      roll1 = rand() % diceSides + 1;
      roll2 = rand() % diceSides + 1;
      rollScore = roll1 + roll2;
    }
  }
  cout << endl;
  cout << "THE CHANCE WAS: " << chance << "%" << endl;
  return rollScore;
}
