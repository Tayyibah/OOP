#include"GradeActivity.h"

GradeActivity::GradeActivity()
{
	score=0;
}
GradeActivity::GradeActivity(double scr)
{
	score=scr;
}
void GradeActivity::setScore(double scr)
{
	score=scr;
}
double GradeActivity::getScore()
{
	return score;
}
char GradeActivity::getLetterGrade()const
{
	char letterGrade;
	if(score>=90)
		letterGrade='A';
	else if(score>=80)
		letterGrade='B';
	else if(score>=70)
		letterGrade='C';
	else if(score>=60)
		letterGrade='D';
	else if(score>=50)
		letterGrade='E';
	else 
		letterGrade='F';
	return letterGrade;
}
GradeActivity::~GradeActivity()
{
	score=0;
}