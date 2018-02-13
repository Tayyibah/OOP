#ifndef SET_H
#define SET_H
#include"collection.h"
class set :private collection
{
private:
	int col[30];
public:
	void setMember();
	bool addMember(int m,int l);
	bool searchMember(int m);
	bool deleteMember(int l);
};
#endif;