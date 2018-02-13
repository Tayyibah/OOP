#ifndef PERSON_H
#define PERSON_H
class person
{
private:
	char *name;
	int age;
public:
	person();
	person(char *,int);
	void setname(char *n);
	void setage(int a);
	 char * getname();
	 int getage();
	~person();
};
#endif