#ifndef TEACHER_H
#define TEACHER_H
const int SIZE = 40;
class Teacher
{
private:
	char *name;
	int extention;
public:
	Teacher(char *n, int ext);
	void setTeacherData(char *n, int ext);
	const char* getTeacherName();
	const int getTeacherExt();
	void displayTeacherData();
	Teacher(const Teacher & t);
	void operator =(Teacher & rhs);
	~Teacher();
};
#endif