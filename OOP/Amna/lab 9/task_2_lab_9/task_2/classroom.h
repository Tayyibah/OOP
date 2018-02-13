#ifndef CLASSROOM_H
#define CLASSROOM_H
class Classroom
{
private:
	int roomNo;
	int capacity;
public:
	Classroom(int r,int c);
	void setRoomData(int r,int c);
	const int getRoomNo();
	const int getCapacity();
	void displayRoomData();

	Classroom(const Classroom & cr);
	void operator =(Classroom & rhs);
};
#endif