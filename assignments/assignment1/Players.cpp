#include "Players.h"
#include "GameLogic.h"
#include <iostream>
#include <ctime>
#include <cstdlib>



using namespace std;
/****************************
Generates a random int between 0 and 3 and returns it in to the variable userInputX.

Receives: nothing
Requires: ctime and cstdlib libraries
returns: int x
*****************************/
int Players::autoPlayX(){
  srand(time(NULL));
  int x;

  x = rand() % 4 + 0;
  return x;
}

/****************************
Generates a random int between 0 and 3 and returns it in to the variable userInputX.

Receives: nothing
Requires: ctime and cstdlib libraries
returns: int y
*****************************/
int Players::autoPlayY(){
  srand(time(NULL));
  int y;
  y = rand() % 4 + 0;
  return y;
}
