#ifndef BASEPLUSCOMMISSIONEMPLOY_H
#define BASEPLUSCOMMISSIONEMPLOY_H
#include"CommissionEmploy.h"
#include "CString.h"
class BasePlusCommissionEmploy:public CommissionEmploy
{
private:
	double baseSalary;
public:
	BasePlusCommissionEmploy(CString name,CString CNIC,int grossPay,int commisionRate ,double baseSlry);
	void setBaseSalary(double Salary);
	double getBaseSalary()const;
	double getEarning()const;
};
#endif