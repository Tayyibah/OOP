#ifndef COMMISSIONEMPLOY_H
#define COMMISSIONEMPLOY_H
#include"CString.h"
class CommissionEmploy
{
private:
	CString name;
	CString CNIC;
	int grossPay;
	int commisionRate;
public:
	CommissionEmploy(CString name,CString CNIC,int grossPay,int commisionRate);
	void setName(CString nam);
	void setCNIC(CString NIC);
	void setGrossPay(int gross);
	void setCommisionRate(int rate);
	CString getName() const;
	CString getCNIC() const;
	int getGrossPay() const;
	int getCommisionRate() const;
	double getEarnings() const;
};
#endif