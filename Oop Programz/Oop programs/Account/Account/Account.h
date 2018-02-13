#ifndef ACCOUNT_H
#define ACCOUNT_H
class Account
{
private:
	double accountBalance;
public:
	Account(int balance);
	double creditBalance(int);
	double debitBalance(int);
	double getBalance()const;
};
#endif
