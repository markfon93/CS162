#include "Game.h"


Game::Game(){

}

void Game::createGame(){
  fighterChoice = 0;
  int fighter1Choice;
  int fighter2Choice;
  fighterTurn = 1;
  cout << "Choose the first fighter." << endl;
  cout << "1 = Bubba   2 = Vampire    3 = Medusa" << endl;
  while (fighterChoice == 0) {
    cin >> fighter1Choice;
    if (fighter1Choice > 0 && fighter1Choice < 4){
      fighterChoice = 1;
    }
    else {
      cout << "Choose a number 1, 2, or 3" << endl;
      fighterChoice = 0;
    }
  }

  switch (fighter1Choice){
    case 1:
      cout << "You have chosen Bubba" << endl;
      fighter1 = new Bubba;
    break;
    case 2:
      cout << "You have chosen Vampire" << endl;
      fighter1 = new Vampire;
    break;
    case 3:
      cout << "You have chosen Medusa" << endl;
      fighter1 = new Medusa;
    break;
  };

  cout << "Choose the second fighter." << endl;
  cout << "1 = Bubba   2 = Vampire    3 = Medusa" << endl;
  fighterChoice = 0;
  while (fighterChoice == 0) {
    cin >> fighter2Choice;
    if (fighter2Choice > 0 && fighter2Choice < 4){
      fighterChoice = 1;
    }
    else {
      cout << "Choose a number 1, 2, or 3" << endl;
      fighterChoice = 0;
    }
  }

  switch (fighter2Choice){
    case 1:
      cout << "You have chosen Bubba" << endl;
      fighter2 = new Bubba;
    break;
    case 2:
      cout << "You have chosen Vampire" << endl;
      fighter2 = new Vampire;
    break;
    case 3:
      cout << "You have chosen Medusa" << endl;
      fighter2 = new Medusa;
    break;
  };

}

void Game::displayFighters(){
    fighter1->displayStats();
    cout << endl;
    cout << "vs" << endl;
    cout << endl;
    fighter2->displayStats();
}

void Game::fighterAttack(){
  if (fighterTurn == 1){
    fighter2->setHealthDamage(fighter2->setDefendDamage(fighter1->attack()));
    fighterTurn = 0;
  }
  else if (fighterTurn == 0){
    fighter1->setHealthDamage(fighter1->setDefendDamage(fighter2->attack()));
    fighterTurn = 1;
  }
}

void Game::displayCurrentGame(){
    if (fighterTurn == 1){
      fighter1->displayCombatResults();
    }
    else {
      fighter2->displayCombatResults();
    }
}

void Game::startGame(){
    srand(time(NULL));
    createGame();
    cout << endl;
    cout << endl;
    displayFighters();
    runGame();
    cout << endl;
    cout << endl;
}

void Game::runGame(){
  bool gameOn = true;
  while (gameOn == true){
    fighterAttack();
    displayCurrentGame();
    cout << endl;
    cout << endl;
    if (fighter2->getHealth() <= 0 || fighter1->getHealth() <= 0 ){
      if (fighterTurn == 1){
        cout << fighter2->getName() << " wins the game!" << endl;
        gameOn = false;
      }
      else if (fighterTurn == 0){
        cout << fighter1->getName() << " wins the game!" << endl;
        gameOn = false;
      }
    }
  }
}
