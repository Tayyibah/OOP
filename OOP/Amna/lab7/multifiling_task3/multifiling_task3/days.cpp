#include"day.h"
#include<iostream>
using namespace std;
dayOfYear::dayOfYear(int d)
{
	if (d > 0 && d <= 365)
	{
		day = d;
	}
	else
	{
		day = 0;
	}
}
void dayOfYear::print()
{
	if (day > 0 && day < 32)
		cout << "january:" << day<<endl;
	else if (day>31 && day < 60)
		cout << "february:" << day - 31<<endl;
	else if (day>59 && day < 91)
		cout << "march" << day - 59<<endl;
	else if (day > 90  && day < 121)
		cout << "april" << day - 90<<endl;
	else if (day > 120 && day < 152)
		cout << "may"<<day-120<<endl;
	else if (day > 151 && day < 182)
		cout << "june" << day - 151<<endl;
	else if (day > 181 && day < 213)
		cout << "july" << day - 181<<endl;
	else if (day > 212 && day < 244)
		cout << "august" << day - 212<<endl;
	else if (day > 243 && day < 274)
		cout << "september" << day -243<<endl;
	else if (day > 273 && day < 305)
		cout << "october" << day - 273<<endl;
	else if (day > 304 && day < 335)
		cout << "november" << day - 304<<endl;
	else if (day >334 && day < 366)
		cout << "december" << day - 334<<endl;
	else
		cout << "Invalid day:..."<<endl;

}