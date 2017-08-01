#include "Date.h"

using namespace std;

Date::Date(){
  day = 1;
  month = 1;
  year = 1;
}

Date::Date(int d, int m, int y){
  month = m;
  year = y;
  day = d;
}

void Date::printDate(char choice){
  if (choice == '1'){
    cout << "The date is " << day << "\ " << month << "\ " << year << endl;
  }
  else if (choice == 2){
    for (int i = 0; i < 12; i++){
      if (day == i){
        cout << "The date is " << day << "\ " << monthName[i] << "\ " << year;
      }
    }
  }
}
