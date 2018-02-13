#include"Task.h"
	Task::Task()
	{}
	Task::Task(const Date & d, const Time & t, const CString & m):taskDate(d),taskTime(t),taskMsg(m)
	{
	}
	void Task::setTask(const Date & d, const Time & t, const CString & m)
	{
		taskDate = d;//no issue with shallow copy
		taskTime = t;//no issue with shallow copy
		taskMsg = m; // shallow copy will create issues
	//CString must have = operator
	}
	void Task::updateDate(const Date & nd)
	{
		taskDate = nd;
	}
	void Task::updateTime(const Time & nt)
	{
		taskTime = nt;
	}
	void Task::updateMessage(const CString & m)
	{
		taskMsg = m;
	}
	Date Task::getDate()
	{
		return taskDate;
	}
	Time Task::getTime()
	{
		return taskTime;
	}
	CString Task::getMessage()
	{
		return taskMsg;
	}