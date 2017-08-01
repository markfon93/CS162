#ifndef GAMELOGIC_H
#define GAMELOGIC_H

class GameLogic {
  private:
   char gameBoardArray[9];
	/*char gameBoardArray[3][3];

  int gameBoardXBorder[3];
  int gameBoardYBorder[3];
  bool AIPlayerTurn;
  */

  bool playerXWin;
  bool playerOWin;
  bool endGame;

  public:
    void createGameBoard();
    void setPlaceX(int userInput);
    void setPlaceO(int userInput);
	  void printGameBoard();
    bool isWinner();
// void setPlace(int userInputX, int userInputY);
};

#endif
