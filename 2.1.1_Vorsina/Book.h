
#ifndef Book_h
#define Book_h
#include <string>
#include <iostream>
using namespace std;

class Book
{
protected:
	string Name;
	int Pages;
public:
	Book() {
		Name = '-';
		Pages = 0;
	}
	string getName() {
		return Name;
	}
	int getPages() {
		return Pages;
	}
	void Print() {
		cout << "Book: " << Name << ", p/" << Pages << "\n";
	}

};

#endif