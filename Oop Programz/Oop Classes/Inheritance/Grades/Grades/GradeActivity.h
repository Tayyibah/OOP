#ifndef GRADEACTIVITY_H
#define GRADEACTIVITY_H
class GradeActivity
{
protected:
	double score;
public:
	GradeActivity();
	GradeActivity(double scr);
	void setScore(double scr);
	double getScore();
	char getLetterGrade()const;
	~GradeActivity();
};
#endif
