#include"TwoDayPackage.h"
TwoDayPackage:: TwoDayPackage(CString  sname,CString  saddress,CString  scity,CString  sstate,int szipcode,float weight,float cost,CString  rname,CString  raddress,CString  rcity,CString  rstate,int rzipcode ,float flatfee):Package(sname,saddress,scity,sstate,szipcode,weight,cost,rname,raddress,rcity,rstate,rzipcode )
{
	flatFee=flatfee;
}
void TwoDayPackage:: setFlatFee(float fee)
{
	flatFee=fee;
}
float TwoDayPackage:: getFlatFee() const
{
	return flatFee;
}
double TwoDayPackage:: calculateCost() const
{
	return Package::calculateCost()+flatFee;
}
