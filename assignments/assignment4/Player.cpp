#include "Player.h"

Player::Player(){
  id = 'O';
}

bool Player::playerMoveUp(char moveDirection){
  if (moveDirection == 'w'){
    return 1;
  }
  else 
	  return 0;
}

bool Player::playerMoveDown(char moveDirection){
  if (moveDirection == 's'){
    return 1;
  }
  else 
	  return 0;
}

bool Player::playerMoveRight(char moveDirection){
  if (moveDirection == 'd'){
    return 1;
  }
  else 
	  return 0;
}

bool Player::playerMoveLeft(char moveDirection){
  if (moveDirection == 'a'){
    return 1;
  }
  else 
	  return 0;
}
