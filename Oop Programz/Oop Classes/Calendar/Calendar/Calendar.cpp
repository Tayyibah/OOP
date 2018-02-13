#include<iostream>
#include"Calendar.h"
using namespace std;
#include <windows.h>
#include <conio.h>

#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77

enum {black,dark_blue,dark_green,dark_cydark_red,dark_magenta,dark_yellow,light_gray,dark_gray,light_blue,light_green,light_cyan,light_red,light_magenta,light_yellow,white};

void Calendar::displayMonthNyearViewByArrows()
{
	cout<<"Press"<<endl;
	cout<<"...............UP Arrow for showing previous month"<<endl;
	cout<<"...............DOWN Arrow for showing next month"<<endl;
	cout<<"...............LEFT Arrow for showing previous year"<<endl;
	cout<<"...............RIGHT Arrow for showing next year"<<endl;	
}
Calendar::Calendar(int d,int mon, int yr)
{
	month = mon;
	year = yr;
}
void Calendar::showDayView()
{
		Quotations::displayQuotationsRandomly();
		Colors colors;
		tm varName;
		_getsystime(&varName);
		int d = varName.tm_mday;
		int h = varName.tm_hour;
        colors.setfg( dark_blue );
		cout << setw(20) << "_______________________________________________________________________________" << endl;
		cout << setw(40) << "Day View" << endl;
		cout << setw(20) << "_______________________________________________________________________________" << endl;
		cout << setw(20);
		Time::displayCurrentDateNTime();
		cout << setw(3) << "Today the date is " ;
		cout<<d<<endl<<endl;
        colors.setcolors( colors.startColors );
		int hr=1;
		while (hr <= 24)
		{
			if(hr < 12)
			{
				if(hr==h)
				{
					colors.setfg( light_yellow );
					cout<< setw(5)<<hr<<"am"<<endl;
					colors.setcolors( colors.startColors );
				}
				else
				{
					cout << setw(5) << hr <<"am"<< endl;
				}
			}
			else if(hr==12)
			{
				if(hr==h)
				{
					colors.setfg( light_yellow );
					cout<< setw(5)<<hr<<"pm"<<endl;
					colors.setcolors( colors.startColors );
				}
				else
				{
					cout << setw(5) << hr <<"pm"<< endl;
					hr;
				}
			}
			else if(hr>12&&hr<24)
			{
				if(hr==h)
				{
					colors.setfg( light_yellow );
					cout<< setw(5)<<hr<<"pm"<<endl;
					colors.setcolors( colors.startColors );
				}
				else
				{
					int x=hr;
					cout << setw(5) << x-12 <<"pm"<< endl;
					hr;
				}
			}
			else
			{
				if(hr==h)
				{
					colors.setfg( light_yellow );
					cout<< setw(5)<<hr<<"am"<<endl;
					colors.setcolors( colors.startColors );
				}
				else
				{
					int x=hr;
					cout << setw(5) << x-24 <<"am"<< endl;
				}
			}
			hr++;
		}
}

