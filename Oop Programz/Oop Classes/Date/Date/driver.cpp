#include<iostream>
#include "Date.h"
using namespace std;
int main()
{
	Date date;
	Date d(34, 14, 2016);
	d.setDate(45, 14, 2016);
	d.getDay() ;
	d.getMonth();
	d.getYear();
	d.printDateInFormat1();
	d.printDateInFormat2();
	d.printDateInFormat3();
	d.incDay(1);
	d.incMonth(1);
	d.incYear(1);
	d.display();
	d.displayCurrentDate();
	d.changeCurrentDate(1);
	d.getDateInFormat1();// check it it's wrong
	return 0;
}