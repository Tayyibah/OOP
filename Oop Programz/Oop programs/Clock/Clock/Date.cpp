#include<iostream>
#include<cmath>
using namespace std;
#include"CString.h"
#include"Date.h"
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

void Date::setDate(int d, int m, int y)
{
	setYear(y);
	setMonth(m);
	setDay(d);
}

void Date::setDay(int d)
{
	if (MonthWith30Days())
	{
		if (d >= 1 && d <= 30)
			day = d;
		else
			day = 1;
	}
	else if (MonthWith31Days())
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

void Date::setMonth(int m)
{
	if (m >= 1 && m <= 12)
		month = m;
	else
		month = 1;
}

void Date::setYear(int y)
{
	if (y >= 1900 && y <= 2100)
		year = y;
	else
		year = 1900;
}

int Date::getDay()const
{
	return day;
}

int Date::getMonth()const
{
	return month;
}

int Date::getYear()const
{
	return year;
}

bool Date::isLeapYear(int Year)
{
	if (year % 4 == 0 && year % 100 != 0)
	{
		if (year % 400 == 0)
			return true;
		else
			return false;
	}
	return false;
}

bool Date::MonthWith31Days()
{
	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
		return true;
	else
		return false;
}

bool Date::MonthWith30Days()
{
	if (month == 4 || month == 6 || month == 9 || month == 11)
		return true;
	else
		return false;
}

void Date::printFormat1()const
{
	cout << day << "\\" << month << "\\" << year << endl;
}

void Date::printFormat2()const
{
	cout << nameOfMonth[month] << " " << day << "," << year << endl;
}

void Date::printFormat3()const
{
	cout << day << " " << nameOfMonth[month] << "," << year << endl;
}
void Date::display()
{
	cout << day << "\\" << month << "\\" << year << endl;
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
void Date::incDay(int d)
{
	if (d >= 0)
	{
		int totalDays = day + d;
		if (totalDays > daysInMonth[month])
		{
			while (totalDays > daysInMonth[month])
			{
				if (month == 12)
				{
					totalDays = totalDays - daysInMonth[12];
					month = 1;
					year++;
				}
				else
				{
					totalDays = totalDays - daysInMonth[month];
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
	for (int j = 3; j >= 0; j--)
	{
		int rem = Year / calcPower(10, j);

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
	return temp;
}
int Date::calcPower(int num, int sq) const
{
	int i=0;
	while(i<sq)
	{
		num=num*num;
	}
	return num;
}

const int Date::daysInMonth[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

const char * Date::nameOfMonth[13] = { "", "January", "February", "March", "April", "May","June","July","August","September","October","November","December"};

