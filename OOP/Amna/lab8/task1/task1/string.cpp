#include"string.h"
#include<iostream>
#include<cstring>
using namespace std;
MyString::MyString()
{
	if (str != NULL)
	{
		str = NULL;
	}
}
MyString::MyString(const char *n)
{
	strLength = strlen(n) + 1;
	if (n != NULL)
	{
		str = new char[strLength];
		for (int i = 0; i<strLength - 1; i++)
		{
			str[i] = n[i];
		}
		str[strLength - 1] = '\0';
	}
}
MyString::MyString(MyString &s)
{
	s.strLength = this->strLength;
	s.str = new char[s.strLength];
	for (int i = 0; i < s.strLength; i++)
	{
		s.str[i] = this->str[i];
	}
	cout << "Copy constructor is called and copy is:"<<s.str;
	delete[]s.str;
}
 void MyString :: operator = ( MyString&s)
{
	 if (s.str != NULL)
	 {
		 delete[]s.str;
	 }
	 else
	 {
		 for (int i = 0; i < this->strLength; i++)
		 {
			 s.str = this->str;
		 }
	 }
}
 void MyString::display()
 {
	 cout << "\nString is:"<<str;
 }
 int MyString::getLength()
 {
	 cout << "\nEnter value of string lenght:";
	 cin >> strLength;
	 return strLength;
 }
 MyString::~MyString()
 {
	 if (this->str != NULL)
	 {
		 delete[]this->str;
	 }
 }
 bool MyString:: operator == (const MyString&s) const
 {
	 if (s.str == str)
	 {
		 return true;
	 }
 }
 bool MyString::operator != (const MyString&s) const
 {
	 if (s.str != str)
	 {
		 cout << "Both are different";
		 return true;
	 }
 }
 bool MyString::operator <= (const MyString&s) const
 {
	 char test =strcmp (s.str , str);
	 if (test==0)
	 {
		 cout << "ASCII of entered string is equal:both are same:";
		 
	 }
	 else if (test == -1)
		 cout << "ASCII of entered string is less than original one.";
	 else
		 cout << "Neither less nor equal..";
	 return test;
 }
 bool MyString::operator < (const MyString&s) const
 {
	 char test = strcmp(s.str,str);
	 if (test == -1)
	 {
		 cout << "Entered string is less than original... ";
		 return true;
	 }
	 else
		 return false;
 }
 bool MyString::operator >= (const MyString&s) const
 {
	 bool test = strcmp(s.str, str);
	 if (test == 0)
	 {
		 cout << "ASCII of entered string is equal:both are same:";

	 }
	 else if (test == 1)
		 cout << "ASCII of entered string is greater than original one.";
	 else
		 cout << "Neither greater nor equal..";
	 return test;
 }
 bool MyString::operator > (const MyString&s) const
 {
	 char test = strcmp(s.str, str);
	 if (test == 1)
	 {
		 cout << "Entered string is less than original... ";
		 return true;
	 }
	 else
		 return false;
 }
 void MyString:: operator + (const MyString&s) const
 {
	 char *newString;
	 static int x = 0;
	 int len = this->strLength + s.strLength;
	 newString = new char[len];
	 for (int i = 0; i<this->strLength - 1; i++, x++)
	 {
		 newString[x] = this->str[i];
	 }
	 newString[x] = ' ';
	 x++;
	 for (int i = 0; i<s.strLength - 1; i++, x++)
	 {
		 newString[x] = s.str[i];
	 }
	 newString[x] = '\0';
	 delete[] this->str;
	 for (int i = 0; i < this->strLength; i++)
	 {
		 newString[i] = newString[i];
		 cout << "\n"<<newString[i];
	 }
	 delete[]newString;
 }
 void MyString:: operator += (const MyString&s)
 {
	 char *newString;
	 static int x = 0;
	 int len = this->strLength + s.strLength;
	 newString = new char[len];
	 for (int i = 0; i<this->strLength - 1; i++, x++)
	 {
		 newString[x] = this->str[i];
	 }
	 newString[x] = ' ';
	 x++;
	 for (int i = 0; i<s.strLength - 1; i++, x++)
	 {
		 newString[x] = s.str[i];
	 }
	 newString[x] = '\0';
	 delete[] this->str;
	 for (int i = 0; i < this->strLength; i++)
	 {
		 this->str[i] = newString[i];
		 cout << "\n" << this->str[i];
	 }
 }
