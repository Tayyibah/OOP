#ifndef MYSTRING_H
#define MYSTRING_H

#include<iostream>
#include<cstring>
#include<string.h>
using namespace std;



class MyString
{
private:
char *str; 	// Pointer to the char array that holds the string
int strLength; 	// Variable to store the length of the string

public:

MyString();


MyString(const char *);


MyString(const MyString&);


void operator= (const MyString&);


void display ();


int getLength ();


~MyString();


bool operator == (const MyString&) const;
bool operator != (const MyString&) const;
bool operator <= (const MyString&) const;
bool operator < (const MyString&) const;
bool operator >= (const MyString&) const;
bool operator > (const MyString&) const;


MyString operator + (const MyString&) const;


void operator += (const MyString&);
};




#endif