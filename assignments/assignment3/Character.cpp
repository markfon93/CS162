#include "Character.h"


Character::Character(){
  armorValue = 5;
  healthValue = 10;
  characterID = 0;
}

string Character::checkName(){
  switch (characterID){
    case 0:
      nameValue = "temp";
    break;
    case 1:
      nameValue = "Vampire";
    break;
    case 2:
      nameValue = "Medusa";
    break;
    case 3:
      nameValue = "Bubba";
    break;
  }
  return nameValue;
}

string Character::getName(){
  return nameValue;
}
int Character::getHealth(){
  return healthValue;
}

int Character::getArmor(){
  return armorValue;
}

int Character::setDefendDamage(int attack){
  attackValue = attack;
  int tempDefense = defend();
  attackValue -= tempDefense;
  if (attackValue <= 0){
    attackValue = 0;
  }
  if (defenseValue > attackValue){
    cout << nameValue << " deflected the attack!" << endl;
  }

  return attackValue;
}

void Character::setHealthDamage(int attack){
  attackValue = attack;

  if (attackValue >= armorValue){

    attackValue -= armorValue;
    healthValue -= attackValue;
  }

  else {
    attackValue = 0;
  }
}

int Character::rollDice(){
  int rollScore = 0;
  int rolls[diceCount];
  for (int i = 0; i < diceCount; i++){
    rolls[i] = rand() % diceSides + 1;
    rollScore += rolls[i];
  }
  return rollScore;
}

void Character::diceAttack(){
  diceSides = 6;
  diceCount = 2;
}

void Character::diceDefend(){
  diceCount = 1;
  diceSides = 6;
}

int Character::attack(){
  diceAttack();
  int attack = rollDice();
  attack -= armorValue;
  if (attack <= 0){
    attack = 0;
  }

  cout << nameValue << " does an Attack damage of: "
  << attack << endl;

  attackValue = attack;

  return attack;
}

int Character::defend(){
  diceDefend();
  int defend = rollDice();
  defenseValue = defend;
  cout << nameValue << " rolls a Defense value of: " << defend << endl;
  return defend;
}

void Character::displayStats(){
  cout << "Name: " << checkName() << endl;
  cout << "Health: " << getHealth() << endl;
  cout << "Armor: " << getArmor() << endl;
}

void Character::displayCombatResults(){
  if (healthValue > 0){
    cout << nameValue << " took " << attackValue << " damage!" << endl;
    cout << nameValue << "'s new health: " << healthValue;
  }
  if (healthValue <= 0){
    cout << nameValue << " took " << attackValue << " damage!" << endl;
    cout << nameValue << "'s HP went below zero!" << endl;
  }
}

int Character::destroyObject(int character){

}

Character::~Character(){

}
