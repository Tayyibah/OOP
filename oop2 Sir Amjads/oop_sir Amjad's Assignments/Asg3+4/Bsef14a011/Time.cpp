#include<iostream>
#include<iomanip>
#include "Time.h"
using namespace std;

Time::Time()
{
	milHour = 0;
	milSecond = 0;
}

Time::~Time()
{
	milHour = 0;
	milSecond = 0;
}

Time::Time(int hr, int sec)
{
	setmilHour(hr);
	setmilSecond(sec);
}

void Time::setmilHour(int h)
{
	if (h >= 0 && h <= 2359)
		milHour = h;
	
}
void Time::setmilSecond(int s)
{
	if (s >= 0 && s < 60)
		milSecond = s;
	
}

void Time::setTime(int mlHour, int mlSecond)
{
	setmilHour(mlHour);
	setmilSecond(mlSecond);
}

int Time::getHour()
{
	return milHour;
}
int Time::getStnHour()
{
	getHour();
	if (milHour>12)
		milHour = milHour - 12;
	else
		milHour = milHour;
	int min = milHour % 100;
	getmilSecond();
	return milHour;
}

int Time::getmilSecond()
{
	return milSecond;
}


void Time::printTwelveHourFormat()   // print standard time
{
	getHour();
	int min = milHour % 100;
	milHour = milHour / 100;
	if (milHour>12)
		milHour = milHour - 12;
	else
		milHour = milHour;
	getmilSecond();
	cout << getHour() << ":" << min << ":" << getmilSecond() << endl;
}