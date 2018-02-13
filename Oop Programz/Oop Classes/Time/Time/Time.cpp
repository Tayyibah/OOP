#include<iostream>
#include<iomanip>
#include "Time.h"
using namespace std;

Time::Time()
{
	hour=0;
	minute=0;
	second=0;
}

Time::~Time()
{
	hour=0;
	minute=0;
	second=0;
}

Time::Time(int hr,int min,int sec ) 
{
	setHour (hr);
	setMinute ( min ); 
	setSecond ( sec ); 
}

void Time::setHour(int h)
{ 
	if (h >= 0 && h <= 23) 
		hour=h;
	else 
		incHour(h) ;
}

void Time::setMinute ( int m )
{ 
	if (m >= 0 && m < 60)
		minute=m;
	else 
		incMin(m);
}

void Time::setSecond(int s)
{ 
	if (s >= 0 && s < 60) 
		second=s;
	else 
		incSec(s) ;
}

void Time::setTime ( int h, int m, int s )
{ 
	setHour ( h );
	setMinute ( m );
	setSecond(s);
}

int Time::getHour ( ) 
{
	return hour;
}

int Time::getMinute ( ) 
{
	return minute;
}

int Time::getSecond ( ) 
{
	return second;
}

void Time::display() 
{
	cout << hour << ":" << minute << ":" << second << endl;
}

void Time::printTwentyFourHourFormat()// print universal time
{ 
	getHour ();
	getMinute ();
	getSecond();
	display() ;
}

void Time::printTwelveHourFormat()   // print standard time
{
	getHour ();
	if(hour>12)
		hour=hour-12;
	else
		hour=hour;
		getMinute();
		getSecond() ;
		display() ;
}
void Time::incSec(int i)  // increment in the second of the calling time object // default increment is 1
{ 
	second = second + i;
	int min = 0;
	if (second >= 60)
	{
		min = min + (second / 60);
		second = second % 60;
		incMin(min);
	}
}

void Time::incMin(int i)   // increment in the minute of the calling time object // default increment is 1
{ 
	minute = minute + i; 
	int h = 0; 
	if (minute >= 60)
	{
		h= h + minute/ 60;
		minute = minute % 60;
		incHour(h);
	}
}

void Time::incHour(int i)  // increment in the hour of the calling time object // default increment is 1
{ 
	hour = hour + i;
	if (hour>=24) 
		hour=hour%24;
}

int Time::displayCurrentTime()
{ 
	time_t ttNow = time(NULL); 
	tm tmNow = *localtime(&ttNow); 
	cout << "The time now is : " << setfill('0'); 
	cout << setw(2) << tmNow.tm_hour << ":"; 
	cout << setw(2) << tmNow.tm_min << ":"; 
	cout << setw(2) << tmNow.tm_sec; 
	cout << setfill(' ') << endl; 
	return 0;
}

int Time::displayCurrentDateNTime()
{
	time_t now; 
	time(&now); 
	printf("%s", ctime(&now));
	return EXIT_SUCCESS;
}
//void Time::getTime(int &hours, int &minutes)
//{
//	cout << "Please enter the hour and minutes in 24-Hour format" << endl;
//input:
//	cin >> hours;
//	cin >> minutes;
//	if (hour <= 24 && hour >=0 && minute <= 60 && minute >= 0)
//		return;
//	else 
//	{
//		cout << "Error! Please enter a valid time.\n";
//		goto input;
//	}
//}

char Time::convertTime()
{
	if(hour > 12)
	{
		hour-= 12;
		return 'P';
	}
	else
	{
		return 'A';
	}
	
}

void Time::printTime(char display)
{
	if (minute < 10)
	{
		cout << "The time converted to a 12 hour format is: "
			 << hour<< ":0" << minute << " "<<display << "M" << endl;
	}
	else
	{
		cout << "The time converted to a 12 hour format is: "
			 << hour << ":" << minute << " "<<display<< "M" << endl;
	}
}

bool Time::isTimeSame( Time & t)
{
	bool found=false;
	if(t.second==second&&t.minute==minute&&t.hour==hour)
	{
		cout<<"Time is same "<<endl;
		found=true;
	}
	else
	{
		cout<<"Time is not same "<<endl;
		found=false;
	}
	return found;
}