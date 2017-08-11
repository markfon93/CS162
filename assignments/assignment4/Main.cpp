#include "Game.h"
#include "Player.h"
#include "Floor.h"
#include "Wombat.h"
#include "Character.h"
#include "Door.h"
#include "Entry.h"
#include "Key.h"
#include "Ladder.h"
#include "Teleport.h"
#include "Wall.h"
#include "Space.h"


using namespace std;

int main(){
  Game newGame;
  newGame.startGame();
  newGame.runGame();
  return 0;
}
