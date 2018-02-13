#ifndef CLOCK_H
#define CLOCK_H
#include"Date.h"
#include"Time.h"
#include"Quotations.h"

class Clock:public Time,public Date
{
private:
	Quotations q;
public:
	Clock();
	Clock(int, int, int,int, int, int );
	~Clock();
	void displayClock();
};
#endif