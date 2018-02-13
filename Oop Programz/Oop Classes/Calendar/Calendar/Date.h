#ifndef DATE_H
#define DATE_H
#include <iomanip> 
#include <cstdlib> 
#include <ctime>
#include <stdio.h> 
#include <time.h> 
#include "CString.h"
class Date
{
private:
	static const int monthDays[12];
	static const char * monthName[12];
	bool isLeapYear(int);
	bool DaysAre30();
	bool DaysAre31();
public:
	int day;
	int month;
	int year;
	Date();
	~Date();
	Date(int, int, int);
	int displayCurrentDate();
	int changeCurrentDate(int i);
	void setDate(int, int, int);
	void setDay(int);
	void setMonth(int);
	void setYear(int);
	void setDate();
	int getDay() ;
	int getMonth();
	int getYear();
	void printDateInFormat1()const;
	void printDateInFormat2()const;
	void printDateInFormat3()const;
	void incDay(int = 1);
	void incMonth(int = 1);
	void incYear(int = 1);
	void display();
};
#endif