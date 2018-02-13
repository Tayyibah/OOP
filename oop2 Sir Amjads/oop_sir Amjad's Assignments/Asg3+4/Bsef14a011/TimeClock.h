#ifndef TIMEClock_H
#define TIMEClock_H
#include <iostream>
#include <iomanip>
#include <string>
#include "Time.h"

using namespace std;

class TimeClock : public Time
{
private:
	int startTime;
	int endTime;
public:
	TimeClock()
	{
		startTime = 0;
		endTime = 0;
	}
	~TimeClock()
	{
		startTime = 0;
		endTime = 0;
	}
	TimeClock(int startT, int endT)
	{
		startTime = startT;
		endTime = endT;
	}
	void elapsedTime()
	{
		/*cout << endTime - startTime << "hours";*/
		setTime(endTime - startTime, 0); 
		printTwelveHourFormat();
	}
};
#endif