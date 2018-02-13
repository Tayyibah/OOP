#ifndef STUDENT_H
#define STUDENT_H
class Student
{
private:
	char name[100];
	char rollNo[11];
	int semester;
	float CGPA;
public :
	void setRollNo(char * r);
	bool isValidRollNo(char * s);
	void setSemester( int s);
	void setName(char * n);
	void setCGPA(float g);
	const char * getRollNo();
	int getSemester();
	const char * getName();
	float getCGPA();
	bool isStudentDropOut();
	bool isStudentOnProbation();
};
#endif