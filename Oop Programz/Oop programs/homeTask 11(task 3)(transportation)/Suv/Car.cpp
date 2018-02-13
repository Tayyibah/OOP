#include "Car.h"
#include "CString.h"

Car::Car() : Automobile()
{
	doors=0;
}
Car::Car(CString carMake, int carModel, int carMileage,double carPrice, int carDoors) :Automobile(carMake, carModel, carMileage, carPrice)
{ 
	doors = carDoors; 
}
int Car::getDoors()
{
	return doors;
}