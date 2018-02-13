#include<iostream>
#ifndef TIME_H
#define TIME_H

class Time
{
private:
	int hour;
	int min;
	int sec;
public:
	Time();
	Time(int, int, int);
	void setTime(int, int, int);
	int getHour() const;
	int getMin() const;
	int getSec() const;
	void print();


};

#endif