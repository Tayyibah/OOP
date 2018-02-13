#include<iostream>
using namespace std;
#include"day.h"
int main()
{
	int da;
	cout << "Enter day:";
	cin >>  da;
	cout << endl;
	dayOfYear d(da);
	d.print();
}