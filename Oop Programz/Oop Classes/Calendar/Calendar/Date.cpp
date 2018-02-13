#include<iostream>
#include<cmath>
using namespace std;
#include"CString.h"
#include"Date.h"
#include<Windows.h>
#include"Time.h"
Date::Date()
{
	day = 0;
	month = 0;
	year = 0;
}
int Date::changeCurrentDate(int i)
{
	tm date;
	_getsystime(&date);
	int d = date.tm_mday;
	int m = date.tm_mon + 1;
	int y = date.tm_year + 1900;
	setDate(d, m, y);
	cout << getDay() + i << "/" <<getMonth() + i << "/" << getYear() + i << endl;
	return EXIT_SUCCESS;
}

int Date::displayCurrentDate()
{
	tm date;
	_getsystime(&date);
	int d = date.tm_mday;
	int m = date.tm_mon + 1;
	int y = date.tm_year + 1900;
	setDate(d, m, y);
	cout << getDay() << "/" <<getMonth() << "/" << getYear() << endl;
	return EXIT_SUCCESS;
}

Date::Date(int d, int m, int y)
{
	setYear(y);
	setMonth(m);
	setDay(d);
}

void Date::setDate(int d, int m, int yr)
{
	day = d;
	month = m;
	year = yr;
}

void Date::setDay(int d)
{
	if (DaysAre30())
	{
		if (d >= 1 && d <= 30)
			day = d;
		else
			day = 1;
	}
	else if (DaysAre31())
	{
		if (d >= 1 && d <= 31)
			day = d;
		else
			day = 1;
	}
	else
	{
		if (isLeapYear(year))   
		{
			if (d >= 1 && d <= 29)
				day = d;
			else
				day = 1;
		}
		else
		{
			if (d >= 1 && d <= 28)
				day = d;
			else
				day = 1;
		}
	}
}

void Date::setMonth(int mon)
{
	if (mon >= 1 && mon <= 12)
		month = mon;
	else
		month = 1;
}

void Date::setYear(int yr)
{
	if (yr >= 1900 && yr <= 3000)
		year = yr;
	else
		year = 1900;
}

int Date::getDay()
{
	return day;
}

int Date::getMonth()
{
	return month;
}

int Date::getYear()
{
	return year;
}

bool Date::isLeapYear(int yr)
{
	if (yr % 4 == 0 && yr % 100 != 0)
	{
		if (yr % 400 == 0)
			return true;
		else
			return false;
	}
	else
		return false;
}

bool Date::DaysAre31()
{
	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
		return true;
	else
		return false;
}

bool Date::DaysAre30()
{
	if (month == 4 || month == 6 || month == 9 || month == 11)
		return true;
	else
		return false;
}

void Date::printDateInFormat1()const
{
	cout << day << "\\" << month << "\\" << year << endl;
}

void Date::printDateInFormat2()const
{
	cout << monthName[month] << " " << day << "," << year << endl;
}

void Date::printDateInFormat3()const
{
	cout << day << " " << monthName[month] << "," << year << endl;
}
void Date::display()
{
	cout << day << "/" << month << "/" << year << endl;
}
void Date::incDay(int d)
{
	if (d >= 0)
	{
		int totalDays = day + d;
		if (totalDays > monthDays[month])
		{
			while (totalDays > monthDays[month])
			{
				if (month == 12)
				{
					totalDays = totalDays - monthDays[12];
					month = 1;
					year++;
				}
				else
				{
					totalDays = totalDays - monthDays[month];
					month++;
				}
			}
		}
		day = totalDays;
	}
}

void Date :: incMonth(int m)
{
	if (m >= 0)
	{
		int totalMonths = month + m;
		if (totalMonths > 12)
		{
			while (totalMonths > 12)
			{
				totalMonths = totalMonths - 12;
				year++;
			}
		}
		month = totalMonths;
	}
}
const int Date::monthDays[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
const char * Date::monthName[12] = {"January", "February", "March", "April", "May","June","July","August","September","October","November","December"};

Date::~Date()
{
	day = 0;
	month = 0;
	year = 0;
}
