#include"FinalExam.h"
#include<iostream>
using namespace std;
FinalExam::FinalExam()
{
	noOfQues=0;
	pointOfEach=0;
	quesMissed=0;
}
FinalExam::FinalExam(int noOfQues,double pointOfEach,int quesMissed)
{
	noOfQues=noOfQues;
	pointOfEach=pointOfEach;
	quesMissed=quesMissed;
}
void FinalExam::setNoOfQues(int ques)
{
	noOfQues=ques;
}
void FinalExam::setPointOfEach(int ques,int missed)
{
	noOfQues=ques;
	quesMissed=missed;
	pointOfEach=100/(noOfQues);
	int score=100-pointOfEach*missed;
	setScore(score);
	adjustScore();
}
int FinalExam::adjustScore()
{
	double fraction=score-static_cast<int>(score);
	if(fraction>=0.5)
	{
		score=score+1-fraction;
	}
	return score;
}
void FinalExam::setQuesMissed(int missed)
{
	quesMissed=missed;
}
int FinalExam::getNoOfQues()
{
	return noOfQues;
}
double FinalExam::getPointOfEach()
{
	return pointOfEach;
}
int FinalExam::getQuesMissed()
{
	return quesMissed;
}
FinalExam::~FinalExam()
{
	noOfQues=0;
	pointOfEach=0;
	quesMissed=0;
}