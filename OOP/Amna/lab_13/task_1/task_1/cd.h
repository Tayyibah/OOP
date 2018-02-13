#ifndef CD_H
#define CD_H
#include"media.h"
class CD : public Media
{
private:
	int capacity;
public:
	CD();
	CD(char *,int);
	void display();
};
#endif