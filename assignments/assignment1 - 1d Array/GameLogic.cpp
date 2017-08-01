#include "GameLogic.h"
#include <iostream>

using namespace std;

void GameLogic::createGameBoard(){
	char place = '1';
	for (int i = 0; i < 9; i++){
		gameBoardArray[i] = place;
		place++;
		cout << gameBoardArray[i] << " ";
		if (i == 2){
			cout << endl;
		}
		if (i == 5){
			cout << endl;
		}
		if (i == 8){
			cout << endl;
		}
	}
}

void GameLogic::printGameBoard(){
	for (int i = 0; i < 9; i++){
		cout << gameBoardArray[i] << " ";
		if (i == 2){
			cout << endl;
		}
		if (i == 5){
			cout << endl;
		}
		if (i == 8){
			cout << endl;
		}
	}
}

void GameLogic::setPlaceX(int userInput){
	gameBoardArray[userInput] = 'X';
}

void GameLogic::setPlaceO(int userInput){
	gameBoardArray[userInput] = 'O';
}

bool GameLogic::isWinner(){
	endGame = false;
	playerXWin = false;
	playerOWin = false;
	char X = 'X';
	char O = 'O';

	//123
	if (gameBoardArray[0] == X && gameBoardArray[1] == X && gameBoardArray[2] == X){
		cout << "player X Wins!" << endl;
		playerXWin = true;
		endGame = true;
		return playerXWin;
		return endGame;
	}
	//147
	if (gameBoardArray[0] == X && gameBoardArray[3] == X && gameBoardArray[6] == X){
		cout << "player X Wins!" << endl;
		playerXWin = true;
		endGame = true;
		return playerXWin;
		return endGame;
	}
	//148
		if (gameBoardArray[0] == X && gameBoardArray[4] == X && gameBoardArray[8] == X){
		cout << "player X Wins!" << endl;
		playerXWin = true;
		endGame = true;
		return playerXWin;
		return endGame;
	}
	//456
		if (gameBoardArray[3] == X && gameBoardArray[6] == X && gameBoardArray[7] == X){
		cout << "player X Wins!" << endl;
		playerXWin = true;
		endGame = true;
		return playerXWin;
		return endGame;
	}
	//789
		if (gameBoardArray[6] == X && gameBoardArray[7] == X && gameBoardArray[8] == X){
		cout << "player X Wins!" << endl;
		playerXWin = true;
		endGame = true;
		return playerXWin;
		return endGame;
	}
	//753
			if (gameBoardArray[6] == X && gameBoardArray[4] == X && gameBoardArray[2] == X){
		cout << "player X Wins!" << endl;
		playerXWin = true;
		endGame = true;
		return playerXWin;
		return endGame;
	}
	//258
		if (gameBoardArray[1] == X && gameBoardArray[4] == X && gameBoardArray[7] == X){
		cout << "player X Wins!" << endl;
		playerXWin = true;
		endGame = true;
		return playerXWin;
		return endGame;
	}
	//369
		if (gameBoardArray[2] == X && gameBoardArray[5] == X && gameBoardArray[8] == X){
		cout << "player X Wins!" << endl;
		playerXWin = true;
		endGame = true;
		return playerXWin;
		return endGame;
	}


	//O Winners
	//123
	if (gameBoardArray[0] == O && gameBoardArray[1] == O && gameBoardArray[2] == O){
		cout << "player O Wins!" << endl;
		playerOWin = true;
		endGame = true;
		return playerOWin;
		return endGame;
	}
	//147
	if (gameBoardArray[0] == O && gameBoardArray[3] == O && gameBoardArray[6] == O){
		cout << "player O Wins!" << endl;
		playerOWin = true;
		endGame = true;
		return playerOWin;
		return endGame;
	}
	//148
		if (gameBoardArray[0] == O && gameBoardArray[4] == O && gameBoardArray[8] == O){
		cout << "player O Wins!" << endl;
		playerOWin = true;
		endGame = true;
		return playerOWin;
		return endGame;
	}
	//456
		if (gameBoardArray[3] == O && gameBoardArray[6] == O && gameBoardArray[7] == O){
		cout << "player O Wins!" << endl;
		playerOWin = true;
		endGame = true;
		return playerOWin;
		return endGame;
	}
	//789
		if (gameBoardArray[6] == O && gameBoardArray[7] == O && gameBoardArray[8] == O){
		cout << "player O Wins!" << endl;
		playerOWin = true;
		endGame = true;
		return playerOWin;
		return endGame;
	}
			if (gameBoardArray[6] == O && gameBoardArray[4] == O && gameBoardArray[2] == O){
		cout << "player O Wins!" << endl;
		playerOWin = true;
		endGame = true;
		return playerOWin;
		return endGame;
	}
	//258
		if (gameBoardArray[1] == O && gameBoardArray[4] == O && gameBoardArray[7] == O){
		cout << "player O Wins!" << endl;
		playerOWin = true;
		endGame = true;
		return playerOWin;
		return endGame;
	}
	//369
			if (gameBoardArray[2] == O && gameBoardArray[5] == O && gameBoardArray[8] == O){
		cout << "player O Wins!" << endl;
		playerOWin = true;
		endGame = true;
		return playerOWin;
		return endGame;
	}
	else {
		return false;
	}
}


/*
void GameLogic::createGameBoardThree(){
	int rows = 3;
	int cols = 3;
	char place = '0';
	for (int i = 0; i < rows; i++){
			for (int j = 0; j < cols; j++){
				gameBoardArray[i][j] = place;
				place++;
				cout << gameBoardArray[i][j] << " ";
			}
		cout << endl;
	}
	cout << endl;
}


void GameLogic::setPlace(int userInputX, int userInputY){
	gameBoardArray[userInputX-1][userInputY-1] = 'X';
}

void GameLogic::printGameBoardThree(){
	int rows = 3;
	int cols = 3;
	for (int i = 0; i < rows; i++){
			for (int j = 0; j < cols; j++){
				cout << gameBoardArray[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}*/
