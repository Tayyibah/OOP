#include "Mystring.h"

void main()
{
	MyString s1("Umair Qadeer");
	MyString s2("Haider Ali");
	s1.display();
	s2.display();
	s1=s2;
	s1.display();
	s1+=s2;
	s1.display();

}