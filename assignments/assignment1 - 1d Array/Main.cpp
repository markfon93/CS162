#include "GameLogic.h"
#include "Players.h"
#include <iostream>

using namespace std;

int main(){

	GameLogic newGame;
	int rows = 3;
	int cols = 3;
	bool playerXTurn;
	bool playerOTurn;
	int userInput;
	char playerOne;
	char playAgain;
	bool endGame = false;
	newGame.createGameBoard();
	bool playerMenu = true;

	while (playerMenu == true){
	cout << "Who should go first? X or O?" << endl;
	cin >> playerOne;
	if (playerOne == 'X' || playerOne == 'x'){
		playerXTurn = true;
		playerOTurn = false;
		playerMenu = false;
	}
	else if (playerOne == 'O' || playerOne == 'o'){
		playerXTurn = false;
		playerOTurn = true;
		playerMenu = false;
	}
	else {
		cout << "Type in an an X or an O." << endl;
	}
}

	while (newGame.isWinner() == false){
		if (playerXTurn == true && newGame.isWinner() == false){
			cout << "It is currently player X's turn." << endl;
			cout << "Player X, input your desired position." << endl;
			cin >> userInput;
			userInput -= 1;
			newGame.setPlaceX(userInput);
			newGame.printGameBoard();
			newGame.isWinner();
			playerXTurn = false;
			playerOTurn = true;
		}

		if (playerOTurn == true && newGame.isWinner() == false){
			cout << "It is currently player Y turn" << endl;
			cout << "Player Y, input your desired position." << endl;
			cin >> userInput;
			userInput -= 1;
			newGame.setPlaceO(userInput);
			newGame.printGameBoard();
			newGame.isWinner();
			playerOTurn = false;
			playerXTurn = true;
		}
}
	cout << "play again? (Y/N)" << endl;
	cin >> playAgain;
	if (playAgain == 'Y'){
		endGame = false;
	}
	else {
		cout << "thanks for playing" << endl;
	}


	return 0;
};
