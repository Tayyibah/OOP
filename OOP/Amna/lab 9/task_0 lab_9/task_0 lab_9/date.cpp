#include<iostream>
using namespace std;
#include"date.h"
date::date()
{
	day = 0;
	month = 0;
	year = 0;
}
date::date(int d, int m, int y)
{
	cout << "constructor of date is called";
	setDate(d, m, y);
}
void date::setDate(int d, int m, int y)
{
	cout << "enter year:";
	cin >> y;
	year = y;
	cout << "\nenter month:";
	cin >> m;
	month = m;
	if (month == 4 || month == 6 || month == 9 || month == 11)
	{
		if (d >= 1 && d <= 30)
		{
			day = d;
		}
	}
	else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
	{
		if (d >= 1 && d <= 31)
		{
			day = d;
		}

	}
	else if (month == 2)
	{
		if (day >= 1 && day <= 28)
		{
			day = d;
		}
	}

}
//date date::getDate()
//{
//	return date;
//}