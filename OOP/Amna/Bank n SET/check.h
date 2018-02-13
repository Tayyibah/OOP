#ifndef CHECK_H
#define CHECK_H
class check
{
private:
	double interest;
	double minBal;
	double serviceCharges;
public:
	check(int,double,double,double,double);
	void setInterest(double);
	double getInterest();
	void setMinBal(double);
	double getMinBal();
	void setCharges(double);
	double setCharges();
};
#endif