#include "Items.h"
#include <string>
#include <iostream>

using namespace std;


void Items::addItem(int unit, int amount, float price, string itemName){
	
}


void Items::printItem(int unit, int amount, float price, string itemName, int itemCount){
	for (int i = 0; i < itemCount; i++){
		cout << unit << " " << itemName << " " << price << " " << amount << endl;
	}
}