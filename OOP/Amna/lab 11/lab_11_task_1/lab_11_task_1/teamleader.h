#ifndef TEAMLEADER_H
#define TEAMLEADER_H
#include"ProductionWorker.h"



class TeamLeader : public productionWorker
{
private:
	double monthlyBonus;
	int training;
	int numTraining;

public:
	TeamLeader(char*, int, char*, int, double, double, int, int);
	void setTeam(double, int, int);
	double getMonthlyBonus();
	int getTraining();
	int getNumTraining();
	void print();

};
#endif
