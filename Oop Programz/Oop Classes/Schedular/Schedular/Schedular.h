#ifndef SCHEDULAR_H
#define SCHEDULAR_H
#include"Task.h"
class Schedular
{
	Task *taskList;
	int noOfTasks;
	int capacity;
public:
	Schedular();
	void addTask(const Task & t);
	void removeTask(const Date & d=Date(0,0,0));
	void displayTodaysTasks();
	~Schedular();
};
#endif
