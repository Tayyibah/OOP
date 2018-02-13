#include"ParkingMeter.h"
ParkingMeter::ParkingMeter()
{
	ParkedCar();
	purchasedAmount=0;
}
int ParkingMeter::purchasedAmountForParking()
{
	purchasedAmount=minutes.getNoOfMinutes()* 10;
	return purchasedAmount;
}
int ParkingMeter::getMinutes()
{
	return minutes.getNoOfMinutes();
}
ParkingMeter::~ParkingMeter()
{
	minutes.~ParkedCar();
	purchasedAmount=0;
}