#ifndef DATE_H
#define DATE_H
#include "CString.h"
class Date
{
private:
	int day;
	int month;
	int year;
	static const int daysInMonth[13];
	static const char * nameOfMonth[13];
	bool isLeapYear(int);
	bool MonthWith30Days();
	bool MonthWith31Days();
	int noOfDigits(int)const;
public:
	Date();
	Date(int, int, int);
	void setDate(int, int, int);
	void setDay(int);
	void setMonth(int);
	void setYear(int);
	int getDay() const;
	int getMonth()const;
	int getYear()const;
	int calcPower(int num, int sq)const;
	void printFormat1()const;
	void printFormat2()const;
	void printFormat3()const;
	void incDay(int = 1);
	void incMonth(int = 1);
	void incYear(int = 1);
	CString getDateInFormat1()const;
	CString getDateInFormat2()const;
	CString getDateInFormat3()const;
	void display();
};
#endif