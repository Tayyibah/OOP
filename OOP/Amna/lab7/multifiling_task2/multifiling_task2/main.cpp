#include"numbers.h"
#include<iostream>
using namespace std;
int main()
{
	int s;
	cout << "\nEnter size for array of numbers:";
	cin >> s;
	cout << endl;
	Numbers n1(s);
	n1.store(s);
	n1.retrieve();
	n1.maxVal(s);
	n1.minVal(s);
	n1.calAvg(s);
}