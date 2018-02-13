#ifndef PARKINGMETER_H
#define PARKINGMETER_H
#include"ParkedCar.h"
class ParkingMeter 
{
private:
	ParkedCar minutes;
	int purchasedAmount;
public:
	ParkingMeter();
	int getMinutes();
	int purchasedAmountForParking();
	~ParkingMeter();
};
#endif

