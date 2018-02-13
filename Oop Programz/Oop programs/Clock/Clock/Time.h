#ifndef TIME_H
#define TIME_H
#include "CString.h"
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
	void setTime ( int h, int m, int s );
	int getHour ( );
	int getMinute ( );
	int getSecond ( );
	void printTwentyFourHourFormat();
	void printTwelveHourFormat();
	void incSec( int i= 1 ) ;
	void incMin( int i= 1 );
	void incHour( int i=1 ) ;
};
#endif