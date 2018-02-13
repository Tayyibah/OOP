#ifndef RECTANGLE_H
#define RECTANGLE_H
#include"parallelogram.h"
class rectangle: public parallelogram
{
public:
	rectangle(int,int,int,int,int,int,int,int);
	void isRectangle();
	void displayRectangle();
};
#endif