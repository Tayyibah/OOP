#include<iostream>
using namespace std;
#include"bankAccount.h"
#include"check.h"

check::check(int an, double b, double i, double mb, double sc) :account(an,b)
{
	if (i > 0)
	{
		interest = i;
	}
	if (mb >= 2000)
	{
		minBal = mb;
	}
	if (sc > 0)
	{
		serviceCharges = sc;
	}
}
void check::setInterest(double i)
{

	if (i > 0)
	{
		interest = i;
	}
}
double check::getInterest()
{
	return interest;
}
void check::setMinBal(double mb)
{
	if (mb >= 2000)
	{
		minBal = mb;
	}
}
double check::getMinBal()
{
	return minBal;
}
void check::setCharges(double sc)
{
	if (sc > 0)
	{
		serviceCharges = sc;
	}
}
double check::getCharges()
{
	return serviceCharges;
}
void check::postInterest()
{
	int t;
	cout << "\nEnter time period for interest in days: ";
	cin >> t;
	if (t > 0)
	{
		postinterest = getBalance()*interest*t;
		cout << "POST INTERESTafter time"<< t <<" is: " <<postinterest;
	}
}
void check:: withdrawl(double w)
{
	double b = getBalance();
	if (b < minBal)
	{
		cout << "\nYOU CANNOT WITHDRAW ANY AMOUNT..";
	}
}
void check::print()
{
	printInfo();
	cout << "\nINTEREST is: "<<interest;
	cout << "\nMINIMUM BALANCE is : "<<minBal;
	cout << "\nSERVICE CHARGES are: "<<serviceCharges;
}