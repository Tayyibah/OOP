#include"Student.h"
#include<iostream>
using namespace std;

	void Student::setRollNo(char*s)
	{
		if(isValidRollNo(s+7))
			strcpy(rollNo,s);
	}
	void Student::setSemester(int s)
	{
		if(s>=1&&s<=8)
			semester=s;
	}
	void Student::setName(char*n)
	{
		strcpy(name,n);
	}
	void Student::setCGPA(float cgpa)
	{
		if(cgpa>=0.0&&cgpa<=4.0)
			CGPA=cgpa;
	}
	bool Student::isValidRollNo(char * s)
	{
		int r;
		r=*s-'0';
		r=r*10;
		r+=*(s+1)-'0';
		r=r*10;
		r+=*(s+2)-'0';
		
		if(r>=001&&r<=999 && *(s+3)=='\0' )
			return true;
		return false;
	}
	const char * Student::getRollNo()
	{
		return rollNo;
	}
	int Student::getSemester()
	{
		return semester;
	}
	const char * Student::getName()
	{
		return name;
	}
	float Student::getCGPA()
	{
		return CGPA;
	}
	bool Student::isStudentDropOut()
	{
		if(semester==1&&CGPA<1.5||semester!=1&&CGPA<1.7)
			return true;
		return false;
	}
	bool Student::isStudentOnProbation()
	{
		if(semester==1&&CGPA>=1.5&&CGPA<2||semester!=1&&CGPA>=1.7&&CGPA<2)
			return true;
		return false;
	}