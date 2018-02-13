#include<iostream>
using namespace std;
#include"classroom.h"

Classroom::Classroom(int r, int c)
{
	setRoomData(r, c);
}
void Classroom::setRoomData(int r, int c)
{
	if (r > 0)
	{
		roomNo = r;
	}
	if (c > 0)
	{
		capacity = c;
	}
}
const int Classroom::getRoomNo()
{
	return roomNo;
}
const int Classroom::getCapacity()
{
	return capacity;
}
void Classroom::displayRoomData()
{
	cout << "Room no is:" << roomNo << "with capacity of " << capacity << " members..";
}
Classroom::Classroom(const Classroom & cr)
{
	this->capacity = cr.capacity;
	this->roomNo = cr.roomNo;
}
void Classroom:: operator =(Classroom & rhs)
{
	this->capacity = rhs.capacity;
	this->roomNo = rhs.roomNo;
}