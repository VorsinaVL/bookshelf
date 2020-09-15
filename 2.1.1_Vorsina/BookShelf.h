
#ifndef BookShelf_h
#define BookShelf_h
#include <string>
#include <iostream>
#include <vector>
#include "Book.h"
#include "PrintBook.h"
#include "Shelf.h"
using namespace std;

class BookShelf {
protected:
	vector<Shelf> shelfs;
public:
	void addBook(PrintBook pb, int shelf_id) {
		if (shelf_id < shelfs.size() - 1) {
			shelfs[shelf_id].addBook(pb);
		}
		else {
			cout << "Error in Shelf ID! \n";
		}
	}
	void addShelf() {
		Shelf shelf;
		shelfs.push_back(shelf);
	}
	void Print() {
		cout << "BookShelf info: " << shelfs.size() << ":\n";
		for (int i = 0; i < shelfs.size(); i++) {
			cout << "\t Shelf #" << i + 1 << "\n";
			shelfs[i].Print();
		}
	}
};

#endif