#ifndef FINALEXAM_H
#define FINALEXAM_H
#include"GradeActivity.h"
class FinalExam:public GradeActivity
{
private:
	int noOfQues;
	double pointOfEach;
	int quesMissed;
public:
	FinalExam();
	FinalExam(int noOfQues,double pointOfEach,int quesMissed);
	void setNoOfQues(int ques);
	void setPointOfEach(int ques,int missed);
	void setQuesMissed(int missed);
	int getNoOfQues();
	double getPointOfEach();
	int getQuesMissed();
	int adjustScore();
	~FinalExam();
};
#endif
