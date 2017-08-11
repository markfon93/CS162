#ifndef PLAYER_H
#define PLAYER_H


#include "GameLogic.h"
#include "Character.h"
#include "Floor.h"

class Player : public Character {
  private:
    char playerSpr;
    char input;
    bool canMove;

  public:
    Player();
    bool isCharacter();
    static bool playerMoveUp(char);
    static bool playerMoveDown(char);
    static bool playerMoveRight(char);
    static bool playerMoveLeft(char);
};

#endif