void Calendar::showMonthView()
{
	Quotations::displayQuotationsRandomly();
	Colors colors;
	tm varName;
	_getsystime(&varName);
	int d = varName.tm_mday;
	int m = varName.tm_mon + 1;
	int y = varName.tm_year + 1900;
	colors.setfg( dark_blue );
	cout << setw(20) << "_______________________________________________________________________________" << endl;
	cout << setw(40) << "Month View" << endl;
	cout << setw(20) << "_______________________________________________________________________________" << endl;
	cout << setw(20);
	Time::displayCurrentDateNTime();
	colors.setcolors( colors.startColors );
	int DateAfterWeek = 0;
	int DateCounter = 1;
	cout << "\nSun" << setw(10) << " Mon " << setw(10) << "Tue" << setw(10) << "Wed" << setw(10) << "Thu" << setw(10) << "Fri" << setw(10) << "Sat";
	cout << "\n\n" ;
    bool leapYear = isLeapYear(year);
	for (int Date=1; Date <= numOfDaysInEachMonth(m, leapYear);Date++)
	{
		if(Date==d)
		{
			colors.setfg( light_yellow );
			cout<<Date<< setw(10);
			colors.setcolors( colors.startColors );
		}
		else
		{
			cout << Date << setw(10);
		}
		DateAfterWeek++;
		if (DateAfterWeek > 6)
		{
			cout << endl<<endl << setw(2);
			DateAfterWeek = 0;
		}
	}
	cout << endl;
}
void Calendar::showYearView()
{
	Quotations::displayQuotationsRandomly();
	Colors colors;
	tm varName;
	_getsystime(&varName);
	int d = varName.tm_mday;
	int m = varName.tm_mon + 1;
	int year = varName.tm_year + 1900;
	//system ("color f5 ");
    int  firstDayInCurrentMonth;
    int currentMonth = 1;
    int numOfDays;
    bool leapYear;
	colors.setfg( dark_blue );
	cout << setw(20) << "_______________________________________________________________________________" << endl;
	cout << setw(40) << "Year View" << endl;
	cout << setw(20) << "_______________________________________________________________________________" << endl;
	cout << setw(20);
    cout<<endl;
	Time::displayCurrentDateNTime();
	colors.setcolors( colors.startColors );
    firstDayInCurrentMonth=firstDayofnewyearMonth(year);
    leapYear = isLeapYear(year);
    cout << "                                   "<<year << endl;
    while (currentMonth <= 12)
    {
		numOfDays = numOfDaysInEachMonth(currentMonth, leapYear);
		printMonthNameNDays(currentMonth,7);
		printMonth(numOfDays, firstDayInCurrentMonth);
		cout << endl << endl << endl;
		currentMonth = currentMonth + 1;
    }
    cout << endl;
	displayMonthNyearViewByArrows();
	int c = 0;
    while(1)
    {
        c = 0;

        switch((c=getch()))
		{
        case KEY_UP:
			cout << endl ;
		    cout << " Sun"<<"        "<<"Mon"<<"        "<<"Tue"<<"        "<<"Wed"<<"        "<<"Thu"<<"        "<<"Fri"<<"        "<<"Sat"<<endl;
			printMonth(numOfDays, firstDayInCurrentMonth);
			cout << endl << endl << endl;
			year = year + 1;
			cout << endl;
			cout<< endl;
            break;
        case KEY_DOWN:	
			cout << endl ;
		    cout << " Sun"<<"        "<<"Mon"<<"        "<<"Tue"<<"        "<<"Wed"<<"        "<<"Thu"<<"        "<<"Fri"<<"        "<<"Sat"<<endl;
			printMonth(numOfDays, firstDayInCurrentMonth);
			cout << endl << endl << endl;
			year = year - 1;
			cout << endl;
			cout<< endl;
			break;
		case KEY_LEFT:
            cout << endl ;
		    cout << " Sun"<<"        "<<"Mon"<<"        "<<"Tue"<<"        "<<"Wed"<<"        "<<"Thu"<<"        "<<"Fri"<<"        "<<"Sat"<<endl;
			printMonth(numOfDays, firstDayInCurrentMonth);
			cout << endl << endl << endl;
			year = year - 1;
			cout << endl;
			cout<< endl;//key LEFT
            break;
        case KEY_RIGHT:
            cout << endl;
			cout << " Sun"<<"        "<<"Mon"<<"        "<<"Tue"<<"        "<<"Wed"<<"        "<<"Thu"<<"        "<<"Fri"<<"        "<<"Sat"<<endl;
			printMonth(numOfDays, firstDayInCurrentMonth);
			cout << endl << endl << endl;
			currentMonth = currentMonth - 1;
			cout << endl;
			cout<< endl;// key RIGHT
            break;
        default:
			cout << endl;
			return;
            break; 
        }
	}
}
void  Calendar::showWeekView()
{
	Quotations::displayQuotationsRandomly();
	Colors colors;
	tm varName;
	_getsystime(&varName);
	int d = varName.tm_mday;
	int m = varName.tm_mon + 1;
	int y = varName.tm_year + 1900;
	colors.setfg( light_yellow);
	cout << setw(20) << "_______________________________________________________________________________" << endl;
	cout << setw(40) << "Week View" << endl;
	cout << setw(20) << "_______________________________________________________________________________" << endl;
	cout << setw(20); 
	colors.setcolors( colors.startColors );
	Time::displayCurrentDateNTime();
	int DateAfterWeek = 0;
	int DateCounter = 1;
	cout << "\nMon" << setw(10) << " Sun " << setw(10) << "Tue" << setw(10) << "Wed" << setw(10) << "Thu" << setw(10) << "Fri" << setw(10) << "Sat";
	cout << "\n\n" ;
    bool leapYear = isLeapYear(year);
	int Date=d;
		while(Date<d+7)
		{
			if(Date==d)
			{
				colors.setfg( light_yellow );
				cout<<Date<< setw(10);
				colors.setcolors( colors.startColors );
			}
			else
			{
				cout << Date << setw(10);
			}
			DateAfterWeek++;
			if (DateAfterWeek > 6)
			{
				cout << endl<<endl << setw(2);
				DateAfterWeek = 0;
			}
			Date++;
		}
	cout << endl;
}
void Calendar::printMonth (int numDays, int & weekDay) 
{
    int day = 1;
	int i=weekDay;
	while (i > 0)
    {
		cout << "           ";
		i = i - 1;
    }
    while (day <= numDays) 
    {
		cout <<setw(2)<< day <<"         ";
		if (weekDay == 6)
		{
			cout << endl;
			weekDay = 0;
		}
		else 
			weekDay = weekDay + 1;
		day = day + 1; 
    }
}
int  Calendar::firstDayofnewyearMonth(int year) 
{ 
    int dayStart; 
    int x1, x2, x3; 
    x1 = (year - 1)/ 4;
    x2 = (year - 1)/ 100; 
    x3 = (year - 1)/ 400; 
    dayStart = (year + x1 - x2 + x3) %7; 
    return dayStart; 
}
bool Calendar::isLeapYear (int yr) 
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
int Calendar::numOfDaysInEachMonth (int month, bool leap)
{
    if (month == 1) 
	{
		return(31);
	}
    else if (month == 2)
	{
		if (leap) 
			return(29);
		else 
			return(28);
	}
    else if (month == 3) 
	{
		return(31);
	}
	else if (month == 4)
	{
		return(30);
	}
	else if (month == 5)
	{ 
		return(31);
	}
	else if (month == 6)
	{
		return(30);
	}
	else if (month == 7)
	{
		return(31);
	}
	else if (month == 8)
	{
		return(31);
	}
	else if (month == 9) 
	{
		return(30);
	}
	else if (month == 10) 
	{
		return(31);
	}
	else if (month == 11)
	{
		return(30);
	}
	else if (month == 12) 
	{
		return(31);
	}  
	else 
		exit ( -1);
}
void Calendar::printMonthNameNDays (int m,int i) 
{
	Colors colors;
    if (m == 1)
    { 
		colors.setfg( light_red);
		cout <<endl<<setw(40)<< "January" << endl<<endl;
		colors.setcolors( colors.startColors );
    }
    else if (m == 2) 
	{ 
		colors.setfg( light_red);
		cout <<endl<<setw(40)<< "February" << endl<<endl;
		colors.setcolors( colors.startColors );
	} 
    else if (m == 3) 
	{
		colors.setfg( light_red);
		cout <<endl<<setw(40)<< "March" << endl<<endl;
		colors.setcolors( colors.startColors );
	}
    else if (m == 4) 
	{
		colors.setfg( light_red);
		cout <<endl<<setw(40)<< "April" << endl<<endl; 
		colors.setcolors( colors.startColors );
	}
    else if (m == 5) 
	{
		colors.setfg( light_red);
		cout <<endl<<setw(40)<< "May" << endl<<endl;
		colors.setcolors( colors.startColors );
	}
    else if (m == 6)
	{ 
		colors.setfg( light_red);
		cout <<endl<<setw(40)<< "June" << endl<<endl;
		colors.setcolors( colors.startColors );
	}
    else if (m == 7) 
	{
		colors.setfg( light_red);
		cout <<endl<<setw(40)<< "July" << endl<<endl;
		colors.setcolors( colors.startColors );
	}
    else if (m == 8) 
	{
		colors.setfg( light_red);
		cout <<endl<<setw(40)<< "August" << endl<<endl; 
		colors.setcolors( colors.startColors );
	}
    else if (m == 9) 
	{
		colors.setfg( light_red);
		cout <<endl<<setw(40)<< "September" << endl<<endl;
		colors.setcolors( colors.startColors );
	}
    else if (m == 10)
	{
		colors.setfg( light_red);
		cout<<endl<<setw(40) << "October" << endl<<endl;
		colors.setcolors( colors.startColors );
	}
    else if (m == 11)
	{ 
		colors.setfg( light_red);
		cout <<endl<<setw(40)<< "November" << endl<<endl; 
		colors.setcolors( colors.startColors );
	}
    else if (m == 12)
	{ 
		colors.setfg( light_red);
		cout <<endl<<setw(40)<< "December" << endl<<endl;
		colors.setcolors( colors.startColors );
	}
    else 
		exit ( -1);
 
	colors.setfg( light_cyan);
    cout << " Sun"<<"        "<<"Mon"<<"        "<<"Tue"<<"        "<<"Wed"<<"        "<<"Thu"<<"        "<<"Fri"<<"        "<<"Sat"<<endl;
    cout << "______________________________________________________________________________" << endl;
	colors.setcolors( colors.startColors );
}
