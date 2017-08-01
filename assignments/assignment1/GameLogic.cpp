#include "GameLogic.h"
#include <iostream>

using namespace std;
/****************************************
Creates the gameBoard by drawing two separate int 1D arrays as the borders
then within said border, a char 2D array is printed filled with "blank" asterisds.
Prints as...
	1 2 3 X
1 * * *
2 * * *
3 * * *
Y
Returns: nothing
Receives: nothing
Requirements: 2x 2D character arrays with size 3x3 and 2x 1D arrays size 3
***************************************/
void GameLogic::createGameBoard(){
	rows = 3;
	cols = 3;
	cout << " ";

	for (int k = 0; k < cols; k++){
		gameBoardXBorder[k] = k+1;
		cout << " " << gameBoardXBorder[k];
	}

	cout << " X" << endl;

	for (int i = 0; i < rows; i++){
			gameBoardYBorder[i] = i+1;
			cout << gameBoardYBorder[i] << " ";

			for (int j = 0; j < cols; j++){
				gameBoardArray[i][j] = '*';
				cout << gameBoardArray[i][j] << " ";
			}

		cout << endl;
	}
	cout << "Y" << endl;
	cout << endl;
}
/****************************************
Prints the gameBoard by drawing two separate int 1D arrays as the borders as in
createGameBoard(). A char 2D array is printed, filled with "blank" asterisks and any
updated values are shown.

Returns: nothing
Receives: nothing
Requirements: 2x 2D character arrays with size 3x3 and 2x 1D arrays size 3
***************************************/
void GameLogic::printGameBoard(){
	rows = 3;
	cols = 3;
	cout << " ";

	for (int k = 0; k < cols; k++){
		gameBoardXBorder[k] = k+1;
		cout << " " << gameBoardXBorder[k];
	}

	cout << " X" << endl;
	for (int i = 0; i < rows; i++){
		gameBoardYBorder[i] = i+1;
		cout << gameBoardYBorder[i] << " ";
		for (int j = 0; j < 3; j++){
			cout << gameBoardArray[i][j] << " ";
		}
		cout << endl;
	}
	cout << "Y" << endl;
	cout << endl;
}

/****************************************
Asks user if computer player is wanted. If not, defaults to player vs player.

Returns: bool true or false
Receives: nothing
Requirements: none
***************************************/
bool GameLogic::getPlayerMenu(){
	bool validEntry = false;
	while (validEntry == false){
		cout << "Do you want to play against the computer?" << endl;
		cin >> gameChoice;
		if (gameChoice == 'Y' || gameChoice == 'y'){
			return true;
		}
		if (gameChoice == 'N' || gameChoice == 'n'){
			return false;
		}
		else {
			cout << "Type in an an Y or an N." << endl;
		}
	}
}

/****************************************
Asks user who should go first (X or Y)

Returns: bool true or false
Receives: soloGame
Requirements: getPlayerMenu() called and return true or false,
	in int main(), soloGameChoice must be given a bool value.
***************************************/
bool GameLogic::soloMenu(bool soloGame){
	bool returnPlayerTurn = false;
	if (soloGame == false){
		cout << "PVP then. Who should go first? X or O?" << endl;
		cin >> playerOne;
		if (playerOne == 'X' || playerOne == 'x'){
			return  true;
		}
		else if (playerOne == 'O' || playerOne == 'o'){
			return false;
		}
		else {
			cout << "Type in an an X or an O." << endl;
		}
	}
	else if (soloGame == true){
		cout << "Player vs Computer." << endl;
	}
}

/****************************************
Switches whose turn it is between non-AI players.

Returns: bool true or false
Receives: playerTurn
Requirements: playerTurn must be declared as a boolean in main and
must be swapped at the end of each valid turn.
***************************************/
bool GameLogic::getPlayerTurn(bool playerTurn){
	if (playerTurn == true){
		return true;
	}
	else if (playerTurn == false){
		 return true;
	}
}

/****************************************
Switches whose turn it is to the computer

Returns: bool true or false
Receives: computerTurn
Requirements: computerTurn must be declared as a boolean in main and
must be swapped at the end of each valid turn. Also, soloGameChoice
 must be true to change computerTurn value from false.
***************************************/
bool GameLogic::getComputerTurn(bool computerTurn){
	if (computerTurn == true){
		return true;
	}
	 if (computerTurn == false){
		return false;
	}
}

/****************************************
Brings in user input and changes the correct place to an X

Returns:
Receives: userInputX and userInputY
Requirements: gameBoardArray must be filled with *, X, or Y. userInput must be
within the bounds of the array.
***************************************/
void GameLogic::setPlaceX(int userInputX, int userInputY){
	gameBoardArray[userInputX-1][userInputY-1] = 'X';
}

