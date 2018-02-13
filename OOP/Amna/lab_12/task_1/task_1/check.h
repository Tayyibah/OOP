#ifndef CHECK_H
#define CHECK_H
#include"bankAccount.h"
class check : public account
{
private:
	double interest;
	double minBal;
	double serviceCharges;
	double postinterest;
public:
	check(int, double, double, double, double);
	void setInterest(double);
	double getInterest();
	void setMinBal(double);
	double getMinBal();
	void setCharges(double);
	double getCharges();
	void print();
	void postInterest();
	void withdrawl(double);
};
#endif