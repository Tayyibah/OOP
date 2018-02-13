#ifndef TIME_H
#define TIME_H
#include <iomanip> 
#include <cstdlib> 
#include <stdio.h>
#include <stdlib.h>
class Time 
{
private:
	int hour;
	int minute;
	int second;
public:
	Time();
	~Time() ;
	Time(int hr,int min,int sec );
	void display() ;
	void setHour(int h);
	void setMinute ( int m );
	void setSecond(int s);
	void incSec(int i) ;
	void incMin(int i);
	void incHour(int i) ;
	int getHour ();
	int getMinute (); 
	int getSecond();
	void setTime ( int h, int m, int s );
	void printTwentyFourHourFormat();
	void printTwelveHourFormat() ;
	int displayCurrentTime();
	int displayCurrentDateNTime();
	//void getTime(int &hours, int &minutes);
	char convertTime();
	void printTime(char display);
	bool isTimeSame( Time & );
};
#endif