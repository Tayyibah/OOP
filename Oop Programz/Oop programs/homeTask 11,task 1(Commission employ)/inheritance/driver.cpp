#include<iostream>
using namespace std;
#include "BasePlusCommissionEmploy.h"
#include"CommissionEmploy.h"
#include "CString.h"

int main()
{
	CommissionEmploy c("Tayyibah","2132",30000,5);
	BasePlusCommissionEmploy b("Tayyibah","2132",30000,5,5);
	c.setName("Tayyibah");
	c.setCNIC("2132");
	c.setGrossPay(30000);
	c.setCommisionRate(5);
	c.getName();
	c.getCNIC();
	c.getGrossPay();
	c.getCommisionRate();
	b.getEarnings();
	b.setBaseSalary(78);
	b.getBaseSalary();
	b.getEarning();
	return 0;
}
