#include"PassFailActivity.h"
#include"GradeActivity.h"
PassFailActivity::PassFailActivity()
{
	noOfQues=0;
	pointOfEach=0;
	quesMissed=0;
}
PassFailActivity::PassFailActivity(int noOfQue,double pointOfEac,int quesMisse,double minpass):PassFailExam(minpass)
{
	noOfQues=noOfQue;
	pointOfEach=pointOfEac;
	quesMissed=quesMisse;
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
	double score=100-pointOfEach*missed;
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