#include<iostream>
using namespace std;
#include"course.h"
Course :: Course (char *cname,char tname[],int ext,int r,int c,int index)
{
	int length = strlen(cname) + 1;
	if(cname!=NULL)
	{
		for (int i = 0; i < length; i++)
		{
			title[i] = cname[i];
		}
	}
	teacherData[index].setTeacherData(tname,ext);
	roomData[index].setRoomData(r,c);
}
void Course :: display ()
{
	int index;
	cout<<"Enter index value:";
	cin>>index;
	cout<<"Title of course is :"<<title<<"\n Teacher is";
	teacherData[index].displayTeacherData();
	cout<<"in ";
	roomData[index].displayRoomData();
	
}
Course :: Course( Course & c,int index)
{
	int length = strlen(this->title) + 1;
	c.title[20] =this->title[20] ;
	
	//c.teacherData[index].setTeacherData(this->teacherData[index].getTeacherName(), this->teacherData[index].getTeacherExt());
	c.roomData[index].setRoomData(this->roomData[index].getRoomNo(),this->roomData[index].getCapacity());
}
void Course :: operator =(Course & rhs)
{
	int index;
	cout<<"Enter index value:";
	cin>>index;
	rhs.title[20]=this->title[20];
	//rhs.teacherData[index].setTeacherData(this->teacherData[index].getTeacherName(),this->teacherData[index].getTeacherExt());
	rhs.roomData[index].setRoomData(roomData[index].getRoomNo(),roomData[index].getCapacity());
}