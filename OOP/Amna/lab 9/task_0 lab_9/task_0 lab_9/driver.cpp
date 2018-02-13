#include<iostream>
using namespace std;
#include"student.h"
int main()
{
	student s1("AMNA",47,24,10,1994);
	student s2;
	s2.setData("AMNA", 47, 24, 10, 1994);
	return 0;
}