#ifndef DATE_H
#define DATE_H
#include <iostream>
#include <string>

using namespace std;

class Date {
  private:
    int month;
    string monthName[];
    int year;
    int day;

  public:
    Date();
    Date(int, int, int);
    void printDate(char);


};


#endif
