#include<iostream>
using namespace std;
#include"Student.h"
int main()
{
	Student s;
	s.setName ("TAYYBAH");
	s.setRollNo("BSEF14A011");
	s.setCGPA(2.9);
	cout<<"Entered name is :"<<s.getName()<<endl;
	cout<<"Entered Roll number is :"<<s.getRollNo()<<endl;
	cout<<"Entered gpa is:"<<s.getCGPA()<<endl;
	cout<<"Is student drop out :"<<s.isStudentDropOut()<<endl;
	cout<<"IS student is in prhobitation:"<<s.isStudentOnProbation()<<endl;
	return 0;
}