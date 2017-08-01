#include "Vampire.h"

Vampire::Vampire(){
  healthValue = 8;
  armorValue = 3;
  characterID = 1;
}


void Vampire::diceDefend(){
  diceCount = 2;
  diceSides = 6;
}

int Vampire::defend(){
  diceDefend();
  int charmChance;
  charmChance = rand() % 2 + 1;

  int defend = rollDice();
  defenseValue = defend;

  if (charmChance == 1){
    cout << "Vampire used 'charm!'" <<
    "The attacker got distracted and didn't attack." << endl;
    defenseValue = 1000000;
  }

  else {
      cout << nameValue << " rolls a Defense value of: " << defend << endl;
      return defend;
    }
}
