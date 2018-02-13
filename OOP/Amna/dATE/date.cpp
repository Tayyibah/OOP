//#include<iostream>
//using namespace std;
//class date
//{
//int day;
//int month;
//int year;
//public:
//	void setday( int date)
//	{
//	if(date < 1 && date > 31)
//		day=date;
//	}
//	void setmonth(int mon)
//	{
//	if(mon < 1 && mon > 12)
//	month=mon;
//	}
//	void setyear(int y)
//	{
//	year=y;
//	}
//	void display1()
//	{
//	cout<<month<<"/"<<day<<"/"<<year<<endl;
//	}
//	void display2()
//	{
//	switch (month)
//	{
//		case 1:
//	cout<<"january"<<""<<day<<","<<year<<endl;
//	break;
//		case 2:
//	cout<<"february"<<""<<day<<","<<year<<endl;
//	break;
//		case 3:
//	cout<<"march"<<""<<day<<","<<year<<endl;
//	break;
//	case 4:
//	cout<<"april"<<""<<day<<","<<year<<endl;
//	break;
//	case 5:
//	cout<<"may"<<""<<day<<","<<year<<endl;
//	break;
//	case 6:
//	cout<<"june"<<""<<day<<","<<year<<endl;
//	break;
//	case 7:
//	cout<<"july"<<""<<day<<","<<year<<endl;
//	break;
//	case 8:
//	cout<<"august"<<""<<day<<","<<year<<endl;
//	break;
//	case 9:
//	cout<<"september"<<""<<day<<","<<year<<endl;
//	break;
//	case 10:
//	cout<<"october"<<""<<day<<","<<year<<endl;
//	break;
//	case 11:
//	cout<<"november"<<""<<day<<","<<year<<endl;
//	break;
//	case 12:
//	cout<<"december"<<""<<day<<","<<year<<endl;
//	break;
//	}
//	}
//	void display3()
//	{
//	switch (month)
//	{
//	case 1:
//	cout<<day<<"january"<<year<<endl;
//	break;
//		case 2:
//	cout<<day<<"february"<<year<<endl;
//	break;
//		case 3:
//	cout<<day<<"march"<<year<<endl;
//	break;
//	case 4:
//	cout<<day<<"april"<<year<<endl;
//	break;
//	case 5:
//	cout<<day<<"may"<<year<<endl;
//	break;
//	case 6:
//	cout<<day<<"june"<<year<<endl;
//	break;
//	case 7:
//	cout<<day<<"july"<<year<<endl;
//	break;
//	case 8:
//	cout<<day<<"august"<<year<<endl;
//	break;
//	case 9:
//	cout<<day<<"september"<<year<<endl;
//	break;
//	case 10:
//	cout<<day<<"october"<<year<<endl;
//	break;
//	case 11:
//	cout<<day<<"november"<<year<<endl;
//	break;
//	case 12:
//	cout<<day<<"december"<<year<<endl;
//	break;
//	}
//	}
//};
//int main()
//{
//int day,month,year;
//cout<<"enter day:";
//cin>>day;
//cout<<"enter months:";
//cin>>month;
//cout<<"enter year:";
//cin>>year;
//date d;
//d.setday(day);
//d.setmonth(month);
//d.setyear(year);
//d.display1();
//d.display2();
//d.display3();
//return 0;
//
//}