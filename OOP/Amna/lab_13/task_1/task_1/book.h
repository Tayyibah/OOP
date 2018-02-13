#include"Media.h"
#ifndef BOOK_H
#define BOOK_H

class Book : public Media
{
protected:
	char *author;
	char *ISBN;
public:
	Book();
	Book(char*, char*, char*);
	void display();
	~Book();
};


#endif