#ifndef CALENDAR_H
#define CALENDAR_H
#include<iostream>
#include"CString.h"
#include"Clock.h"
#include"Date.h"
#include"Time.h"
#include <cstdlib>
#include <iomanip>
#include"Colors.h"
#include"Quotations.h"
#include<process.h>
#include<time.h>
using namespace std;
class Calendar :public Date, public Time, public  CString,public Quotations,public Colors
{
public:
	Calendar(int = 10, int = 11,int=2015);
	void showYearView();
	void showDayView(); 
	void showMonthView();
	void showWeekView();
	bool isLeapYear (int yr); 
	int firstDayofnewyearMonth (int );
	void displayMonthNyearViewByArrows();
	int numOfDaysInEachMonth (int, bool);
	void printMonthNameNDays (int,int); 
	void printMonth (int, int &); 
};
#endif
