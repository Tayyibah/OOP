#include<iostream>
using namespace std;
#include"EngStudent.h"
#include"Student.h"

English::English() :Student()
{}
English::English(int r, string n) :Student(r, n)
{}
void English::readMarks(ifstream& fin)
{
	int i = 0;
	int n;
	fin >> n;
	while (i<n)
	{
		fin >> rollNo;
		while ("\n")
		{
			fin >> name;
		}
		for (int j = 0; j < 3; j++)
		{
			fin >> marks[j];
		}
		i++;
	}
}
void English::calculateMarks()
{
	double percentage;
	totalMarks = 0;
	for (int i = 0; i < 4; i++)
	{
		totalMarks = totalMarks + marks[i];
	}
	percentage = totalMarks / 400 * 100;
	if (percentage >= 90)
	{
		grade = 'A';
	}
	else if (percentage >= 80 && percentage <= 89)
	{
		grade = 'B';
	}
	else if (percentage >= 70 && percentage <= 79)
	{
		grade = 'C';
	}
	else if (percentage >= 60 && percentage <= 69)
	{
		grade = 'D';
	}
	else
	{
		grade = 'F';
	}
}
void English::writeRecord(ofstream& fout)
{
	//fout << "Attendance (A, 10%), Project (P, 30%), Midterm (M, 30%), Final (F, 30%)\n";
	//fout << "Roll No.	Student Name	A	M   F	Total		Grade\n";
	//fout << "-------------------------------------------------------------------";
	fout << rollNo << " " << name <<" "<<marks[0]<<" "<<marks[1]<<" "<<marks[2]<<" "<<marks[3]<<" "<<totalMarks<<"  "<<grade<<endl;

}