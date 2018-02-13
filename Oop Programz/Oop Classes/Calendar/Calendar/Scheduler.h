#ifndef SCHEDULER_H
#define SCHEDULER_H
#include"CString.h"
#include"Date.h"
#include"Time.h"
#include"Quotations.h"

class Scheduler
{
	Time taskTime;
	Date taskDate;
	CString taskMsg;
	static const  int daysOfTask[8];
	static const CString Task[8];
	int noOfTasks;
	int capacity;
public:
	Scheduler();
	Scheduler(const Date & d, const Time & t, const CString & m, int nT, int cap);
	void resize();
	//bool remove(char* str, int  key);
	void removeTasks(char *str);
	void showTask(const Date & d);
	void addTask(char & Msg);
	void displayTask(const CString & c)const;
	//void displayTodaysTasks();
	//friend ostream & operator << (ostream & s, const CString & c);//void display()const;
	void  display(char * str);
	static void startApp();
	void setTask(const Date & d, const Time & t, const CString & m);
	void updateDate(const Date & nd);
	void updateTime(const Time & nt);
	void updateMessage(const CString &m);
	Date getDate();
	Time getTime();
	CString getMessage();
	~Scheduler(); 
};
#endif
