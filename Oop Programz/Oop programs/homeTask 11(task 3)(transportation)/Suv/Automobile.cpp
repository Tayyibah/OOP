#include "Automobile.h"
#include "CString.h"
using namespace std;


Automobile::Automobile():make("")
{
	model = 0;
	mileage = 0;
	price = 0.0;
}
Automobile::Automobile(CString autoMake, int autoModel, int autoMileage, double autoPrice):make(autoMake)
{
	model = autoModel;
	mileage = autoMileage;
	price = autoPrice;
}
CString Automobile::getMake() const
{
	return make;
}
int Automobile::getModel() const
{
	return model;
}
int Automobile::getMileage() const
{
	return mileage;
}
double Automobile::getPrice() const
{
	return price;
}