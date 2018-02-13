#ifndef CAR_H
#define CAR_H
#include "Automobile.h"
class Car: public Automobile
{
private:
	int doors;
public:
	Car();
	Car(CString carMake, int carModel, int carMileage,double carPrice, int carDoors);
	int getDoors();
};
#endif