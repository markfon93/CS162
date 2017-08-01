#ifndef GAME_H
#define GAME_H
#include "Character.h"
#include "Bubba.h"
#include "Vampire.h"
#include "Medusa.h"

#include <iostream>
#include <string>
#include <time.h>
#include <stdlib.h>

using namespace std;

class Game {
  protected:

  private:
    Character* fighter1;
    Character* fighter2;
    bool fighterTurn;
    bool fighterChoice;

    int id;
    bool game;

  public:
    Game();
    void displayFighters();
    void displayCurrentGame();
    void fighterAttack();
    void startGame();
    void createGame();
    void runGame();

};

#endif
