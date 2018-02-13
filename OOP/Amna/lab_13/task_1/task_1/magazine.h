#include"Media.h"
#ifndef MAGAZINE_H
#define MAGAZINE_H

class Magazine : public Media
{
protected:
	char *month;
	int year;
public:
	Magazine();
	Magazine(char*, char*, int);
	int getYear();
	void display();
	~Magazine();
};


#endif