#include<iostream>
#include"Account.h"
using namespace std;
Account::Account(int balance)
{
	if(balance>0||balance==0)
	{
		accountBalance=balance;
	}
	else
	{
		cout<<"Invalid balance"<<endl;
	}
}
double Account::creditBalance(int ammount)
{
	return accountBalance+ammount;
}
double Account::debitBalance(int withdrawAmmount)
{
	if(accountBalance<withdrawAmmount)
	{
		cout<<"debit ammount exceeds current ammount"<<endl;
		return 0;
	}
	else
	{
		cout<<"Now U have"<< accountBalance-withdrawAmmount<<"balance"<<endl;
		return accountBalance-withdrawAmmount;
	}
}
double Account::getBalance()const
{
	return accountBalance;
}