#ifndef MEDIA_H
#define MEDIA_H
#include<iostream>

class Media
{
protected:
	char *title;
public:
	Media();
	Media(char *);
	virtual void display() = 0;
	~Media();
};



#endif