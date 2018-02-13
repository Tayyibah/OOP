#ifndef CLOCK_H
#define CLOCK_H
#include"Date.h"
#include"Time.h"
class Clock:public Time,public Date
{
private:

public:
	Clock();
	Clock(int, int, int,int, int, int );
};
#endif