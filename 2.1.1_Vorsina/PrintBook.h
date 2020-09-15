
#ifndef PrintBook_h
#define PrintBook_h
#include <string>
#include <iostream>
#include "Book.h"
using namespace std;

class PrintBook : public Book {
private:
	int PrintPages;
public:
	PrintBook() : Book() {
		PrintPages = 0;
	}
	int getPrintPages() {
		return PrintPages;
	}
	void setName(string s) {
		Name = s;
	}
	void setPages(int p) {
		Pages = p;
		PrintPages = p / 16;
	}
};

#endif

