#include<iostream>
using namespace std;
#include"CString.h"
#include"Date.h"
#include"Time.h"
#include<Windows.h>
int Time::displayCurrentTime()
{
	tm time;
	_getsystime(&time);
	int h = time.tm_hour;
	int mn = time.tm_min;
	int s = time.tm_sec;
	setTime(h, mn, s);
	cout << getHour()  << ":" << getMinute()  << ":" << getSecond()  << endl;
	return EXIT_SUCCESS;
}
int Time::changeCurrentTime(int i)
{
	tm time;
	_getsystime(&time);
	int d = time.tm_mday;
	int m = time.tm_mon + 1;
	int y = time.tm_year + 1900;
	int h = time.tm_hour;
	int mn = time.tm_min;
	int s = time.tm_sec;
	setTime(h, mn, s);
	cout << getHour() + i << ":" << getMinute() + i << ":" << getSecond() + i << endl;
	return EXIT_SUCCESS;
}

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
void Time::display()
{
	cout << hour << ":" << minute << ":" << second << endl;
}

void Time::setHour(int h)
{
	if (h >= 0 && h <= 23)
		hour = h;
	else
		hour = 0;
}
void Time::setMinute ( int m )
{
	if (m >= 0 && m < 60)
		minute = m;
	else
		minute = 0;
}
void Time::setSecond(int s)
{
	if (s >= 0 && s < 60)
		second = s;
	else
		second = 0;
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
void Time::setCurrentTime()
{
	SYSTEMTIME lt;
	GetLocalTime(&lt);
	setHour(lt.wHour);
	setMinute(lt.wMinute);
	setSecond(lt.wSecond);
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
	if (hour>23)
	{
		hour = hour % 24;
	}
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
void Time::printTwentyFourHourFormat()// print universal time
{
	getHour ();
	getMinute ();
	getSecond();
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
}

int Time::displayCurrentDateNTime()
{
	time_t now;
	time(&now);
	printf("%s", ctime(&now));
	return EXIT_SUCCESS;
}
