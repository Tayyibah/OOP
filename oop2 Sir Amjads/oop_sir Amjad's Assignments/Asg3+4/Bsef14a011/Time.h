#ifndef TIME_H
#define TIME_H
#include <iomanip> 
#include <cstdlib> 
#include <stdio.h>
#include <stdlib.h>
class Time
{
private:
	int milHour;
	int milSecond;
public:
	Time();
	~Time();
	Time(int hr, int sec);
	void setTime(int mlHour, int mlSecond);
	int getHour();
	int getStnHour();
	void setmilHour(int h);
	void setmilSecond(int s);
	int getmilSecond();
	void printTwelveHourFormat();
};
#endif