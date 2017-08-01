/*********************************************************************
** Program Filename:  Item.cpp
** Author:  Mark Fontaine
** Date:  07/17/2017

** Description: Receives and returns item data

** Input:       name of item, unit of item,
                number of units, price of unit

** Output:      name of item, unit of item,
                number of units, price of unit,
*********************************************************************/
#include "Item.h"

using namespace std;
/*********************************************************************
** Function:        Item
** Description:     Item constructor
** Parameters:      n/a
** Pre-Conditions:  name, unit, purchaseNum, price, subtotal declared
** Post-Conditions: name, unit, purchaseNum, price, subtotal have default values
*********************************************************************/
Item::Item(){
  name = "n/a";
  unit = "n/a";
  purchaseNum = 0;
  price = 0;
  subTotal = 0;
}
/*********************************************************************
** Function:        setName
** Description:     sets name value
** Parameters:      n/a
** Pre-Conditions:  name declared
** Post-Conditions: name has a value other than default
*********************************************************************/
void Item::setName(){
  string newName;
  cout << "input item name." << endl;
  cin >> newName;
  name = newName;
}
/*********************************************************************
** Function:        setUnit
** Description:     sets unit value
** Parameters:      n/a
** Pre-Conditions:  unit declared
** Post-Conditions: unit has a value other than default
*********************************************************************/
void Item::setUnit(){
  string newUnit;
  bool valid = false;
  while (valid == false){
    cout << "Input item unit ('lb', 'oz', or 'x')." << endl;
    cin >> newUnit;
    if (newUnit == "lb" || newUnit == "lbs" || newUnit == "x"
        || newUnit == "oz"  || newUnit == "ozs" ){
      valid = true;
    }
    else {
      cout << "Wrong input, try again..." << endl;
    }
  }
  unit = newUnit;
}
/*********************************************************************
** Function:        setPurchaseNum
** Description:     sets purchase amount
** Parameters:      n/a
** Pre-Conditions:  purchaseNum is declared
** Post-Conditions: purchaseNum has a value other than default
*********************************************************************/
void Item::setPurchaseNum(){
  int newPurchaseNum;
  cout << "Input number of items to buy." << endl;
  cin >> newPurchaseNum;
  purchaseNum = newPurchaseNum;
}
/*********************************************************************
** Function:        setPrice
** Description:     sets price
** Parameters:      n/a
** Pre-Conditions:  price is declared
** Post-Conditions: price has a value other than default
*********************************************************************/
void Item::setPrice(){
  double newPrice;
  cout << "Input item price" << endl;
  cin >> newPrice;
  price = newPrice;
}
/*********************************************************************
** Function:        setSubTotal
** Description:     sets the subtotal
** Parameters:      n/a
** Pre-Conditions:  subtotal, price, and purchaseNum are declared
** Post-Conditions: subtotal has a value other than default
*********************************************************************/
void Item::setSubTotal(){
  subTotal += price*purchaseNum;
}
/*********************************************************************
** Function:        getName
** Description:     gets name
** Parameters:      n/a
** Pre-Conditions:  name is set
** Post-Conditions: n/a
*********************************************************************/
string Item::getName(){
  return name;
}
/*********************************************************************
** Function:        getUnit
** Description:     gets unit
** Parameters:      n/a
** Pre-Conditions:  unit is set
** Post-Conditions: n/a
*********************************************************************/
string Item::getUnit(){
  return unit;
}
/*********************************************************************
** Function:        getPurchaseNum
** Description:     gets purchaseNum
** Parameters:      n/a
** Pre-Conditions:  purchaseNum is set
** Post-Conditions: n/a
*********************************************************************/
double Item::getPurchaseNum(){
  return purchaseNum;
}
/*********************************************************************
** Function:        getPrice
** Description:     gets price
** Parameters:      n/a
** Pre-Conditions:  price is set
** Post-Conditions: n/a
*********************************************************************/
double Item::getPrice(){
  return price;
}
/*********************************************************************
** Function:        getSubTotal
** Description:     gets subTotal
** Parameters:      n/a
** Pre-Conditions:  subTotal is set
** Post-Conditions: n/a
*********************************************************************/
double Item::getSubTotal(){
  return subTotal;
}
