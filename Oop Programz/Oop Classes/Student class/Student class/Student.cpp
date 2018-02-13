#include"Student.h"

Student::Student()
{
	StudentRollNumber=0; 
	Studentname=NULL;
	StudentTotalMarks=0; 
	StudentGrade=' ';
}
Student::Student(int r, char * n)
{
	StudentRollNumber = r;
	Studentname = n;
}
void Student::setStudentRollNumber(int rollNo) 
{
	if(rollNo>=0)
		StudentRollNumber=rollNo; 
}
void Student::setStudentname(char * nam)
{
	Studentname=nam;
}
void Student::setStudentTotalMarks(double total)
{
	StudentTotalMarks=total;
}
void Student::setStudentGrade(int percentage)
{
	if (percentage >= 90)
	{
		StudentGrade = 'A';
	}
	else if (percentage >= 80 && percentage <= 89)
	{
		StudentGrade = 'B';
	}
	else if (percentage >= 70 && percentage <= 79)
	{
		StudentGrade = 'C';
	}
	else if (percentage >= 60 && percentage <= 69)
	{
		StudentGrade = 'D';
	}
	else
	{
		StudentGrade = 'F';
	}
}; 
int Student::getStudentRollNumber()
{
	return StudentRollNumber;
}
char* Student::getStudentname()
{
	return Studentname;
}
double Student::getStudentTotalMarks() 
{
	return StudentTotalMarks;
}
char Student::getStudentGrade()
{
	return StudentGrade;
}