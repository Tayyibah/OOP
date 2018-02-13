#include<iostream>
using namespace std;
#include"date.h"
 Date :: Date()
 {
	day=1;
	month = 1;
	year = 2001;

 }
 Date :: Date(int d, int m, int y)
 {
	setDate(d,m,y);
 }
void Date :: setDate(int d,int m,int y)
{
	month = m;
	year = y;
	
	if(month==4 || month==6 || month==9 || month==11)
	{
		if(d>=1 && d<=30)
		{
			day=d;
		}
	}
	else if(month==1 || month==3 || month==5 || month ==7 || month ==8 || month ==10 || month ==12)
	{
		if(d>=1 && d<=31)
		{
		day=d;
		}
	
	}
	else if (month == 2)
	{
		if(day>=1 && day <=28)
		{
			day=d;
		}
	}
}
void Date:: getDate()
{
 
}
void Date :: printDate()
{
cout<<month<<"/"<<day<<"/"<<year;
}
