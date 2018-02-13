#ifndef ROOM_H
#define ROOM_H

#include <string>

using namespace std;

class Room
{
	string name;
public:
	Room();
	Room(string);
	void print() const;
	void setName(string);
	string getName() const;
};

#endif // !ROOM_H


