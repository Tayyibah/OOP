#include"PassFailActivity.h"
#include<iostream>
using namespace std;
PassFailActivity::PassFailActivity()
{
	noOfQues=0;
	pointOfEach=0;
	quesMissed=0;
}
PassFailActivity::PassFailActivity(int noOfQues,double pointOfEach,int quesMissed,int minpass):PassFailExam(minpass)
{
	noOfQues=noOfQues;
	pointOfEach=pointOfEach;
	quesMissed=quesMissed;
}
void PassFailActivity::setNoOfQues(int ques)
{
	noOfQues=ques;
}
void PassFailActivity::setPointOfEach(int ques,int missed)
{
	noOfQues=ques;
	quesMissed=missed;
	pointOfEach=100/(noOfQues);
	int score=100-pointOfEach*missed;
	setScore(score);
}
void PassFailActivity::setQuesMissed(int missed)
{
	quesMissed=missed;
}
int PassFailActivity::getNoOfQues()
{
	return noOfQues;
}
double PassFailActivity::getPointOfEach()
{
	return pointOfEach;
}
int PassFailActivity::getQuesMissed()
{
	return quesMissed;
}
PassFailActivity::~PassFailActivity()
{
	noOfQues=0;
	pointOfEach=0;
	quesMissed=0;
}