#include"Scheduler.h"
Scheduler::Scheduler(const Date & d, const Time & t, const CString & m,int nT,int cap) :taskDate(d), taskTime(t), taskMsg(m)
{
	 noOfTasks=nT;
	 capacity=cap;
}
Scheduler::Scheduler() 
{ 
	Time::Time();
	Date::Date();
	CString::CString();
	capacity = 5;
	noOfTasks = 0;
}

void Scheduler::setTask(const Date & d, const Time & t, const CString & m)
{
	taskDate = d;//no issue with shallow copy
	taskTime = t;//no issue with shallow copy
	taskMsg = m; // shallow copy will create issues
	//CString must have = operator
}
void Scheduler::updateDate(const Date & nd)
{
	taskDate = nd;
}
void Scheduler::updateTime(const Time & nt)
{
	taskTime = nt;
}
void Scheduler::updateMessage(const CString &m)
{
	taskMsg = m;
}
Date Scheduler::getDate()
{
	return taskDate;
}
Time Scheduler::getTime()
{
	return taskTime;
}	
void Scheduler::displayTask(const CString & c)const
{
	if (c.data != NULL)
		cout << c.data << endl;
}
//
//void Scheduler::displayTodaysTasks()
//{
//	cout << taskMsg;
//}
//ostream & operator << (ostream & s, const CString & c)//void display()const;
//{
//	if (c.data != NULL)
//		cout << c.data << endl;
//	return s;
//}
CString Scheduler::getMessage()
{
	return taskMsg;
}
void Scheduler::startApp()
{
	//all the interface related things will come here
}
Scheduler::~Scheduler()
{ 
	capacity = 0;
	noOfTasks = 0;
}
void Scheduler::addTask(char &  Msg)
{
	if ( capacity < noOfTasks )
	{
		resize();
	}
	taskMsg[noOfTasks] = Msg;
}
void Scheduler::resize()
{
	int newCapacity = capacity + 10;
	CString *task = new CString[newCapacity];
	int nooftask = noOfTasks;
	for (int i = 0; i<noOfTasks; i++)
	{
		task[i] = taskMsg[i];
	}
	this -> ~Scheduler();
	noOfTasks = nooftask;
	capacity = newCapacity;
}
void  Scheduler::display(char * str)
{
	int j = 0;
	bool found = false;
	for (int i = 0; i < noOfTasks; i++)
	{
		cout << "Task number :" << j + 1 << "\n";
		Task[i].display();
	}
}
//void Scheduler::removeTasks(char *str)
//{
//		int taskNo;;
//		cout << "Enter qoutation number for removing :";
//		cin >> taskNo;
////		bool result = remove(str, taskNo);
//		if (result)
//		{
//			cout << "Task is removed Suceesfully" << endl;
//		}
//		else
//			cout << " Task is not removed ,Entered valid Task number\n:";
//}
//bool Scheduler::remove(char* str, int  key)
//{
//	int count = 0;
//	bool found = false;
//	for (int i = 0; i<noOfTasks; i++)
//	{
//		if (taskMsg[i].find(str, key) != -1)
//		{
//			int count = 0;
//			if (count == key - 1)
//			{
//				Task[i].~CString();
//				if (i != noOfTasks - 1)
//				{
//					taskMsg[i] = taskMsg[noOfTasks - 1];
//				}
//				noOfTasks--;
//				return found = true;
//			}
//			count++;
//		}
//	}
//	return found;
//}

const CString Scheduler::Task[8] = { "Its my birthday", "Its Mama's birthday", "It's Baboo birthday", "It's Paper of OOp today", "DLD paper", "DM paper", "Calculus paper", "Electronis paper" };

const int Scheduler::daysOfTask[8] = { 10, 19, 6, 22, 23 ,24, 25, 26 };



