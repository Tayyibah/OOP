#ifndef PASSFAILACTIVITY_H
#define PASSFAILACTIVITY_H
#include"PassFailExam.h"
class PassFailActivity:public PassFailExam
{
private:
	int noOfQues;
	double pointOfEach;
	int quesMissed;
public:
	PassFailActivity();
	PassFailActivity(int noOfQues,double pointOfEach,int quesMissed,double minpass);
	void setNoOfQues(int ques);
	void setPointOfEach(int ques,int missed);
	void setQuesMissed(int missed);
	int getNoOfQues();
	double getPointOfEach();
	int getQuesMissed();
	~PassFailActivity();
};
#endif