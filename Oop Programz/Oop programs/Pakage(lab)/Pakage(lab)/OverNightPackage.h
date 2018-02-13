#ifndef OVERNIGHTPACKAGE_H
#define OVERNIGHTPACKAGE_H
#include"Package.h"
class OverNightPackage:public Package
{
	float additionalFeePerOunce;
public:
	OverNightPackage(CString ,CString ,CString ,CString ,int,float,float,CString ,CString ,CString ,CString ,int,float);
	void setAdditionalFeePerOunce(float);
	float getAdditionalFeePerOunce() const;
	double calculateCost() const;
};
#endif