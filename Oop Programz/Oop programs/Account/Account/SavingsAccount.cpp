#include"SavingsAccount.h"
#include"Account.h"
SavingsAccount::SavingsAccount(int balance,double iR):Account(balance)
{
	double interestRate;
}

double SavingsAccount::calculateInterest()
{
	return  Account::getBalance()*interestRate;
}
