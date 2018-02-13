#include "Student.h"
#include<cstring>
#include<iostream>
#include<fstream>
using namespace std;
Student::Student() :totalMarks(10)
{
	rollNo = 0;
	name[0] = NULL;
	noOfQuizes = 0;

	getNoOfStudents();
}
Student::Student(int r, char* n, int q, int t) :totalMarks(t)
{
	if (r>0)
	{
		rollNo = r;
	}
	if (n != NULL)
	{
		strcpy(name, n);
	}
	if (q > 0)
	{
		noOfQuizes = q;
	}
	marks = new int[noOfQuizes];
	for(int i = 0;i<noOfQuizes;i++)
	
	{
		marks[i] = 0;
	}
}
Student :: ~Student()
{
	cout << "Desctructor is called.....";
	noOfStudents--;
	delete[] marks;
}

void Student::inputMarks()
{
	for (int i = 0; i < noOfQuizes; i++)
	{
		int num;
		cout << "Enter Marks for" << i + 1 << " subject:\n";
		cin >> num;
		if (num >0)
		{
			marks[i] = num;

		}
		else
		{
			i--;
		}

	}
}
Student::Student(Student & s) :totalMarks(10)
{
	noOfStudents += 1;
	s.rollNo = rollNo;
	strcpy(s.name,name);
	s.noOfQuizes = noOfQuizes;

	for(int i = 0;i<noOfQuizes;i++)
	{
		marks[i] = s.marks[i];
	}
	delete[]s.marks;
}
 int Student::getNoOfStudents()
{
	noOfStudents += 1;
	

	return noOfStudents;
}

 Student  Student::generateOneStudent(Student &s)
{
	 noOfStudents += 1;
	cout << "\nEnter rollno of student:";
	cin >> s.rollNo;
	cout << "\nEnter name of student:";
	cin >> s.name;
	cout << "\nEnter no of quizes :";
	cin >> s.noOfQuizes;
	//s.totalMarks = totalMarks;
	s.inputMarks();
	return *this;
}
void Student::displayDetails()
{
	int sum, average;
	sum = average = 0;
	cout << "\nNAME of student is:"<<name;
	cout << "\nROLL NUMBER of student is:"<<rollNo;
	cout << "\nNO OF QUIZES are:"<<noOfQuizes;
	cout << "\nMARKS OBTAINED n different quizes are:";
	for (int i = 0; i < noOfQuizes; i++)
	{
		cout << "marks of subject"<<i+1<<marks[i];
		sum += marks[i];
	}
	average = sum / noOfQuizes;
	cout << "\nAVERAGE MARKS are:"<<average;

}
//void Student::storeInfile(ofstream &s)
//{
	
//void Student::readFromFile(ifstream &s)
//{
	
//}