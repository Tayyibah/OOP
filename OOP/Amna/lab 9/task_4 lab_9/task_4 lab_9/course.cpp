#include<iostream>
using namespace std;
#include"course.h"
Course::Course(char *cname, char *tname, int ext, int r, int c, int index)
{
	cout << "constructor is called of course...";
	int length = strlen(cname) + 1;
	if (cname != NULL)
	{
		for (int i = 0; i < length; i++)
		{
			title[i] = cname[i];
		}
	}
	teacherData[index].setTeacherData(tname, ext);
	roomData[index].setRoomData(r, c);
}
void Course::display()
{
	int index;
	cout << "Enter index value:";
	cin >> index;
	cout << "Title of course is :" << title << "\n Teacher is";
	teacherData[index].displayTeacherData();
	cout << "in ";
	roomData[index].displayRoomData();

}
Course::Course(const Course & c, int index)
{
	int length = strlen(c.title) + 1;
	this->title = new char[length];
	this->title = c.title;
	//this->teacherData[index].setTeacherData(c.teacherData[index].getTeacherName(), c.teacherData[index].getTeacherExt());
	this->roomData[index].setRoomData(c.roomData[index].getRoomNo(), c.roomData[index].getCapacity());
}
void Course :: operator =(Course & rhs)
{
	int index;
	cout << "Enter index value:";
	cin >> index;
	if (this->title != NULL)
	{
		delete[]this->title;
	}
	this->title = rhs.title;
	//this->teacherData[index].setTeacherData(rhs.teacherData[index].getTeacherName(), rhs.teacherData[index].getTeacherExt());
	this->roomData[index].setRoomData(rhs.roomData[index].getRoomNo(), rhs.roomData[index].getCapacity());
}
Course :: ~Course()
{
	cout << "destructor is called of course class";
	if (title != NULL)
	{
		delete[]title;
		title = NULL;
	}
}