#include<iostream>
using namespace std;
#include"BankAccount.h"

account::account()
{
	accountNo = 0;
	balance = 0;
}
account::account(int a, double b)
{
	if (a > 0)
	{
		accountNo = a;
	}
	if (b > 0.0)
	{
		balance = b;
	}
}
void account::setAccountNo(int a)
{
	if (a > 0)
	{
		accountNo = a;
	}
}
int account::getAccountNo()
{
	return accountNo;
}
double account::getBalance()
{
	return balance;
}
void account::withDrawl(double w)
{
	balance -= w;
}
void account::deposite(double d)
{
	balance += d;
}
void account::printInfo()
{
	cout << "\nACCOUNT NO OF PERSON IS: " << accountNo;
	cout << "\nACCOUNT BALANCE IS:" << balance;
}