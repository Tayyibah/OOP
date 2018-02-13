#include<iostream>
#include"GradeActivity.h"
#include"PassFailExam.h"
#include"PassFailActivity.h"
using namespace std;
int main()
{
	GradeActivity g;
	PassFailExam p;
	PassFailActivity pa;
	p.setminPassing(0);
	cout<<p.getminPassing()<<endl;
	cout<<p.getLetterGrade()<<endl;
	pa.setNoOfQues(3);
	pa.setPointOfEach(2,1);
	pa.setQuesMissed(2);
	pa.getNoOfQues();
	cout<<pa.getPointOfEach()<<endl;
	cout<<pa.getQuesMissed()<<endl;
	return 0;
}