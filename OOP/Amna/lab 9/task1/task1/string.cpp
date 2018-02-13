#include"string.h"
#include<iostream>
using namespace std;

String :: String()
{
	cout<<"default costructor is called..\n";
 buff = NULL;
}
String :: String(char *n)
{
	int length = strlen(n) + 1;
	cout<<"parameterized constructor is called..\n";
	if (n != NULL)
	{
		for (int i = 0; i < length; i++)
		{
			buff[i] = n[i];
		}
	}
}
String :: String(const String &s)
{
	
	cout<<"copy constructor is called..\n";
	int length=strlen(s.buff)+1;
	if(s.buff!=NULL)
	{
		delete []this->buff;
		this->buff=NULL;
		for (int i = 0; i < length; i++)
		{
			this->buff[i] = s.buff[i];
		}
	}
}
String :: ~String()
{
	if(buff != NULL)
	{
		delete []buff;
	}
}
void String :: setBuff(char *n)
{
	int length = strlen(n) + 1;
	cout<<"destructor is called..\n";
	if (n != NULL)
	{
		for (int i = 0; i < length; i++)
		{
			buff[i] = n[i];
		}
	}
}
char* String :: getBuff()
{
	return buff;
}
void String :: display()
{
 cout<<buff;
}