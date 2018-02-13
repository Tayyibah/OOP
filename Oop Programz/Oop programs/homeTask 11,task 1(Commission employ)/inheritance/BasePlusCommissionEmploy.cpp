#include "BasePlusCommissionEmploy.h"
BasePlusCommissionEmploy::BasePlusCommissionEmploy(CString nam,CString NIC,int Pay,int Rate,double baseSlry):CommissionEmploy(nam,NIC,Pay,Rate)
{
	baseSalary=baseSlry;
}
void BasePlusCommissionEmploy::setBaseSalary(double Salary)
{
	baseSalary=Salary;
}
double BasePlusCommissionEmploy::getBaseSalary()const
{
	return baseSalary;
}
double BasePlusCommissionEmploy::getEarning()const
{
	return getBaseSalary()+CommissionEmploy::getEarnings();
}
	