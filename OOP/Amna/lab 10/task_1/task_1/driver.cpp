#include<iostream>
using namespace std;
#include "string.h"
int main()
{
	myString s1("hello");
	s1 &'b';
	s1.display();
	myString s2("hellopakistan");
	s2.insertString(0, "dear");
	s2.display();
	return 0;
}