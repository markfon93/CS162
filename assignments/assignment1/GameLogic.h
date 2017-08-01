#ifndef GAMELOGIC_H
#define GAMELOGIC_H

class GameLogic {
  private:
    char gameBoardArray[3][3];

    int gameBoardXBorder[3];
    int gameBoardYBorder[3];

    int rows;
    int cols;

    bool playerXWin;
    bool playerOWin;

    bool endGame;
    bool soloGame;

    char gameChoice;
    char playerOne;

  public:
    bool soloMenu(bool soloGame);
    bool getPlayerMenu();

    void createGameBoard();
    void printGameBoard();

    void setPlaceX(int userInputX, int userInputY);
    void setPlaceO(int userInputX, int userInputY);

    bool checkIfEmpty(int userInputX, int userInputY);

    bool getPlayerTurn(bool playerTurn);
    bool getComputerTurn(bool computerTurn);
    bool isWinner();
};

#endif
