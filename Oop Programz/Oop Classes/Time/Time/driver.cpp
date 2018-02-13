#include<iostream>
#include "Time.h"
using namespace std;
int main()
{
	Time t;
	Time t1;
	t.display() ;
	t.setHour(23);
	t.setMinute ( 45 );
	t.setSecond(87);
	cout<<"Twenty Four Hour Format: ";
	t.printTwentyFourHourFormat();
	cout<<"Twelve Hour Format: ";
	t.printTwelveHourFormat() ;
	t.incSec(1) ;
	t.incMin(1);
	t.incHour(1) ;
	cout<<"Twelve Hour Format: ";
	t.printTwelveHourFormat() ;
	cout<<"Twenty Four Hour Format: ";
	t.printTwentyFourHourFormat();
	t.displayCurrentTime();
	t.displayCurrentDateNTime();
	char display = ' ';
	cout << "---------------------------------------------------------" << endl;
	cout << "            24-Hour to 12-Hour Time Converter            " << endl;
	cout << "---------------------------------------------------------" << endl;
	display = t.convertTime();
	t.printTime(display);
	t.isTimeSame(t1);
	return 0;
}