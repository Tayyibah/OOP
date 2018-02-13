#include"OvernightPackage.h"
OverNightPackage::OverNightPackage(CString  sname,CString saddress,CString  scity,CString  sstate,int szipcode,float weight,float cost,CString  rname,CString  raddress,CString  rcity,CString  rstate,int rzipcode ,float addfee):Package(sname,saddress,scity,sstate,szipcode,weight,cost,rname,raddress,rcity,rstate,rzipcode) 
{
	additionalFeePerOunce=addfee;
}
void OverNightPackage:: setAdditionalFeePerOunce(float addfee)
{
	additionalFeePerOunce=addfee;
}
float OverNightPackage:: getAdditionalFeePerOunce() const
{
	return additionalFeePerOunce;
}
double OverNightPackage:: calculateCost() const
{
	float x=additionalFeePerOunce+Package::getCostInOunce();
	return Package::calculateCost()+x;
}