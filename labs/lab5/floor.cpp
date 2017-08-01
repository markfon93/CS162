
#include <iostream>
#include <fstream>

using namespace std;


class floor {
  private:
    char *array;

  public:
    void read_line(ifstream& input, char **array, int &chars);
};

void floor::read_line(ifstream& input, char **array, int &chars){
  input.open("floor.txt");

  if (!input.i_open()){
    cout <<"Error file not found" << endl;
  }

  *array = new char[chars];

  input.get(c);

    for (int i = 0; i < chars; i++){
      input.get(c);
      (*array)[i] = c;
    }

}
//see example main on screen
