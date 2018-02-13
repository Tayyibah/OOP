#include"string.h"
#include<iostream>
using namespace std;
int main()
{
	MyString s1("AMNA");
	MyString s2("ALI");
	s1.display();
	s2.display();
	s1 += s2;
	s1.display();
	s1 <= s2;
	s1 < s2;
	s1 >= s2;
	s1 >s2;
	s1 = s2;
	s1.display();
	return 0;
}