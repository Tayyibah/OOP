#include"CurvedActivity.h"

CurvedActivity::CurvedActivity()
{
	 rawScores=0;
	 percentage=0;
}
CurvedActivity::CurvedActivity(int rawScor,double percent)
{
	 rawScores=rawScor;
	 percentage=percent;
}
void CurvedActivity::setScore(int rawScor)
{
	 rawScores=rawScor;
	 GradeActivity::setScore(rawScor*percentage);
}
void CurvedActivity::setpercentage(int percent)
{
	 percentage=percent;
}
int CurvedActivity::getrawScores()
{
	return rawScores;
}
double CurvedActivity::getpercentage()
{
	return percentage;
}
CurvedActivity::~CurvedActivity()
{
	 rawScores=0;
	 percentage=0;
}
