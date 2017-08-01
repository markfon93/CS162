#ifndef ITEM_H
#define ITEM_H
#include <iostream>
#include <string>
#include <sstream>
#include <stdio.h>

#define SSTR(x) static_cast< std::ostringstream & >(\
        (std::ostringstream() << std::dec << x)).str()

using namespace std;

class Item {
  private:
    Item* item;
    string name;
    string unit;
    int purchaseNum;
    double price;
    double subTotal;



  public:
    Item();
    void setName();
    void setUnit();
    void setPurchaseNum();
    void setPrice();
    void setSubTotal();
    string getName();
    string getUnit();
    double getPurchaseNum();
    double getPrice();
    double getSubTotal();




};
#endif
