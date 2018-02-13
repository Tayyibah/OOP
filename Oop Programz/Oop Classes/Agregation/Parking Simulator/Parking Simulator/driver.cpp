#include<iostream>
#include"ParkedCar.h"
#include"ParkingMeter.h"
#include"ParkingTicket.h"
#include"PoliceOfficer.h"
using namespace std;
int main()
{
	ParkedCar parkedCar;
	ParkedCar parkCar(2015,"Mehran",80,"Red",123,40);
	parkedCar. setYearModel(2015);
	parkedCar. setMake("Mehran");
	parkedCar. setSpeed(80);
	parkedCar. setColor("Red");
	parkedCar. setLicenseN0(123);
	parkedCar. setNoOfMinutes(40);
	parkedCar. brake(); 
	cout<<parkedCar. getColor()<<endl;
	cout<<parkedCar. getLicenseN0()<<endl;
	cout<<parkedCar. getNoOfMinutes()<<endl;
	cout<<parkedCar. getYearModel()<<endl;
	cout<<parkedCar. getMake()<<endl;
	cout<<parkedCar. getSpeed()<<endl;
	cout<<parkedCar. accelerate()<<endl;
	cout<<"***************************************************"<<endl;
	ParkingMeter parkingMeter;
	parkingMeter.getMinutes();
	cout<<parkingMeter. purchasedAmountForParking()<<endl;
	cout<<"***************************************************"<<endl;
	ParkingTicket parkingTicket;
	parkingTicket.reportParkedCar();
//	parkingTicket.reportPoliceOfficer();
	parkingTicket. setFine(120);
	parkingTicket. getFine();
	cout<<"***************************************************"<<endl;
	PoliceOfficer police;
	PoliceOfficer policeOfficer("Ieza",3);
	policeOfficer. setName("Ieza");
	policeOfficer. setbadgeNumber(3);
	policeOfficer. expiryTime(parkedCar. getNoOfMinutes());
	cout<<policeOfficer. getName()<<endl;
	cout<<policeOfficer. getbadgeNumber()<<endl;
//	cout<<policeOfficer. generatingParkingTicket()<<endl; //if expiryTime()
	return 0;
}