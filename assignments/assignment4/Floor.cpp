#include "Floor.h"


Floor::Floor(){

}

bool Floor::createFloor(){
  ifstream floorMap("floor.txt", std::ios_base::in);

  if (!floorMap){
    cout << "error opening file" << endl;
    return 0;
  }
  else {
    return 1;
  }
}

void Floor::drawFloor(){
  ifstream floorMap("floor.txt", std::ios_base::in);

  for (int i = 0; !floorMap.eof(); ++i){
    cout << floorArray[i];
  }

}

void Floor::setArray(){
  ifstream floorMap("floor.txt", std::ios_base::in);
  readMap();
  cout << "array col is " << arrayCol << endl;
  cout << "array row is " << arrayRow << endl;

  floorArray = new char*[arrayCol];
  for (int i = 0; i < arrayCol; ++i){
    floorArray[i] = new char[arrayRow];
  }

  floorMap.close();
}

void Floor::readMap(){
  ifstream floorMap("floor.txt", std::ios_base::in);
  floorMap >> arrayRow;
  floorMap >> arrayCol;
  
  floorMap.close();
}

void Floor::textToArray(){
  ifstream floorMap("floor.txt", std::ios_base::in);
  if (createFloor() == 1){
    setArray();
    drawFloor();
  }
  else {
    cout << "Some error" << endl;
  }
    cout << sizeof(floorArray[arrayRow][arrayCol]) << endl;

  cout << endl;
}
