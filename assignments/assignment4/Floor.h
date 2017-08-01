#ifndef FLOOR_H
#define FLOOR_H
#include <iostream>
#include <string>
#include <fstream>

using namespace std;


class Floor {
  private:
    char floorTile;
    int arrayRow;
    int arrayCol;
    //char floorMap;
    char** floorArray;

  public:
    Floor();

    bool createFloor();
    void drawFloor();
    void readMap();
    void setArray();
    void textToArray();

};
#endif
