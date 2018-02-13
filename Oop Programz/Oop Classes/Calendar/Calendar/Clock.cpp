#include"Clock.h"
Clock::Clock()
{

}
Clock::Clock(int hr , int min, int sec ,int date, int month, int year):Time(hr,min,sec),Date(date,month,year)
{

}
Clock::~Clock()
{
	Time::~Time();
	Date::~Date();
}
void Clock::displayClock()
{
	Time::display();
	Date::display();
}

