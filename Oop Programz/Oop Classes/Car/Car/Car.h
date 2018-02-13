#ifndef CAR_H
#define CAR_H
#include "CString.h"
class Car 
{
private:
	int yearModel;
	CString make;
	int speed;
public:
	Car();
	Car(int yrModel,CString mak,int v);
	void setYearModel(int yrModel);
	void setMake(CString mak);
	void setSpeed(int v);
	int getYearModel();
	CString getMake();
	int getSpeed();
	int accelerate();
	int brake();
	~Car();
};
#endif

