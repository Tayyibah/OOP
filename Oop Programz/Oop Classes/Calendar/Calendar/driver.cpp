#include<iostream>
#include<cmath>
using namespace std;
#include"CString.h"
#include"Clock.h"
#include"Scheduler.h"
#include"Date.h"
#include"Time.h"
#include <iomanip> 
#include <cstdlib> 
#include <ctime> 
#include <Windows.h>
#include <stdio.h> 
#include"Calendar.h"
#include"Quotations.h"
#include <time.h> 
void displaySetApplicationMenu()
	{
		cout<<"***********************Press 1 for showing current time************************"<<endl;
		cout<<"**********************Press 2 for showing current date*************************"<<endl;
		cout<<"******************Press 3 for showing current DATE AND TIME********************"<<endl;
		cout<<"********************Press 4 for showing random Quotations**********************"<<endl;
		cout<<"***********************Press 5 for showing current day*************************"<<endl;
		cout<<"***********************Press 6 for showing current month***********************"<<endl;
		cout<<"***********************Press 7 for showing current year************************"<<endl;
		cout<<"***********************Press 8 for showing current week************************"<<endl;
		cout<<"***********************Press 9 for showing random Task*************************"<<endl;
		cout<<"**********************Press 10 for changing current Time***********************"<<endl;
		cout<<"**********************Press 11 for changing current Date***********************"<<endl;
		cout<<"***************************Press 0 for ending **********************************"<<endl;
	}
int main()
{
	Calendar cn;
	Clock cl;
	Quotations q;
	Date d;
	Time t;
	Clock c(02, 04, 20, 12, 23, 2015);
	Scheduler s(d,t,"Result today",8,10);
	int num;
	bool flag=true;
	while(flag)
	{
		displaySetApplicationMenu();
		cout<<"Enter key:";
		cin>>num;
		cout<<endl;
		if(num==1)
		{
			cout<<"Current time is ";
			t.displayCurrentTime();	
			cout << endl<< endl;
		}
		else if(num==2)
		{
			cout << "Current  date is ";
			d.displayCurrentDate();
			cout << endl<< endl;	
		}
		else if(num==3)
		{
			cout << "Current Date n time is ";
			t.displayCurrentDateNTime();
			cout << endl << endl;
		}
		else if(num==4)
		{
			cout << "Random Quotation is ";
			q.displayQuotationsRandomly();
			cout << endl<< endl;
		}
		else if(num==5)
		{
			cn.showDayView(); 
		}
		else if(num==6)
		{
			cn.showMonthView();
		}
		else if(num==7)
		{
			cn.showYearView();
		}
		else if(num==8)
		{
			cn.showWeekView();
		}
		else if(num==9)
		{
			cout<<"Today's task is ";
			s.displayTask("I have to go outside today");
			cout << endl<< endl;
		}
		else if(num==10)
		{
			cout << "Change current time is ";
			t.changeCurrentTime(2);
			cout << endl<< endl;
		}
		else if(num==11)
		{
			cout << "Change current date is ";
			d.changeCurrentDate(2);
			cout << endl<< endl;
		}
		else if(num==0)
		{
			flag=false;
		}
		else
			cout<<"Invalid choice......select again"<<endl;
	}
	return 0;
}
