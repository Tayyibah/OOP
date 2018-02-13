#include"PoliceOfficer.h"
PoliceOfficer::PoliceOfficer()
{
	name=" ";
	badgeNumber=0;
}
PoliceOfficer::PoliceOfficer(char *nam,int badgeNum)
{
	name=nam;
	badgeNumber=badgeNum;
}
void PoliceOfficer::setName(char *nam)
{
	name=nam;
}
void PoliceOfficer::setbadgeNumber(int badgeNum)
{
	badgeNumber=badgeNum;
}
bool PoliceOfficer::expiryTime(int min)
{	
	if(min > minute.getNoOfMinutes())
	{
		return true;
	}
	return false;
}

//bool PoliceOfficer::operator<(ParkedCar &right)
//{
//	if()
//}
char *PoliceOfficer::getName()
{
	return name;
}
int PoliceOfficer::getbadgeNumber()
{
	return badgeNumber;
}
/*int PoliceOfficer::generatingParkingTicket() 
{
	if (expiryTime( minute.getNoOfMinutes()))
		return tick.getTTicket();
}*/
PoliceOfficer::~PoliceOfficer()
{
	name=" ";
	badgeNumber=0;
}