#include "Truck.h"
#include "CString.h"
using namespace std;

Truck::Truck() :driveType(""),Automobile()
{ 
}
Truck::Truck(CString truckMake, int truckModel, int truckMileage, double truckPrice, CString truckDriveType) : Automobile(truckMake, truckModel,truckMileage, truckPrice),driveType(truckDriveType)
{
}
CString Truck::getDriveType()
{ 
	return driveType; 
}