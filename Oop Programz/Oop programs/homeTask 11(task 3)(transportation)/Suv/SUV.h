#ifndef SUV_H
#define SUV_H
#include "Automobile.h"
#include "CString.h"

class SUV : public Automobile
{
private:
	int passengers;
public:
	SUV();
	SUV(CString SUVMake, int SUVModel, int SUVMileage,double SUVPrice, int SUVPassengers);
	int getPassengers();
};
#endif