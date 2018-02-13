#include "Student.h"
#include<cstring>
#include<iostream>
using namespace std;
Student :: Student():totalMarks(10)
{
	rollNo = 0;
	name[0] = NULL ;
	noOfQuizes = 0;

}
Student :: Student(int r,char* n ,int q , int t):totalMarks(t)
{
	if(r>0)
	{
		rollNo = r;
	}
	if(n != NULL)
	{
		strcpy(name , n);
	}
	if(q > 0)
	{
		noOfQuizes = q;
	}
	marksInQuizes = new int [noOfQuizes];
	int i =0;
	while(marksInQuizes[i] != NULL)
	{
		marksInQuizes[i] = 0;
		i++;
	}
}
Student :: ~Student()
{
	delete [] marksInQuizes;
}
void Student :: inputMarks()
{
	for(int i=0;i < noOfQuizes ; i++)
	{
		int check;
		cout<<"Enter Marks "<<i+1 <<" subject\n";
		cin>>check;
		if(check >0)
		{	marksInQuizes[i] = check;
		
		}
		else
		{
			i--;
		}

	}
}
Student :: Student (Student & s):totalMarks(10)
{
	int i =0;
	while(s.marksInQuizes[i] != NULL)
	{
		marksInQuizes[i] = s.marksInQuizes[i];
		i++;
	}
}
int Student :: getNoOfStudents()
{
	return noOfStudents;
}
Student generateOneStudent()
{

}