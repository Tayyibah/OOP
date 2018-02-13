//#include<iostream>
//using namespace std;
//class Date
//{
//		int year;
//		int month;
//		int day;
//public:
//	int getyear()
//	{
//		cout<<"enter year:";
//		cin>>year;
//		return year;
//	}
//	void setyear(int y)
//	{
//		cout<<"enter new year that you wants to set as a new value:";
//		cin>>y;
//		year=y;
//	}
//	int getmonth()
//	{
//		cout<<"enter month:";
//		cin>>month;
//		return month;
//	}
//	void setmonth(int m)
//	{
//		cout<<"enter new month that you wants to set as a new value:";
//		cin>>m;
//		month=m;
//	}
//	int getday()
//	{
//		cout<<"enter day:";
//		cin>>day;
//		int m;
//		m=month;
//		switch (m)
//		{
//			case 4:
//			case 6:
//			case 9:
//			case 11:
//				{
//				if(day<1 || day>30)
//				{	
//				cout<<"enter days in range:";
//				cin>>day;
//				}
//	}
//				break;
//			case 2:
//				{
//				if(day<1 || day>28)
//				{	cout<<"enter days in range:";
//				cin>>day;
//				}
//				}
//				break;
//			case 1:
//			case 3:
//			case 5:
//			case 7:
//			case 8:
//			case 10:
//				if(day<1 || day>31)
//				{	
//					cout<<"enter days in range:";
//				cin>>day;
//		}
//		}
//		return day;
//	}
//	void setday(int d)
//	{
//		cout<<"enter new day that you wants to set as a new value:";
//		cin>>d;
//		day=d;
//		int m;
//		m=month;
//		switch (m)
//		{
//			case 4:
//			case 6:
//			case 9:
//			case 11:
//				{
//				if(day<1 || day>30)
//				{	
//				cout<<"enter days in range:";
//				cin>>day;
//				}
//	}
//				break;
//			case 2:
//				{
//				if(day<1 || day>28)
//				{	cout<<"enter days in range:";
//				cin>>day;
//				}
//				}
//				break;
//			case 1:
//			case 3:
//			case 5:
//			case 7:
//			case 8:
//			case 10:
//				if(day<1 || day>31)
//				{	
//					cout<<"enter days in range:";
//				cin>>day;
//				}
//	}
//	}
//	void print()
//	{
//	cout<<"date in format of MM/DD/YY is:";
//	cout<<month<<"/"<<day<<"/"<<year<<endl;
//	int mo;
//	mo=month;
//	switch (mo)
//	{
//		case 1:
//	{
//	cout<<"date in another format :";
//	cout<<"january"<<" "<<day<<","<<year;
//	}
//	break;
//		case 2:
//	{
//		cout<<"date in another format :";
//	cout<<"february"<<" "<<day<<","<<year;	
//	}
//	break;
//	
//		case 3:
//	{
//		cout<<"date in another format :";
//	cout<<"march"<<" "<<day<<","<<year;	
//	}
//	break;
//		case 4:
//	{
//		cout<<"date in another format :";
//	cout<<"april"<<" "<<day<<","<<year;	
//	}
//	break;
//		case 5:
//	{
//		cout<<"date in another format :";
//	cout<<"may"<<" "<<day<<","<<year;	
//	}
//	break;
//		case 6:
//	{
//		cout<<"date in another format :";
//	cout<<"june"<<" "<<day<<","<<year;	
//	}
//	break;
//		case 7:
//	{
//		cout<<"date in another format :";
//	cout<<"july"<<" "<<day<<","<<year;	
//	}
//	break;
//		case 8:
//	{
//		cout<<"date in another format :";
//	cout<<"august"<<" "<<day<<","<<year;	
//	}
//	break;
//		case 9:
//	{
//		cout<<"date in another format :";
//	cout<<"september"<<" "<<day<<","<<year;	
//	}
//	break;
//		case 10:
//	{
//		cout<<"date in another format :";
//	cout<<"october"<<" "<<day<<","<<year;	
//	}
//	break;
//		case 11:
//	{
//		cout<<"date in another format :";
//	cout<<"november"<<" "<<day<<","<<year;	
//	}
//	break;
//		case 12:
//	{
//		cout<<"date in another format :";
//	cout<<"december"<<" "<<day<<","<<year;	
//	}
//	break;
//	}
//	}
//	bool IsLeapYear(int y)
//	{
//		y=year;
//		if((year%4==0 && year%100==0 ) || year%400==0)
//		{
//		cout<<year<<" is a leap year.";
//		return true;
//		}
//		else
//		{
//		cout<<year<<" is not a leap year.";
//		return false;
//		}
//	}
//};
//void main ()
//{
//	int choice,yr,mon,dy;
//	Date d;
//	int y=d.getyear();
//	int z=d.getmonth();
//	int x=d.getday();
//	cout<<"do you want to make changes in year,month or day then enter your choice:\n if you want to change year press 1:\n if you want to change month"
//		<<"press 2: \n and if you want to change day press 3:\n";
//	cin>> choice;
//	switch (choice)
//	{
//	case 1:
//		d.setyear(yr);
//	case 2:
//		d.setmonth(mon);
//	case 3:
//		d.setday(dy);
//	}
//	bool leap=d.IsLeapYear(y);
//
//}