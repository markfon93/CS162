#ifndef LOADEDDICE_H
#define LOADEDDICE_H
#include "Dice.h"

class LoadedDice : public Dice {
  private:
    int chance;

  public:
    LoadedDice(int, int);
    LoadedDice() : Dice(){};
    int rollDice(int);



};

#endif
