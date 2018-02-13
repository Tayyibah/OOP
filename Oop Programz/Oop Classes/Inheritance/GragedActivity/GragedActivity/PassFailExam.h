#ifndef PASSFAILEXAM_H
#define PASSFAILEXAM_H
#include"GradeActivity.h"
class PassFailExam:public GradeActivity
{
private:
	double minPassing;
public:
	PassFailExam();
	PassFailExam(double minPas);
	void setminPassing(double minPas);
	double getminPassing();
	char getLetterGrade()const;
	~PassFailExam();
};
#endif