#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H
#include"Account.h"
class SavingsAccount:public Account
{
private:
	double interestRate;
public:
	SavingsAccount(int balance,double interestRate);
	double calculateInterest();
};
#endif
