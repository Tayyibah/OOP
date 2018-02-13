#ifndef SET_H
#define SET_H
#include"collection.h"
class set:private collection
{
public:
	bool addMember(int ind,int val);
	bool searchMember(int val);
	bool deleteMember(int ind);

};
#endif