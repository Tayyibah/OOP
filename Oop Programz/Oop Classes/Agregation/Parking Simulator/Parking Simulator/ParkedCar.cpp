#include"ParkedCar.h"

ParkedCar::ParkedCar()
{
	yearModel=0;
	make=" ";
	speed=0;
	color=" ";
	licenseN0=0;
	noOfMinutes=0;
}
ParkedCar::ParkedCar(int yrModel,char* mak,int v,char* col,int license,int noOfMin)
{
	yearModel=yrModel;
	make=mak;
	speed=v;
	color=col;
	licenseN0=license;
	noOfMinutes=noOfMin;
}
void ParkedCar::setMake(char* mak)
{
	make=mak;
}
void ParkedCar::setSpeed(int v)
{
	speed=v;
}
void ParkedCar::setColor(char * col)
{
	color=col;
}
void ParkedCar::setLicenseN0(int license)
{
	licenseN0=license;
}
void ParkedCar::setNoOfMinutes(int noOfMin)
{
	noOfMinutes=noOfMin;
}
char * ParkedCar::getColor()
{
	return color;
}
int ParkedCar::getLicenseN0()
{
	return licenseN0;
}
int ParkedCar::getNoOfMinutes()
{
	return noOfMinutes;
}
void ParkedCar::setYearModel(int yearModl)
{
	yearModel=yearModl;
}
int ParkedCar::getYearModel()
{
	return yearModel;
}
char* ParkedCar::getMake()
{
	return make;
}
int ParkedCar::getSpeed()
{
	return speed;
}
int ParkedCar::accelerate()
{
	speed=speed+5;
	return speed;
}
int ParkedCar::brake()
{
	speed=speed-5;
	return speed;
}
ParkedCar::~ParkedCar()
{
	yearModel=0;
	make=" ";
	speed=0;
	color=" ";
	licenseN0=0;
	noOfMinutes=0;
}