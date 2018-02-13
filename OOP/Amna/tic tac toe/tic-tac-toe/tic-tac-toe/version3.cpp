#include<iostream>
#include<fstream>
using namespace std;
void gamestatus ();
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
 char j='10';char k='11';char l='12';char m='13';char n='14';char o='15';char p='16';char q='17';char r='18';char s='19';char t='20';char u='21';char v='22';
 char w='23';char x='24';char y='25';
void boundary ()
{
	cout<<"		|		|		|		|	  ";
	cout<< a<< "|"<<b<<"|"<<c<<"|"<<d<<"|"<<e  ;
	cout<<"_____|_______|_______|_______|_____";
	cout<< f<< "|"<<g<<"|"<<h<<"|"<<i<<"|"<<j  ;
	cout<<"_____|_______|_______|_______|_____";
	cout<< k<< "|"<<l<<"|"<<m<<"|"<<n<<"|"<<o  ;
	cout<<"_____|_______|_______|_______|_____";
	cout<< p<< "|"<<q<<"|"<<r<<"|"<<s<<"|"<<t  ;
	cout<<"_____|_______|_______|_______|_____";
	cout<< u<< "|"<<v<<"|"<<w<<"|"<<x<<"|"<<y  ;
	cout<<"		|		|		|		|	  ";


}
void main ()
{
	for(i=1;i<=9;i++)
	{
		boundary ();
		int choice;
		ifstream pointer;
		pointer.open("choices.txt");
		while(pointer>>choice)
		{
	 char mark(i%2==1)?'X':'O';
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
	else if (choice==10 && i=='10')
		j=mark;
	else if (choice==11 && i=='11')
		k=mark;
	else if (choice==12 && i=='12')
		l=mark;
	else if (choice==13 && i=='13')
		m=mark;
	else if (choice==14 && i=='14')
		n=mark;
	else if (choice==15 && i=='15')
		o=mark;
	else if (choice==16 && i=='16')
		p=mark;
	else if (choice==17 && i=='17')
		q=mark;
	else if (choice==18 && i=='18')
		r=mark;
	else if (choice==19 && i=='19')
		s=mark;
	else if (choice==20 && i=='20')
		t=mark;
	else if (choice==21 && i=='21')
		u=mark;
	else if (choice==22 && i=='22')
		v=mark;
	else if (choice==23 && i=='23')
		w=mark;
	else if (choice==24 && i=='24')
		x=mark;
	else if (choice==25 && i=='25')
		y=mark;

	else
		cout<<"invalid space for marks";
		}}
	boundary();
	gamestatus();
}
void gamestatus ()
{
	if((a==b && b==c && c==d && d==e) ||(f==g && g==h&& h==i&&i==j)||(k==l &&l==m && m==n && n==o)||(p==q&& q==r && r==s && s==t)||
		(u==v&& v==w && w==x && x==y)|| (a==f && f==k && k==p && p==u) || (b==g && g==l && l==q && q==v) ||(c==h && h==m &&m==r && r==w) || 
		(d==i && i==n && n==s &&s==x) || (e==j && j==o &&o==t && t==y) || (a==g && g==m&& m==s &&s==y) || (e==i &&i==m &&m==q &&q==u))
	{
		if(i%2==1)
			cout<<"player 1 wins";
		else
			cout<<"player 2 wins";
	}
	else
		cout<<"game draw";
}