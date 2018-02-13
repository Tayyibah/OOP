#include"CommissionEmploy.h"
#include "CString.h"

CommissionEmploy::CommissionEmploy(CString nam,CString NIC,int Pay,int Rate)
{
	name=nam;
	CNIC=NIC;
	grossPay=Pay;
	commisionRate=Rate;
}
void CommissionEmploy::setName(CString nam)
{
	name=nam;
}
void CommissionEmploy::setCNIC(CString NIC)
{
	CNIC=NIC;
}
void CommissionEmploy::setGrossPay(int gross)
{
	grossPay=gross;
}
CString CommissionEmploy::getName()const
{
	return name; 
}
CString CommissionEmploy::getCNIC()const
{
	return CNIC;
}
int CommissionEmploy::getGrossPay()const
{
	return grossPay;
}
void CommissionEmploy::setCommisionRate(int rate)
{
	commisionRate=rate;
}
int CommissionEmploy::getCommisionRate()const
{
	return commisionRate;
}

double CommissionEmploy::getEarnings() const
{
	return getGrossPay() *getCommisionRate();
}