#include"Time.h"
using namespace std;


Time::Time()
{
	hour = 0;
	min = 0;
	sec = 0;
}


Time::Time(int h, int m, int s)
{
	setTime(h, m, s);
}

void Time::setTime(int h, int m, int s)
{
	if (h<0 || h>25)
	{
		hour = 0;
	}
	else
	{
		hour = h;
	}

	if (m<0 || m>59)
	{
		min = 0;
	}
	else
	{
		min = m;
	}

	if (s<0 || s>59)
	{
		sec = 0;
	}
	else
	{
		sec = s;
	}

}

int Time::getHour() const
{
	return hour;
}


int Time::getMin() const
{
	return min;
}

int Time::getSec() const
{
	return sec;
}

void Time::print()
{
	cout << "Standered Time Format" << endl;
	if (hour >= 12)
	{
		if (min >= 0)
		{
			if (hour>12)
			{
				hour = hour - 12;
			}
			if (hour == 0)
			{
				hour = 12;
			}

			cout << hour << " : " << min << " : " << sec << " pm" << endl;
		}

	}
	else
	{
		cout << hour << " : " << min << " : " << sec << " am" << endl;
	}

}