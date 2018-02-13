#include "SUV.h"
#include "CString.h"

SUV::SUV() : Automobile()
{ 
	passengers = 0; 
}
SUV::SUV(CString SUVMake, int SUVModel, int SUVMileage,double SUVPrice, int SUVPassengers) : Automobile(SUVMake, SUVModel, SUVMileage, SUVPrice)
{ 
	passengers = SUVPassengers; 
}
int SUV::getPassengers()
{ 
	return passengers; 
}