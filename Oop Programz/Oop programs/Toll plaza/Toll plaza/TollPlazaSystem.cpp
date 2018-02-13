#include<iostream>
#include"TollPlazaSystem.h"
#include"TollPlaza.h"
using namespace std;

void TollPlazaSystem::startApplication()
{
	TollPlaza tp(1,"Thokar Niaz Toll Plaza", 10000);
	char choice = '0';
	while(true)
	{
		cout<<"Press 1 to Charge Vehicle\n"<<"Press 2 to see Collected Toll\n"<<"Press 3 to Start New Day\n"<<"Press 0 to Shut Down System ";
		cin.get(choice);
		cin.ignore();
		switch(choice)
		{
			case '1':// to charge car
			{
				cout<<"\nEnter Vehicle Type :\n"<<"\t 1 for Car\n"<<"\t 2 for Bike\n"<<"\t 3 for Bus\n"<<"\t 4 for Heavy Duty Truck\n" <<"\t 5 for Light Duty Truck ";
				char vType='0';
				cin.get(vType);
				cin.ignore();
				tp.chargeVehicle(vType - '0');
				if (tp.getCollectedTollToday()>=tp.getMaxToll())
					cout<<"\n\nCongratulations: You achieved the target today :)\n";
			}
			break;
			case '2'://display collected toll so far
			{
				cout<<"\n\tCollected Toll Today: "<<tp.getCollectedTollToday()<<"\n\n";
			}
			break;
			case '3'://reset: to start new day
			{
				tp.resetTollPlaza();
				cout<<"\n\n\tGood Luck for Today :)\n\n";
			}
			break;
			case '0'://To Exit
			{
				exit(0);
			}
			break;
		}
	}
}