//#include<iostream>
//#include<cstring>
//using namespace std;
//class dayType
//{
//private:
//	char day[4];
//public:
//	dayType()
//	{
//		strcpy(day,"");
//	}
//	void setDay(char *d1)
//	{
//		while(d1 == "\0")
//		{
//			cout<<"invalid input! enter again: ";
//			cin>>d1;
//		}
//		strcpy(day,d1);
//	}
//	void printDay()
//	{
//		cout<<"the day you entered is:\n";
//		cout<<day<<endl;
//	}
//	char* returnDay()
//	{
//		return day;
//	}
//	char* returnNextDay(char *day2)
//	{
//		if(day2[0]=='s' || day2[0]=='S')
//		{
//			if(day2[1]=='a' || day2[1]=='A')
//			{
//				strcpy(day2,"sun");
//			}
//			else if(day2[1]=='u' || day2[1]=='U')
//			{
//				strcpy(day2,"mon");
//			}
//		}
//		else if(day2[0]=='m' || day2[0]=='M')
//		{
//			strcpy(day2,"tue");
//		}
//		else if(day2[0]=='t' || day2[0]=='T')
//		{
//			if(day2[1]=='u' || day2[1]=='U')
//			{
//				strcpy(day2,"wed");
//			}
//			else if(day2[1]=='h' || day2[1]=='H')
//			{
//				strcpy(day2,"fri");
//			}
//		}
//		else if(day2[0]=='w' || day2[0]=='W')
//		{
//			strcpy(day2,"thu");
//		}
//		else if((day2[0]=='f' || day2[0]=='F'))
//		{
//			strcpy(day2,"sat");
//		}
//		return day2;
//	}
//	char* returnPreviousDay(char *day3)
//	{
//		if(day3[0]=='s' || day3[0]=='S')
//		{
//			if(day3[1]=='a' || day3[1]=='A')
//			{
//				strcpy(day3,"thu");
//			}
//			else if(day3[1]=='u' || day3[1]=='U')
//			{
//				strcpy(day3,"fri");
//			}
//		}
//		else if(day3[0]=='m' || day3[0]=='M')
//		{
//			strcpy(day3,"sat");
//		}
//		else if(day3[0]=='t' || day3[0]=='T')
//		{
//			if(day3[1]=='u' || day3[1]=='U')
//			{
//				strcpy(day3,"sun");
//			}
//			else if(day3[1]=='h' || day3[1]=='H')
//			{
//				strcpy(day3,"tue");
//			}
//		}
//		else if(day3[0]=='w' || day3[0]=='W')
//		{
//			strcpy(day3,"mon");
//		}
//		else if((day3[0]=='f' || day3[0]=='F'))
//		{
//			strcpy(day3,"wed");
//		}
//		return day3;
//	}
//	char* returnCalDay(char* d,int cal)
//	{
//		char* d1;
//		char calDay[][4]={"mon","tue","wed","thu","fri","sat","sun"};
//		while(cal<0)
//		{
//			cout<<"invalid input\n";
//			cin>>cal;
//		}
//		for(int i=0;i<7;i++)
//		{
//			if(!strcmp(d,calDay[i]))
//			{
//				cal=cal+i;
//				cal%=7;
//				strcpy(d,calDay[cal]);
//			}
//		}
//		return d;
//	}
//
//};
//int main()
//{
//	dayType day;
//
//
//	char d1[4];
//	cout<<"enter day \n";
//	cin>>d1;
//
//	day.setDay(d1);
//	day.printDay();
//
//	char* day1=day.returnDay();
//
//	cout<<"---------------------------------"<<endl;
//	cout<<"next day= "<<day.returnNextDay(d1)<<endl;
//	cout<<"previous day= "<<day.returnPreviousDay(d1)<<endl;
//	cout<<"---------------------------------"<<endl;
//
//	cout<<"enter a digit you want to jump \n";
//	int jump;
//	cin>>jump;
//	cout<<"---------------------------------\n\n"<<endl;
//	cout<<"the day after jump is= "<<day.returnCalDay(d1,jump)<<endl;
//	cout<<"---------------------------------"<<endl;
//
//	return 0;
//}
