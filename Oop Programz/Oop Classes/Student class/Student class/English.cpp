#include"English.h"

English::English():Student()
{
}
English::English(int r , char* n):Student(r,n)
{
}
void English::readMarks(ifstream & fin)
{
	int i = 0;
	int n;
	fin >> n;
	while (i<n)
	{
		fin >> StudentRollNumber;
		while ("\n")
		{
			fin >> Studentname;
		}
		fin >>Attendance;
		fin >>Report;
		fin >>Midterm;
		fin >>FinalExam;

		i++;
	}
}
void English::calculateMarks()
{
	double percentage;
	int totalMarks = 0;
	marks[0]=Attendance/100 *10;// = 10%, 
	marks[1]=Report/100 *30;// = 30%,
	marks[2]=Midterm /100 *30;//= 30%, 
	marks[3]=FinalExam/100 *30;// = 30% 
	for (int i = 0; i < 4; i++)
	{
		totalMarks = totalMarks + marks[i];
	}
	percentage = totalMarks / 400 * 100;
	setStudentGrade(percentage);
}
void English::writeRecord(ofstream & fout)
{
	fout << StudentRollNumber << " " << Studentname <<" "<<marks[0]<<" "<<marks[1]<<" "<<marks[2]<<" "<<marks[3]<<" "<<StudentTotalMarks<<"  "<<StudentGrade<<endl;
}