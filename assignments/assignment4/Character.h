#ifndef CHARACTER_H
#define CHARACTER_H

#include <iostream>
#include <string>
#include <fstream>
#include <iostream>
#include <cstdlib>

#include "Entity.h"

using namespace std;

class Character : public Entity {
  private:
    char characterSpr;
    int linePos;
    int lineIndex;

  public:
    Character();
    bool isCharacter();
    void charMoveUp();
    void charMoveDown();
    void charMoveRight();
    void charMoveLeft();
};

#endif
