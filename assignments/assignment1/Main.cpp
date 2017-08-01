#include "GameLogic.h"
#include "Players.h"
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(){

	GameLogic newGame;
	int userInputX;
	int userInputY;
	int turnCounter = 0;

	char playAgain;

	bool endGame = false;

	bool playerTurn = true;
	bool computerTurn = false;

	bool soloGameChoice = false;

	bool checkValue;
	bool validEntry = false;


/******************
Game Options
********************/
if (newGame.getPlayerMenu() == true){
	soloGameChoice = true;
	computerTurn = true;
}
else {
	soloGameChoice = false;
}
playerTurn = newGame.soloMenu(soloGameChoice);

newGame.createGameBoard();	//start game
/****************************
player turns
****************************/

while (endGame == false){

//player X
if (newGame.isWinner() == true || turnCounter >= 9){
	endGame = true;
}
	while (playerTurn == true && endGame == false){
		cout << "It is currently player X's turn." << endl;
		cout << "Player X, input your desired position." << endl;
/*********
Data validation
*********/
		while (validEntry == false){
			checkValue = false;
			while (checkValue == false){
				cout << "Input X" << endl;
				cin >> userInputX;
				if (userInputX <= 3){
					checkValue = true;
				}
				else {
					cout << "Number must be between 1, 2, or 3." << endl;
				}
			}
			checkValue = false;
			while (checkValue == false){
				cout << "Input Y" << endl;
				cin >> userInputY;
				if (userInputY <= 3){
					checkValue = true;
				}
				else {
					cout << "Number must be between 1, 2, or 3." << endl;
				}
			}
/**********
Check if spot free
***********/
			if (newGame.checkIfEmpty(userInputY, userInputX) == true){
					newGame.setPlaceX(userInputY, userInputX);
					newGame.printGameBoard();
					if (soloGameChoice == true){
						computerTurn = true;
					}
					else {
						computerTurn = false;
					}

					playerTurn = false;
					turnCounter++;
			}
			else {
				cout << "There is already a mark there." << endl;
				cout << endl << endl;
			}
			validEntry = true;
			checkValue = false;
		}
		validEntry = false;

	}

//player Y
if (newGame.isWinner() == true || turnCounter >= 9){
	endGame = true;
}
	while (playerTurn == false && endGame == false && computerTurn == false){
		cout << "It is currently player O's turn" << endl;
		cout << "Player O, input your desired position." << endl;
		/*********
		Data validation
		*********/
		while (validEntry == false){
			checkValue = false;
			while (checkValue == false){
				cout << "Input X" << endl;
				cin >> userInputX;
				if (userInputX <= 3){
				checkValue = true;
				}
				else {
					cout << "Number must be between 1, 2, or 3." << endl;
				}
			}
		checkValue = false;
		while (checkValue == false){
			cout << "Input Y" << endl;
			cin >> userInputY;
			if (userInputY <= 3){
				checkValue = true;
			}
			else {
				cout << "Number must be between 1, 2, or 3." << endl;
			}
		}
/**********
Check if spot free
***********/
					if (newGame.checkIfEmpty(userInputY, userInputX) == true){
						newGame.setPlaceO(userInputY, userInputX);
						newGame.printGameBoard();
						playerTurn = true;
						turnCounter++;
					}
					else {
						cout << "There is already a mark there." << endl;
						cout << endl << endl;
					}
					validEntry = true;
					checkValue = false;
			}
				validEntry = false;
		}

/****************
Computer player
****************/
if (newGame.isWinner() == true || turnCounter >= 9){
	endGame = true;
}
while (newGame.getComputerTurn(computerTurn) == true && endGame == false) {
	Players newPlayer;
	bool computerMoved = false;
	while (computerMoved == false){
		userInputX = newPlayer.autoPlayX();
		userInputY = newPlayer.autoPlayY();
		if (newGame.checkIfEmpty(userInputY, userInputX) == true){
			computerMoved = true;
			newGame.setPlaceO(userInputY, userInputX);
			newGame.printGameBoard();
			computerTurn = false;
			playerTurn = true;
			turnCounter++;
		}
		else {
			playerTurn = false;
		}
		if (newGame.isWinner() == true || turnCounter >= 9){
			endGame = true;
		}
	}
}
}

	if (endGame == true){
		cout << "Game over." << endl;
	}
	else if (turnCounter >= 9){
		cout << "Game is a draw!" << endl;
	}
	else {
		cout << "Unknown game-ending error" << endl;
	}
};
