#include "Room.h"
#include <iostream>

using namespace std;


Room::Room()
{
	this->name = "";
}
Room::Room(string name)
{
	this->name = name;
}

void Room::setName(string name)
{
	this->name = name;
}

string Room::getName() const
{
	return this->name;
}

void Room::print() const
{
	cout << name << ", ";
}
