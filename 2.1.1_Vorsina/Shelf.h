
#ifndef Shelf_h
#define Shelf_h
#include <string>
#include <iostream>
#include <vector>
#include "Book.h"
#include "PrintBook.h"
using namespace std;

class Shelf {
protected:
	vector<PrintBook> pbooks;
public:
	Shelf() {

	}
	void addBook(PrintBook pb) {
		pbooks.push_back(pb);
	}
	PrintBook getBook(int id) {
		if (id, pbooks.size() - 1) {
			return pbooks[id];
		}
		else {
			cout << "Error in Book ID! \n";
		}
	}
	void Print() {
		cout << "Shelf contents: \n";
			for (int i = 0; i < pbooks.size(); i++) {
				pbooks[i].Print();
			}
	}
};

#endif