#ifndef SAVING_H
#define SAVING_H
#include"check.h"
class saving: public check
{
private:
	double interestRate;
public:
	saving(int,double,double,double,double,double);
	void setInterestRate(double);
	double getInterestRate();
	void postInterest();
	void withDrawl(double);
	void printSavingInfo();
};
#endif