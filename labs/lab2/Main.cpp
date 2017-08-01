#include "Items.h"
#include "List.h"
#include <iostream>
#include <string>

using namespace std;

int main(){
		string itemName;
		int unit;
		int amount;
		float price;
		int itemCount;
		
		cin >> itemName;
		cout << endl;
		
		cin >> unit;
		cout << endl;
		cin >> amount;
		cout << endl;
		cin >> price;
		cout << endl;
		itemCount++;
		Items newItem;
		
		newItem.addItem(unit, amount, price, itemName);
		newItem.printItem(unit, amount, price, itemName, itemCount);

	return 0;
}