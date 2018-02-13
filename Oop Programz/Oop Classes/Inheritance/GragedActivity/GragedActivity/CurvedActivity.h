#ifndef CURVEDACTIVITY_H
#define CURVEDACTIVITY_H
#include"GradeActivity.h"
class CurvedActivity:public GradeActivity
{
private:
	int rawScores;
	double percentage;
public:
	CurvedActivity();
	CurvedActivity(int rawScores,double percentage);
	void setScore(int rawScor);
	void setpercentage(int percent);
	int getrawScores();
	double getpercentage();
	~CurvedActivity();
};
#endif
