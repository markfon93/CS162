#ifndef LIST_H
#define LIST_H
#include <string>

using namespace std;

class List {
	private:
		string shoppingCart[10];
		int cartSize;
		
	public:
		void printList(int cartSize);
	
};

#endif