
#include"Date.h"


Date::Date(){
	month = 0;
	date = 0;
	year = 0;
}
Date::Date(int m, int d, int y){
	if (m < 1 || m > 12)
	{
		cout << "Invalid month entered";
		exit(EXIT_FAILURE);
	}
	else if (d<1 || d > 31)
	{
		cout << "Invalid date entered";
		exit(EXIT_FAILURE);
	}
	else
	{
		month = m;
		date = d;
		year = y;
	}
}
int Date::getMonth()const
{
	return month;
}
int Date::getDay()const
{
	return date;
}
int Date::getYear()const
{
	return year;
}
void Date::setMonth(int m)
{
	if (m >= 1 && m <= 12)
		month = m;
	else
	{
		cout << "Invalid month entered";
		exit(EXIT_FAILURE);
	}
}
void Date::setDay(int d)
{
	if (d >= 1 && d <= 31)
		date = d;
	else
	{
		cout << "Invalid date entered";
		exit(EXIT_FAILURE);
	}
}
void Date::setYear(int yr)
{
	year = yr;
}
void Date::printDate()
{
	cout << month << "/" << date << "/" << year << endl;
	cout << monthName[month - 1] << " " << date << "," << year << endl;
	cout << date << " " << monthName[month - 1] << " " << year << endl;
}

Date::~Date()
{
	date = 0;
	month = 0;
	year = 0;
}

const char * Date::monthName[12] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };
