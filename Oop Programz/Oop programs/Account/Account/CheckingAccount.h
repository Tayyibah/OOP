#ifndef CHECKINGACCOUNT_H
#define CHECKINGACCOUNT_H
#include"Account.h"
class CheckingAccount:public Account
{
private:
	double feeChargedPerTransaction;
public:
	CheckingAccount(int balance,double feeAmount);
	double creditBalance();
	double debitBalance();
};
#endif