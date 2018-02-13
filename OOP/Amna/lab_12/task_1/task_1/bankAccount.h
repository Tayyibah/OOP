#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H
class account
{
private:
	int accountNo;
	double balance;
public:
	account();
	account(int, double);
	void setAccountNo(int);
	int getAccountNo();
	double getBalance();
	void withDrawl(double);
	void deposite(double);
	void printInfo();
};
#endif