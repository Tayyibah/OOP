//#include<iostream>
//#include<cstring>
//using namespace std;
//class DayType
//{
//char day[4];
//public:
//void setday()
//{
//cout<<"enter day";
//cin.getline(day,3);
//}
//void printday()
//{
//cout<<"day entered is:";
//for(int i=0;i<4;i++)
//	cout<<*(day+i);
//}
//char returnday()
//{
//return *day;
//}
//void nextday()
//{
//if      (day[0]=='m' || day[0]=='M')
//	cout<<"Next day is tuesday.\n";
//else if (day[0]=='w' || day[0]=='W')
//	cout<<"Next day is thuresday.\n";
//else if (day[0]=='f' || day[0]=='F')
//	cout<<"Next day is saturday.";
//else if (day[0]=='t' || day[0]=='T')
//{
//	if (day[1]=='u' || day[1]=='U')
//		cout<<"Next day is wednesday.\n";
//	else if (day[1]=='h' || day[1]=='H')
//		cout<<"Next day is friday.\n";
//}
//else if (day[0]=='s' || day[0]=='S')
//{
//	if (day[1]=='u' || day[1]=='U')
//		cout<<"Next day is monday.\n";
//	else if (day[1]=='a' || day[1]=='A')
//		cout<<"Next day is sunday.\n";
//}
//}
//void previousday()
//{
//if      (day[0]=='m' || day[0]=='M')
//	cout<<"Previous day is SUNDAY.\n";
//else if (day[0]=='w' || day[0]=='W')
//	cout<<"Previous day is TUESDAY.\n";
//else if (day[0]=='f' || day[0]=='F')
//	cout<<"Previous day is THURSDAY.";
//else if (day[0]=='t' || day[0]=='T')
//{
//	if (day[1]=='u' || day[1]=='U')
//		cout<<"Previous day is MONDAY.\n";
//	else if (day[1]=='h' || day[1]=='H')
//		cout<<"Previous day is WEDNESDAY.\n";
//}
//else if (day[0]=='s' || day[0]=='S')
//{
//	if (day[1]=='u' || day[1]=='U')
//		cout<<"Previous day is SATURDAY.\n";
//	else if (day[1]=='a' || day[1]=='A')
//		cout<<"Previous day is FRIDAY.\n";
//}
//}
//void addeddays()
//{
//	char d1[7][4]={"mon","tue","wed","thu","fri","sat","sun"};
//	char day1[4];
//int num;
//cout <<"enter no of days :";
//cin>>num;
//int mode=num%7;
//if(mode==0)
//{
//cout<<"Day after adding"<<num<<"days"<<	strcpy(day1,day);
//}
//else
//	for(int r=0;r<7;r++)
//	{
//	if(*day==*d1[r])
//	{
//	cout<<"Day after adding "<<num<<" days"<<strcpy(day1,(d1[r+mode]));
//	}
//	}
//}
//
//};
//int main()
//{
//DayType data;
//data.setday();
//data.printday();
//char day=data.returnday();
//cout<<"currnent day is"<<day;
//data.nextday();
//data.previousday();
//
//
//}