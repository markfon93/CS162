#include "Game.h"

#include "Door.h"
#include "Entry.h"
#include "Key.h"
#include "Ladder.h"
#include "Player.h"
#include "Teleport.h"
#include "Wall.h"
#include "Wombat.h"
#include "Space.h"

Game::Game() {
	floorMap = NULL;
	arrayRow = 0;
	arrayCol = 0;
	playerCanMove = 1;
	endGame = 0;
	numKeys = 0;
}

void Game::createGame(){

}

void Game::startGame(){
	readFile("floor.txt");
	displayCurrentGame();

}

void Game::runGame(){
	while (!endGame) {
		findPlayerPosition();
		cin >> move;
		playerMove(move);
		displayCurrentGame();
	}
}

void Game::playerInventory() {
	cout << "Iventory: " << endl;
	cout << "Keys: " << numKeys << endl;
}

Entity* Game::charToEntity(char charIn) {
	Entity *out = NULL;

	if (charIn == '#'){
		out = new Wall;
		tempWall = out;
	}
	else if (charIn == 'K'){
		out = new Key;
		tempKey = out;
	}
	else if (charIn == 'D'){
		out = new Door;
		tempDoor = out;
	}
	else if (charIn == 'T'){
		out = new Teleport;
		tempTeleport = out;
	}
	else if (charIn == 'O'){
		out = new Player;
		tempPlayer = out;
	}
	else if (charIn == 'W'){
		out = new Wombat;
		tempWombat = out;
	}
	else if (charIn == ' ') {
		out = new Space;
		tempSpace = out;
	}
	return out;
}
void Game::checkEntity() {
	playerOnWombat();
	playerOnTeleporter();
	playerOnLadder();
	playerOnDoor();
	playerOnKey();
}

void Game::playerOnKey() {
	if (tempEntity->getId() == 'K') {
		numKeys += 1;
		playerCanMove = 1;
		if (numKeys == 1) {
			cout << "you found a key!" << endl;
		}
		else {
			cout << "You found another key! It was added to your inventory." << endl;
		}
	}
}

void Game::playerOnDoor() {
	if (tempEntity->getId() == 'D') {
		if (numKeys > 0) {
			playerCanMove = 1;
			numKeys --;
			cout << "Your key unlocked the door!" << endl;
		}
		else {
			playerCanMove = 0;
			cout << "You need a key to unlock the door!" << endl;
		}
	}
}

void Game::playerOnLadder() {
	if (tempEntity->getId() == 'L') {
		cout << "You found the ladder out!" << endl;
	}
}

void Game::playerOnTeleporter() {
	if (tempEntity->getId() == 'T') {
		cout << "You stepped on a teleporter!" << endl;
		//floorMap[playerLineY - 1][playerLineX] = tempPlayer;
		//floorMap[playerLineY][playerLineX] = tempSpace;

	}
}

void Game::playerOnWombat() {
	if (tempEntity->getId() == 'W') {
		cout << "The wombat guard caught you!" << endl;
		cout << "Game over." << endl;
		endGame = 1;
	}
}






void Game::playerMove(char move) {
	if (Player::playerMoveUp(move)) {
		if (floorMap[playerLineY][playerLineX] == tempPlayer && playerCanMove == 1) {
			if (floorMap[playerLineY - 1][playerLineX]->getId()) {
				if (floorMap[playerLineY - 1][playerLineX]->getId() != '#') {
					tempEntity = floorMap[playerLineY - 1][playerLineX];
					checkEntity();
					if (playerCanMove == 1) {
						floorMap[playerLineY - 1][playerLineX] = tempPlayer;
						floorMap[playerLineY][playerLineX] = tempSpace;
						cout << "player moved up" << endl;
						findPlayerPosition();
					}
				}
			}
		}
	}
	else if (Player::playerMoveDown(move)) {
		if (floorMap[playerLineY][playerLineX] == tempPlayer && playerCanMove == 1) {
			if (floorMap[playerLineY + 1][playerLineX]->getId()) {
				if (floorMap[playerLineY + 1][playerLineX]->getId() != '#') {
					tempEntity = floorMap[playerLineY + 1][playerLineX];
					checkEntity();
					if (playerCanMove == 1) {
						floorMap[playerLineY + 1][playerLineX] = tempPlayer;
						floorMap[playerLineY][playerLineX] = tempSpace;
						cout << "player moved down" << endl;
						findPlayerPosition();
					}
				}
			}
		}
	}
	else if (Player::playerMoveLeft(move)) {
		if (floorMap[playerLineY][playerLineX] == tempPlayer && playerCanMove == 1) {
			if (floorMap[playerLineY][playerLineX - 1]->getId()) {
				if (floorMap[playerLineY][playerLineX - 1]->getId() != '#') {
					tempEntity = floorMap[playerLineY][playerLineX - 1];
					checkEntity();
					if (playerCanMove == 1) {
						floorMap[playerLineY][playerLineX - 1] = tempPlayer;
						floorMap[playerLineY][playerLineX] = tempSpace;
						cout << "player moved left" << endl;
						findPlayerPosition();
					}
				}
			}
		}
	}
	else if (Player::playerMoveRight(move)) {
		if (floorMap[playerLineY][playerLineX] == tempPlayer && playerCanMove == 1) {
			if (floorMap[playerLineY][playerLineX + 1]->getId()) {
				if (floorMap[playerLineY][playerLineX + 1]->getId() != '#') {
					tempEntity = floorMap[playerLineY][playerLineX + 1];
					checkEntity();
					if (playerCanMove == 1) {
						floorMap[playerLineY][playerLineX + 1] = tempPlayer;
						floorMap[playerLineY][playerLineX] = tempSpace;
						cout << "player moved right" << endl;
						findPlayerPosition();
					}
				}
			}
		}
	}
	playerCanMove = 1;
	playerInventory();
}

void Game::readFile(string fileName) {

	ifstream file;
	string lineIn;

	file.open(fileName.c_str());

	file >> arrayCol >> arrayRow;
	getline(file,lineIn);

	floorMap = new Entity**[arrayRow];
	for (int i = 0; i < arrayRow;  i++) {
		floorMap[i] = new Entity*[arrayCol];
		getline(file,lineIn);
		for (int j = 0; j < lineIn.length() && j < arrayCol; j++)
			floorMap[i][j] = charToEntity(lineIn.at(j));
		}
}

void Game::displayCurrentGame() {
	for (int i = 0; i < arrayRow; i++) {
		for (int j = 0; j < arrayCol; j++) {
			if (floorMap[i][j] == NULL)
				cout << ' ';
			else
				cout << floorMap[i][j]->getId();
		}
		cout << endl;
	}
}

void Game::findPlayerPosition(){
	playerLineY = findPlayerY();
	playerLineX = findPlayerX();
	cout << "found player Y: " << playerLineY << endl;
	cout << "found player X: " << playerLineX << endl;
}

int Game::findPlayerY(){
	for (int i = 0; i < arrayRow; i++) {
		for (int j = 0; j < arrayCol; j++) {
			if (floorMap[i][j] == tempPlayer){
				playerLineY = i;
			}
		}
	}
	return playerLineY;
}
int Game::findPlayerX(){
	for (int i = 0; i < arrayRow; i++) {
		for (int j = 0; j < arrayCol; j++) {
			if (floorMap[i][j] == tempPlayer){
				playerLineX = j;
			}
		}
	}
	return playerLineX;
}
bool Game::gameOver(){
	delete[] floorMap;
  return endGame;
}
