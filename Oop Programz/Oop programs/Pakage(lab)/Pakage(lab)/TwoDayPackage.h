#ifndef TWODAYPACKAGE_H
#define TWODAYPACKAGE_H
#include"Package.h"
class TwoDayPackage:public Package
{
	float flatFee;
public:
	TwoDayPackage(CString  sname,CString  saddress,CString  scity,CString  sstate,int szipcode,float weight,float cost,CString  rname,CString  raddress,CString  rcity,CString  rstate,int rzipcode ,float flatfee);
	void setFlatFee(float );
	float getFlatFee() const;
	double calculateCost() const;
};
#endif