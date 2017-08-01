#ifndef MEDUSA_H
#define MEDUSA_H
#include "Character.h"

class Medusa : public Character {
  private:

  public:
    Medusa();
    void diceAttack();
    int attack();
};

#endif
