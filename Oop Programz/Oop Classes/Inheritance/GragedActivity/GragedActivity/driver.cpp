#include<iostream>
#include"FinalExam.h"
#include"GradeActivity.h"
#include"CurvedActivity.h"
#include"PassFailExam.h"
#include"PassFailActivity.h"
using namespace std;
int main()
{
	FinalExam f;
	GradeActivity g;
	CurvedActivity c;
	PassFailExam p;
	PassFailActivity pa;
	f. setNoOfQues(8);
	f. setQuesMissed(1);
	f. setPointOfEach(f. getNoOfQues(),f. getQuesMissed());
	cout<<"Total Quesions: ";
	cout<<f. getNoOfQues()<<endl;
	cout<<"Point Of Each Quesions: ";
	cout<<f. getPointOfEach()<<endl;
	cout<<"Total Quesions Missed: ";
	cout<<f. getQuesMissed()<<endl;
	cout<<"U have got scores : ";
	cout<<f. getScore()<<endl;
	cout<<"Ur Letter Grade is : ";
	cout<<f. getLetterGrade()<<endl;
	cout<<"Adjusted scores are ";
	cout<<f. getScore()<<endl;
	c.setScore(88);
	c.setpercentage(100);
	cout<<c.getrawScores()<<endl;
	cout<<c.getpercentage()<<endl;
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