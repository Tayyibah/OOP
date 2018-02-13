#ifndef AUTOMOBILE_H
#define AUTOMOBILE_H
#include "CString.h"


class Automobile
{
private:
	CString make;
	int model;
	int mileage;
	double price;
public:
	Automobile();
	Automobile(CString autoMake, int autoModel, int autoMileage, double autoPrice);
	CString getMake() const;
	int getModel() const;
	int getMileage() const;
	double getPrice() const;
};
#endif