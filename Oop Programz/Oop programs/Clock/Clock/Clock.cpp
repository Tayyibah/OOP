#include"Clock.h"
Clock::Clock():Time(),Date()
{

}
Clock::Clock(int hr , int min, int sec ,int date, int month, int year):Time(hr,min,sec),Date(date,month,year)
{

}