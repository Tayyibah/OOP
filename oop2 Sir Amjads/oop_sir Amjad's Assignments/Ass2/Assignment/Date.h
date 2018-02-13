#ifndef DATE_H
#define DATE_H
#include<iostream>
using namespace std;
#include<cstdlib>
class Date
{

private:
	static const char * monthName[12];
	int  month;
	int date;
	int year;
public:

	Date();
	Date(int, int, int);
	int getMonth()const;
	int getDay()const;
	int getYear()const;
	void setMonth(int);
	void setDay(int);
	void setYear(int);
	void printDate();
	~Date();
};
#endif