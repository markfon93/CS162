#include "Medusa.h"

Medusa::Medusa(){
  healthValue = 8;
  armorValue = 3;
  characterID = 2;
}

void Medusa::diceAttack(){
  diceSides = 12;
  diceCount = 1;
}


int Medusa::attack(){
  diceAttack();
  attackValue = rollDice();
  if (attackValue == 12){
    attackValue += 1000000;
    cout << "Medusa used 'glare!' It's super effective!" << endl;
    return attackValue;
  }
  else {
    attackValue -= armorValue;
    if (attackValue <= 0){
      attackValue = 0;
    }
    cout << nameValue << " does an Attack damage of:"
    << attackValue << endl;
    return attackValue;
  }





}
