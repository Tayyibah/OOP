#ifndef SQUARE_H
#define SQUARE_H
#include"parallelogram.h"
class square:public parallelogram
{
public:
	square(int,int,int,int,int,int,int,int);
	void isSquare();
	void displaySquare();
};
#endif