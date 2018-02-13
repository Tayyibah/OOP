#include"PassFailExam.h"
PassFailExam::PassFailExam()
{
	minPassing=0;
}
PassFailExam::PassFailExam(double minPas)
{
	minPassing=minPas;
}
void PassFailExam::setminPassing(double minPas)
{
	minPassing=minPas;
}
double PassFailExam::getminPassing()
{
	return minPassing;
}
char PassFailExam::getLetterGrade()const
{
	char letterGrade;
	if(score>=minPassing)
		letterGrade='P';
	else 
		letterGrade='F';
	return letterGrade;
}
PassFailExam::~PassFailExam()
{
	minPassing=0;
}