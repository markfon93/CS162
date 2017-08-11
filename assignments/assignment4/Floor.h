#ifndef FLOOR_H
#define FLOOR_H

#include "Game.h"

class Floor{
  protected:

  private:

  public:
    Floor();
    bool createFloor();
    void drawFloor();
    void readMapSize();
    void setArray();
    void textToArray();

};
#endif

/*
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, const char *argv[]) {
    ifstream myFile;
    string line;
    vector<string> lines;



    myFile.open("floor.txt");
    while (getline(myFile, line)) {
        lines.push_back(line);
    }
    myFile.close();

    for (int i = 0; i < lines.size(); ++i) {
        string row = lines[i];

        for (int j = 0; j < row.size(); ++j) {
            cout << row[j];
        }

        cout << endl;
    }
}
*********************************************
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, const char *argv[]) {
    ifstream myFile;
    string line;
    string *lines = new string[sizeof(myFile)];
    int numberOfLines;



    myFile.open("floor.txt");
    numberOfLines = 0;
    while (getline(myFile, line)) {
        lines[numberOfLines] = line;
        numberOfLines += 1;
    }
    myFile.close();

    for (int i = 0; i < numberOfLines; ++i) {
        string row = lines[i];

        for (int j = 0; j < row.size(); ++j) {
            cout << row[j];
        }

        cout << endl;
    }
}
*/
