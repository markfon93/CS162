#ifndef ITEMS_H
#define ITEMS_H
#include <string>

using namespace std;

class Items {
	private:
		string itemName;
		int unit;
		int amount;
		float price;
		int itemCount;
		
	public:
		void addItem(int unit, int amount, float price, string itemName);
		void printItem(int unit, int amount, float price, string itemName, int itemCount);
		
	
	
};

#endif