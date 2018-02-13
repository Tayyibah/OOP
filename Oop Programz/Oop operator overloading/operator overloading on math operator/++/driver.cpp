#include<iostream>
#include"feetInches.h"
using namespace std;
int main()
{
	feetInches f1(1,2),f2(3,4),f3;
	cout<< f1.getFeet() <<endl;
	cout<< f1.getInches() <<endl;
	cout<< f2.getFeet() <<endl;
	cout<< f2.getInches() <<endl;
	cout<< f3.getFeet() <<endl;
	cout<< f3.getInches() <<endl;
	f3=f2-f1;
	cout<< f3.getFeet() <<endl;
	cout<< f3.getInches() <<endl;
	return 0;
}
