/*********************************************************************
** Program Filename:
** Author:  Mark Fontaine
** Date:  07/17/2017
** Description: Creates an item that is added to an
                array then prints the array.

** Input:       name of item, unit of item,
                number of units, price of unit

** Output:      name of item, unit of item,
                number of units, price of unit, total
*********************************************************************/
#include "List.h"

/*********************************************************************
** Function:        List Default Constructor
** Description:     Sets total to zero as well as arraySize to zero.
** Parameters:      N/A
** Pre-Conditions:  N/A
** Post-Conditions: N/A
*********************************************************************/
List::List(){
  total = 0;
  arraySize = 10;
}
/*********************************************************************
** Function:        newListItem
** Description:     Calls Item class and calls Item set functions
** Parameters:      N/A
** Pre-Conditions:  Name, unit, purchaseNum, price, and subtotal are declared in Item class.
** Post-Conditions: Item name, unit, purchaseNum, price, and subtotal are set.
*********************************************************************/
Item List::newListItem(){
  Item newItem;
  newItem.setName();
  newItem.setUnit();
  newItem.setPurchaseNum();
  newItem.setPrice();
  newItem.setSubTotal();
  return newItem;
}
/*********************************************************************
** Function:        setArraySize
** Description:     Sets arraySize that is used by most List functions
** Parameters:
** Pre-Conditions:  int arraySize is declared
** Post-Conditions: arraySize is set.
*********************************************************************/
void List::setArraySize(){
  cout << "How many items do you need to buy? (Enter an int, " <<
    "WARNING: MAX of 10 items. Integers only.)" << endl;
  cin >> arraySize;
  while (cin.fail()){
    cout << "MAX of 10 items. Integers only." << endl;
    cin.clear();
    cin.ignore(256,'\n');
    cin >> arraySize;
  }
}
/*********************************************************************
** Function:        getArraySize
** Description:     returns the arraySize
** Parameters:
** Pre-Conditions:  arraySize is declared and set
** Post-Conditions: N/A
*********************************************************************/
int List::getArraySize(){
  return arraySize;
}
/*********************************************************************
** Function:        buildArray
** Description:     calls setArraySize and getArraySize
** Parameters:
** Pre-Conditions:  setArraySize and getArraySize have valid outputs
** Post-Conditions: arraySize has a value
*********************************************************************/
int List::buildArray(){
  setArraySize();
  getArraySize();
}
/*********************************************************************
** Function:        fillArray
** Description:     builds an array and fills it with objects
** Parameters:      listSize
** Pre-Conditions:  arraySize is set, shoppingCart is an Item pointer array
** Post-Conditions: shoppingCart contains Item objects
*********************************************************************/
void List::fillArray(int listSize){
    arraySize = listSize;
    //destroying and not rebuilding array of objects
    shoppingCart = new Item[arraySize+1];
    for (int i = 0; i < arraySize; i++){
      shoppingCart[i] = newListItem();
    }
}
/*********************************************************************
** Function:         setTotal
** Description:      sets the total
** Parameters:       size of the array
** Pre-Conditions:   arraySize is declared, getSubTotal returns current subtotal
** Post-Conditions:  total is updated to current value
*********************************************************************/
void List::setTotal(int listSize){
  arraySize = listSize;
  for (int i = 0; i < arraySize; i++){
    total += shoppingCart[i].getSubTotal();
  }
}
/*********************************************************************
** Function:        getTotal
** Description:     returns the total
** Parameters:      n/a
** Pre-Conditions:  total is set
** Post-Conditions: n/a
*********************************************************************/
double List::getTotal(){
  return total;
}
/*********************************************************************
** Function:        printList
** Description:     prints the array and sets the column widths
** Parameters:      size of list
** Pre-Conditions:  size is declared as int, shoppingCart contains objects
** Post-Conditions: size is set
*********************************************************************/
void List::printList(int listSize){
  int size = listSize;
  cout << "Item        |Unit        |Amount      |Price       |Sub-Total       " << endl;
  cout << "----------------------------------------------------------------" << endl;
  for (int i = 0; i < size; i++){
    cout << setColWidthStr(shoppingCart[i].getName()) << "|"
    << setColWidthStr(shoppingCart[i].getUnit()) << "|"
    << setColWidthDoub(shoppingCart[i].getPurchaseNum()) << "|"
    << setColWidthDoub(shoppingCart[i].getPrice()) <<  "|"
    << setColWidthDoub(shoppingCart[i].getSubTotal()) << endl;
  }
  cout << "                                     Your total is: "<< getTotal() << endl;
}
/*********************************************************************
** Function:        setColWidthStr
** Description:     sets the column width for string attributes
** Parameters:      the string attributes of Item
** Pre-Conditions:  itemAtt must be < 12 characters
** Post-Conditions: newSize has original string + needed spaces
*********************************************************************/
string List::setColWidthStr(string itemAtt){
  string newSize;
  for (int i = itemAtt.length(); i < 12; i++){
    itemAtt += " ";
  }
  newSize = itemAtt;
  return newSize;
}
/*********************************************************************
** Function:        setColWidthDoub
** Description:     sets column width for double attributes
** Parameters:      double attributes of Item
** Pre-Conditions:  itemAtt must be < 12, requires stdio.h, sstream and define SSTR
** Post-Conditions: newSize is read as a string with the value of itemAtt
*********************************************************************/
string List::setColWidthDoub(double itemAtt){
  string newSize = SSTR(itemAtt);
  (SSTR(itemAtt).c_str());
  for (int i = newSize.length(); i < 12; i++){
    newSize += " ";
  }
  return newSize;
}
/*********************************************************************
** Function:        ~List
** Description:     destructor
** Parameters:      n/a
** Pre-Conditions:  n/a
** Post-Conditions: n/a
*********************************************************************/
List::~List(){
  delete [] shoppingCart;
}
