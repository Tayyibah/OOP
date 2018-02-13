
#include "Building.h"
#include <iostream>

using namespace std;


Building::Building(string name = "")
{
	this->name = name;
	this->size = -1;
}

Building::Building(string name, Room r)
{
	this->name = name;
	size = 0;
	arr[size] = r;
}

bool Building::addRoom(Room r)
{
	if (size == 4) return false;
	size++;
	arr[size] = r;
	return true;
}
void Building::print() const
{
	cout << "Building Name = " << name << ":\t";
	for (int i = 0; i < 5; i++)	this->arr[i].print();
	cout << "\n\n";
}