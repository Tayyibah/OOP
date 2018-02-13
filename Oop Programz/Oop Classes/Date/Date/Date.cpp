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
Date::Date(int d, int m, int y)
{
	setYear(y);
	setMonth(m);
	setDay(d);
}

void Date::setDate(int d, int m, int yr)
{
	setYear(yr);
	setMonth(m);
	setDay(d);
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
	else if (isLeapYear(year))   
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
			incDay(d);
	}
}

void Date::setMonth(int mon)
{
	if (mon >= 1 && mon <= 12)
		month = mon;
	else
		incMonth(mon);
}

void Date::setYear(int yr)
{
	if (yr >= 1900 && yr <= 3000)
		year = yr;
	else
		incYear(yr);
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

void Date::incDay(int d)
{
	day=0;
	if (d >= 0)
	{
		day = day + d;
		if (day > monthDays[month])
		{
			while (day > monthDays[month])
			{
				if (month == 12)
				{
					day = day - monthDays[12];
					month = 1;
					year++;
				}
				else
				{
					day = day - monthDays[month];
					month++;
				}
			}
		}
	}
	day = day;
}

void Date :: incMonth(int m)
{
	month=0;
	if (m >= 0)
	{
		month = month + m;
		if (month > 12)
		{
			while (month > 12)
			{
				month = month - 12;
				year++;
			}
		}
	}
	month = month;
}
void Date ::incYear(int i)
{
	year=year+i;
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
	if ( month == 4 || month == 6 || month == 9 || month == 11)
		return true;
	else
		return false;
}

void Date::printDateInFormat1()const
{
	cout << day << "/" << month << "/" << year << endl;
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
Date::~Date()
{
	day = 0;
	month = 0;
	year = 0;
}
const int Date::monthDays[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
const char * Date::monthName[12] = {"January", "February", "March", "April", "May","June","July","August","September","October","November","December"};

int Date::changeCurrentDate(int i)
{
	tm date;
	_getsystime(&date);
	int d = date.tm_mday;
	int m = date.tm_mon + 1;
	int y = date.tm_year + 1900;
	setDate(d, m, y);
	display();
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
	display();
	return EXIT_SUCCESS;
}
CString Date::getDateInFormat1()const
{
	CString temp;
	temp.resize(11);
	int Day = day;
	int Month = month;
	int Year = year;
	int index = 0;
	int digitsOfDays = noOfDigits(Day);
	int digitsOfMonth = noOfDigits(Month);
	int i = 0;
	if (digitsOfDays > 1)
	{
		int rem = Day / 10;
		int quo = Day % 10;
		temp.insert(i++, rem + '0');
		temp.insert(i++, quo + '0');
	}
	else
	{
		temp.insert(i++, 0 + '0');
		temp.insert(i++, Day + '0');
	}
	temp.insert(i++, '\\');
	if (digitsOfMonth > 1)
	{
		int rem = Month / 10;
		int quo = Month % 10;
		temp.insert(i++, rem + '0');
		temp.insert(i++, quo + '0');
	}
	else
	{
		temp.insert(i++, 0 + '0');
		temp.insert(i++, Month + '0');
	}
	temp.insert(i++, '\\');
	temp.insert(0, day + '0');
	int rem =0;
	for (int j = 3; j >= 0; j--)
	{
		rem = Year / calcPower(10, j);
		rem = Year % calcPower(10, j);
		temp.insert(i++, rem);
		Year = Year % calcPower(10, j);
	}
	int count = noOfDigits(Year);
	for (int j = count -1; j >= 0; j--)
	{
		int r = calcPower(10, j);
		int qou = Year / r;
		temp.insert(i++, qou + '0');
		Year = Year%r;
	}
	temp.insert(i++, '\0');
	temp.display();
	return temp;
}
int Date::calcPower(int num, int sq) const
{
	int i=0;
	while(i<sq)
	{
		num=num*num;
		i++;
	}
	return num;
}
int Date::noOfDigits(int n)const
{
	int count = 0;
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	return count;
}
