
#include<fstream>
#ifndef STUDENT_H
#define STUDENT_H
const int SIZE =40;
class Student
{
private:
	int rollNo;
	char name[SIZE];
	int* marksInQuizes;
	int noOfQuizes;
	const int totalMarks;
	static int noOfStudents;

public:
	Student();
	Student(int , char * , int  , int);
	~Student();
	void inputMarks();
	Student (Student &);
	static int getNoOfStudents();

	void displayDetails();
	void storeInfile(ofstream &);
	void readFromFile(ifstream &);


};
#endif