#include"Computer.h"

Computer::Computer():Student()
{
}
Computer::Computer(int r , char* n):Student(r,n)
{
}
void Computer::readMarks(ifstream & fin)
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
		fin >>Project;// = 25%, 
		fin >>Midterm;// = 50%
		fin >>FinalExam;// = 50%
		i++;
	}
}
void Computer::calculateMarks()
{
	double percentage;
	int totalMarks = 0;
	int totalQuizes = 0;
	marks[0]=Project/100 *25;
	marks[1]=Midterm/100 *35;
	marks[2]=FinalExam/100 *40;
	for (int i = 0; i < 4; i++)
	{
		totalMarks = totalMarks + marks[i];
	}
	percentage = totalMarks / 300 * 100;
	setStudentGrade(percentage);
}
void Computer::writeRecord(ofstream & fout)
{
	fout << StudentRollNumber << " " << Studentname <<" "<<marks[0]<<" "<<marks[1]<<" "<<marks[2]<<" "<<marks[3]<<" "<<StudentTotalMarks<<"  "<<StudentGrade<<endl;
}