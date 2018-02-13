#ifndef BUILDING_H

#define	BUILDING_H

#include <string>
#include "Room.h"

using namespace std;


class Building
{
	string name;
	Room  arr[5];
	int size;
public:
	Building(string);
	Building(string, Room);
	bool addRoom(Room);
	void print() const;

};

#endif // !BUILDING_H

