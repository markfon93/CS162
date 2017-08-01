#ifndef LIST_H
#define LIST_H
#include "Item.h"
#include <iostream>
#include <string>

class List{
  private:
    Item* shoppingCart;
    int arraySize;
    int itemCount;
    double total;


  public:
    List();
    Item newListItem();

    void setArraySize();
    int getArraySize();

    int buildArray();
    void fillArray(int listSize);
    void printList(int listSize);
    
    string setColWidthStr(string);
    string setColWidthDoub(double);

    void setTotal(int listSize);
    double getTotal();

    ~List();

};
#endif