/****************************************
Brings in user input and changes the correct place to a Y

Returns:
Receives: userInputX and userInputY
Requirements: gameBoardArray must be filled with *, X, or Y. userInput must be
within the bounds of the array.
***************************************/
void GameLogic::setPlaceO(int userInputX, int userInputY){
	gameBoardArray[userInputX-1][userInputY-1] = 'O';
}

/****************************************
Checks if the user selected array position is "empty".

Returns: true or false
Receives: userInputX and userInputY
Requirements: gameBoardArray must be filled with *, X, or Y. userInput must be
within the bounds of the array.
***************************************/
bool GameLogic::checkIfEmpty(int userInputX, int userInputY){
	if (gameBoardArray[userInputX-1][userInputY-1] == '*'){
		return true;
	}
	else {
		return false;
	}
}

/****************************************
Defines all win conditions by reading the current board and
checking for matchimng conditions.

Returns: true or false
Receives: nothing
Requirements: gameBoardArray must be a [3][3] array of characters
***************************************/
bool GameLogic::isWinner(){
	endGame = false;
	playerXWin = false;
	playerOWin = false;
	char X = 'X';
	char O = 'O';

	//11 12 13
	if (gameBoardArray[0][0] == X && gameBoardArray[0][1] == X && gameBoardArray[0][2] == X){
		playerXWin = true;
		endGame = true;
	}
		//21 22 23
	else if (gameBoardArray[1][0] == X && gameBoardArray[1][1] == X && gameBoardArray[1][2] == X){
		playerXWin = true;
		endGame = true;
	}
		//31 32 33
	else if (gameBoardArray[2][0] == X && gameBoardArray[2][1] == X && gameBoardArray[2][3] == X){
		playerXWin = true;
		endGame = true;
	}
		//11 21 31
	else if (gameBoardArray[0][0] == X && gameBoardArray[1][0] == X && gameBoardArray[2][0] == X){
		playerXWin = true;
		endGame = true;
	}
	//21 22 23
	else if (gameBoardArray[1][0] == X && gameBoardArray[1][1] == X && gameBoardArray[1][2] == X){
		playerXWin = true;
		endGame = true;
	}
	//31 32 33
	else if (gameBoardArray[2][0] == X && gameBoardArray[2][1] == X && gameBoardArray[2][2] == X){
		playerXWin = true;
		endGame = true;
	}
	//11 22 33
	else if (gameBoardArray[0][0] == X && gameBoardArray[1][1] == X && gameBoardArray[2][2] == X){
		playerXWin = true;
		endGame = true;
	}
	//31 22 13
	else if (gameBoardArray[0][2] == X && gameBoardArray[1][1] == X && gameBoardArray[2][0] == X){
		playerXWin = true;
		endGame = true;
	}

	//O WINS

	//11 12 13
	else if (gameBoardArray[0][0] == O && gameBoardArray[0][1] == O && gameBoardArray[0][2] == O){
		playerOWin = true;
		endGame = true;
	}
	//21 22 23
	else if (gameBoardArray[1][0] == O && gameBoardArray[1][1] == O && gameBoardArray[1][2] == O){
		playerOWin = true;
		endGame = true;
	}
	//31 32 33
	else if (gameBoardArray[2][0] == O && gameBoardArray[2][1] == O && gameBoardArray[2][3] == O){
		playerOWin = true;
		endGame = true;
	}
	//11 12 13
	else if (gameBoardArray[0][0] == O && gameBoardArray[0][1] == O && gameBoardArray[0][2] == O){
		playerXWin = true;
		endGame = true;
	}
	//21 22 23
	else if (gameBoardArray[1][0] == O && gameBoardArray[1][1] == O && gameBoardArray[1][2] == O){
		playerOWin = true;
		endGame = true;
	}
	//31 32 33
	else if (gameBoardArray[2][0] == O && gameBoardArray[2][1] == O && gameBoardArray[2][2] == O){
		playerOWin = true;
		endGame = true;
	}
	//11 22 33
	else if (gameBoardArray[0][0] == O && gameBoardArray[1][1] == O && gameBoardArray[2][2] == O){
		playerOWin = true;
		endGame = true;
	}
	//31 22 13
	else if (gameBoardArray[0][2] == O && gameBoardArray[1][1] == O && gameBoardArray[0][2] == O){
		playerOWin = true;
		endGame = true;
	}
		if (endGame == true){
			if (playerXWin == true){
				cout << "Player X Wins!" << endl;
			}
			else if (playerOWin == true){
				cout << "Player O Wins!" << endl;
			}
			return true;
		}
		else {
			return false;
		}
}
