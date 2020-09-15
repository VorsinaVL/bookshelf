#include <string>
#include <iostream>
#include "Book.h"
#include "PrintBook.h"
#include "Shelf.h"
#include "BookShelf.h"
using namespace std;

int main(int argc, char** argv) {
	setlocale(0, "rus");
	Book a;
	a.Print();
	int n;
	cout << "Enter number of books \n";
	cin >> n;
	PrintBook* books = new PrintBook[n];
	for (int i = 0; i < n; i++) {
		cout << "Enter book #" << i + 1<< " Name: \n";
		string name;
		cin >> name;
		cout << "Enter book #" << i + 1 << " Pages: \n";
		int p;
		cin >> p;
		PrintBook pbook;
		pbook.setName(name);
		pbook.setPages(p);
		books[i] = pbook;
	}
	for (int i = 0; i < n; i++) {
		books[i].Print();
	}
	return 0;
};
