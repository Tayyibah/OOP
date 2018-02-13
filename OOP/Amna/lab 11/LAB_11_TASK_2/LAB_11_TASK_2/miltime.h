#include"Time.h"
#ifndef MILTIME_H
#define MILTIME_H

class MilTime : public Time
{
protected:
	int milHour;
	int milSec;
public:
	MilTime();
	MilTime(int, int);
	int getHour() const;
	int getStandHr() const;
	void setTime(int, int);
	void print();

};

#endif