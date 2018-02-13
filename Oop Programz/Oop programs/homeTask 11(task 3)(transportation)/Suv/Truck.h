#ifndef TRUCK_H
#define TRUCK_H
#include "Automobile.h"
#include "CString.h"
class Truck : public Automobile
{
private:
	CString driveType;
public:
	Truck();
	Truck(CString truckMake, int truckModel, int truckMileage, double truckPrice, CString truckDriveType);
	CString getDriveType();
};
#endif