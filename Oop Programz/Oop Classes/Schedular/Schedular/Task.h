#ifndef TASK_H
#define TASK_H
#include<iostream>
#include<iomanip>
#include<string>
#include"Time.h"
#include"CString.h"
#include"Date.h"
class Task
{
	Date taskDate;
	Time taskTime;
	CString taskMsg;
public:
	Task();
	Task(const Date & d, const Time & t, const CString & m);
	void setTask(const Date & d, const Time & t, const CString & m);
	void updateDate(const Date & nd);
	void updateTime(const Time & nt);
	void updateMessage(const CString & m);
	Date getDate();
	Time getTime();
	CString getMessage();
};
#endif
