#ifndef POLICEOFFICER_H
#define POLICEOFFICER_H
#include"ParkedCar.h"
#include"ParkingMeter.h"
#include"ParkingTicket.h"
class PoliceOfficer 
{
private:
	char *name;
	int badgeNumber;
	//ParkingTicket tick;
	ParkedCar minute;
public:
	PoliceOfficer();
	PoliceOfficer(char *name,int badgeNumber);
	void setName(char *nam);
	void setbadgeNumber(int badgeNum);
	bool expiryTime(int min);
	char *getName();
	int getbadgeNumber();
	//int generatingParkingTicket(); //if expiryTime()
	//bool operator<(ParkedCar &right);
	~PoliceOfficer();
};
#endif

