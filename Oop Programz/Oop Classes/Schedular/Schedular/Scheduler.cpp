#include"Schedular.h"
	Schedular::Schedular()
	{
		capacity=5;
		noOfTasks=0;
		taskList = new Task[capacity];
	}
	Schedular::~Schedular()
	{
		if (taskList)
			delete[] taskList;
		capacity = 0;
		noOfTasks = 0;
	}
	void Schedular::addTask(const Task & t)
	{
		taskList[noOfTasks++]=t;
	}
	void Schedular::removeTask(const Date & d)
	{
		for(int i=0;i<capacity;i++)
		{
			if(taskList[i].getDate()==d)
			{
				taskList[i]=taskList[noOfTasks];
				noOfTasks--;
			}
		}
	//show todays tasks by default or according to the date received
	}
	void Schedular::displayTodaysTasks()
	{
		for(int i=0;i<noOfTasks;i++)
		{
				cout<<"Task of date ";
				taskList[i].getDate();
				cout<<taskList[i].getMessage();
		}
		cout<<endl;
	}