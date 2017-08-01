#ifndef CHARACTER_H
#define CHARACTER_H
#include <iostream>
#include <string>
#include <time.h>
#include <stdlib.h>

using namespace std;

class Character {
  protected:
    int armorValue;
    int healthValue;
    int attackValue;
    int defenseValue;
    string nameValue;
    int diceSides;
    int diceCount;
    int characterID;

  private:

  public:
    Character();
    void diceAttack();
    void diceDefend();

    virtual int attack();
    //virtual void combat();
    virtual int defend();

    void displayStats();
    void displayCombatResults();

    int destroyObject(int character);
    int rollDice();

    string checkName();
    string getName();
    int getHealth();
    int getArmor();
    void setHealthDamage(int);
    int setDefendDamage(int);

    ~Character();

};

#endif
