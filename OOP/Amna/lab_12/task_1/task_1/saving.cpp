#include<iostream>
using namespace std;
#include"saving.h"

saving::saving(int an, double b, double i, double mb, double sc, double ir) :check(an, b, i, mb, sc)
{
	setInterestRate(ir);
}
void saving::setInterestRate(double ir)
{
	if (ir > 50)
	{
		interestRate = ir;
	}
}
double saving::getInterestRate()
{
	return interestRate;
}
void saving::postInterest()
{
	double pi;
	int t;
	cout << "\nEnter time period for interest in days: ";
	cin >> t;
	if (t > 0)
	{
		pi = getBalance()*interestRate*t;
		cout << "\nPOST INTEREST after time period of" << t << "days is: " << pi;
	}
}
void saving::withDrawl(double w)
{
	cout << "\nYOUR WITHDRAWL after interest rate is: " << w*interestRate;
}
void saving::printSavingInfo()
{
	print();
	cout << "\nINTEREST RATE PER DAY IS:"<< interestRate;
}