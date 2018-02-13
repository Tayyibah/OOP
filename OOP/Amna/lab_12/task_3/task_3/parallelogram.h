#ifndef PARALLELOGRAM_H
#define PARALLELOGRAM_H
#include"quadrilateral.h"
class parallelogram:public quadrilateral
{
public:
	parallelogram(int, int, int, int, int, int, int, int);
	void parallel();
	void displayParallelogram();

};
#endif