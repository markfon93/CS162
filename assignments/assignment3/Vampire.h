#ifndef VAMPIRE_H
#define VAMPIRE_H
#include "Character.h"

class Vampire : public Character {
  private:

  public:
    Vampire();
    void diceDefend();
    int defend();
};

#endif
