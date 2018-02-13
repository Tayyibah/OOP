#include"SchedulerApp.h"
#include "Time.h"
void SchedulerApp::startApp()
{
	Schedular s;
	Time t(23,12,13);
	Date d(34, 14, 2016);
	CString c("You have to go to meeting today ");
	Task ta(d,t,c);
	ta.setTask(d,t,c);
	ta.updateDate(d);
	ta.updateTime(t);
	ta.updateMessage(c);
	ta.getDate();
	ta.getTime();
	ta.getMessage();
	s.displayTodaysTasks();
	s.removeTask(d);
	tm date;
	time_t ttNow = time(NULL); 
	tm tmNow = *localtime(&ttNow);  
	tmNow.tm_hour ; 
	tmNow.tm_min ; 
	tmNow.tm_sec; 
	_getsystime(&date);
	if(tmNow.tm_hour == t.getHour () && tmNow.tm_min == t.getMinute () &&tmNow.tm_sec ==  t.getSecond()&&date.tm_mday == d.getDay()&&date.tm_mon + 1 == d.getMonth()&&date.tm_year + 1900 ==d.getYear() )
	{
		s.addTask(ta);
	}
}