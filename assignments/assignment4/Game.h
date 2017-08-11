#ifndef GAME_H
#define GAME_H

#include "Entity.h"
#include "Player.h"
#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

class Game {
  protected:
    int arrayRow;
    int arrayCol;
    Entity*** floorMap;
    Entity* charToEntity(char);
    Entity* tempPlayer;
	Entity* tempWall;
	Entity* tempSpace;
    Entity* tempKey;
    Entity* tempDoor;
    Entity* tempTeleport;
    Entity* tempWombat;
    Entity* tempEntity;


  private:
    bool endGame;
    bool playerCanMove;
    int** playerPos;
    int playerLineX;
    int playerLineY;
	char move;
    int numKeys;

  public:
    Game();
    void createGame();
    void displayCurrentGame();
    void startGame();
    void runGame();
    bool gameOver();
    void playerMove(char);
    void readFile(string);
    int findPlayerX();
    int findPlayerY();
    void findPlayerPosition();
    void checkEntity();
	void playerOnWombat();
	void playerOnTeleporter();
	void playerOnLadder();
	void playerOnDoor();
	void playerOnKey();
	void playerInventory();
};

#endif
