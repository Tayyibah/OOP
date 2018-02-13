#ifndef PARKINGTICKET_H
#define PARKINGTICKET_H
#include"ParkedCar.h"
#include"PoliceOfficer.h"
class ParkingTicket 
{
private:
	ParkedCar parkedCar;
	//PoliceOfficer policeOfficer;
	int fine;
	int ticket;
public:
	void setFine(int min);
	int getFine();
	void reportParkedCar();
	int getTTicket();
	//void reportPoliceOfficer();
};
#endif

