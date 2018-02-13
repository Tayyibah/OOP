#include"Car.h"

Car::Car()
{
	yearModel=0;
	make=" ";
	speed=0;
}
Car::Car(int yrModel,CString mak,int v)
{
	yearModel=yrModel;
	make=mak;
	speed=v;
}
void Car::setYearModel(int yrModel)
{
	yearModel=yrModel;
}
void Car::setMake(CString mak)
{
	make=mak;
}
void Car::setSpeed(int v)
{
	speed=v;
}
int Car::getYearModel()
{
	return yearModel;
}
CString Car::getMake()
{
	return make;
}
int Car::getSpeed()
{
	return speed;
}
int Car::accelerate()
{
	speed=speed+5;
	return speed;
}
int Car::brake()
{
	speed=speed-5;
	return speed;
}
Car::~Car()
{
	yearModel=0;
	make=" ";
	speed=0;
}