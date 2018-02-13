#include<iostream>
using namespace std;
#include"CString.h"
#include"Date.h"
#include"Time.h"

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
void Time::setHour ( int h )
{
	if(h>=0&&h<=23)
		hour=h;
}
void Time::setMinute ( int m )
{
	if(m>=0&&m<60)
		minute=m;
}
void Time::setSecond ( int s )
{
	if(s>=0&&s<60)
		second=s;
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
void Time::incSec( int i )  // increment in the second of the calling time object // default increment is 1
{
	second=second+i;
	if(second>=60)
	{
		minute =minute+second/60;
	}
	if(minute>=60)
	{
		hour=hour+minute /60;
	}
	if(hour>23)
	{
		hour=hour%24;
		minute=minute%60;
		second=second%60;
	}
}
void Time::incMin( int i)   // increment in the minute of the calling time object // default increment is 1
{
	minute=minute+i;
	if(minute>=60)
	{
		minute=minute+second/60;
	}
	if(hour>23)
	{
		hour=hour%24;
	}
	minute=minute%60;
}
void Time::incHour( int i )  // increment in the hour of the calling time object // default increment is 1
{
	hour=hour+i;
	if(hour>23)
	{
		hour=hour%24;
	}
}
	