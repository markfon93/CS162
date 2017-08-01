#ifndef DICE_H
#define DICE_H
#include <iostream>
#include <stdlib.h>
#include <time.h>

class Dice{
  protected:
    int diceCount;
    int diceScore;
    int rollScore;
    int* rolls;
    int roll1;
    int roll2;

  private:
    int sides;


  public:
    Dice();
    Dice(int, int);
    void createDice();
    void setSides();
    void setCount();
    int getSides();
    int getCount();
    virtual int rollDice(int);
    int getRoll();
    void addRolls(int);
    int* printRolls(int,bool);

};

#endif
