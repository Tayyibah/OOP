#ifndef TIME_H
#define TIME_H
#include "CString.h"
#include <iomanip> 
#include <cstdlib> 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctime>
class Time
{
private:
	int hour;
	int minute;
	int second;
public:
	Time();
	~Time();
	Time(int hr,int min,int sec );
	void setHour ( int h );
	void setMinute ( int m );
	void setSecond ( int s );
	int displayCurrentDateNTime();
	void setTime ( int h, int m, int s );
	void setCurrentTime();
	int displayCurrentTime();
	int getHour ( );
	int getMinute ( );
	int getSecond();
	int changeCurrentTime(int i);
	void printTwentyFourHourFormat();
	void printTwelveHourFormat();
	void incSec( int i= 1 ) ;
	void incMin( int i= 1 );
	void incHour( int i=1 ) ;
	void display();
};
#endif