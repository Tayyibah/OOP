#include"MilTime.h"
using namespace std;

MilTime::MilTime()
{
	milHour = 0;
	milSec = 0;
}
MilTime::MilTime(int mH, int mS) :Time(mH, mH%100, mS)
{
	if (mH<0 || mH>2359)
	{
		milHour = 0;
	}
	else
	{
		milHour = mH;
	}

	if (mS<0 || mS>59)
	{
		milSec = 0;
	}
	else
	{
		milSec = mS;
	}

}

int MilTime::getHour() const
{
	return milHour;
}
int MilTime::getStandHr() const
{
	return getHour();
}
void MilTime::setTime(int mH, int mS)
{
	int h, m, s;
	if (mH<0 || mH>2359)
	{
		milHour = 0;
	}
	else
	{
		milHour = mH;
	}

	if (mS<0 || mS>59)
	{
		milSec = 0;
	}
	else
	{
		milSec = mS;
	}
	h = milHour / 100;
	m = milHour % 100;
	Time::setTime(h, m, mS);

}

void MilTime::print()
{
	cout << "Military Time Format" << endl;
	cout << "Hour : " << milHour << endl;
	cout << "Seconds : " << milSec << endl << endl;

	Time::print();
}