#include<iostream>
using namespace std;
void main ()
{
int i;char mark;
 char a='1';
 char b='2';
char c='3';
char d='4';
char e='5';
char f='6';
char g='7';
char h='8';
char i='9';

	cout<< a<< "|"<<b<<"|"	<<c ;
	cout<<"_____|_______|_______";
	cout<< d<< "|"<<e<<"|"	<<f ;
	cout<<"_____|_______|_______";
	cout<< g<< "|"<<h<<"|"	<<i ;

	for(i=1;i<=9;i++)
	{
		int choice;
		cout<"enter place for mark";
		cin>>choice;
	 char mark(i%2==1) ? 'X':'O';
	while (choice>9 || choice <1)
		cout<<"invalid choice";
	if (choice==1 && a=='1')
		a=mark;
	else if (choice==2 && b=='2')
		b=mark;
	else if (choice==3 && c=='3')
		c=mark;
	else if (choice==4 && d=='4')
		d=mark;
	else if (choice==5 && e=='5')
		e=mark;
	else if (choice==6 && f=='6')
		f=mark;		
	else if (choice==7 && g=='7')
		g=mark;
	else if (choice==8 && h=='8')
		h=mark;
	else if (choice==9 && i=='9')
		i=mark;
	else
		cout<<"invalid space for marks";
	}
	cout<< a<< "|"<<b<<"|"	<<c ;
	cout<<"_____|_______|_______";
	cout<< d<< "|"<<e<<"|"	<<f ;
	cout<<"_____|_______|_______";
	cout<< g<< "|"<<h<<"|"	<<i ;

	if((a==b && b==c) ||(d==e && e==f) ||(g==h &&h==i) || (a==d &&d==g) ||(b==e && e==h) || (c==f &&f==i) || (a==e && e==i) || (c==e && e==g))
	{
		if(i%2==1)
			cout<<"player 1 wins";
		else
			cout<<"player 2 wins";
	}
	else
		cout<<"game draw";
}