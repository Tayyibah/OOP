#include"TeamLeader.h"
#include "ProductionWorker.h"
#include<iostream>
using namespace std;

TeamLeader::TeamLeader(char* n, int num, char* h, int s, double r, double mb, int train, int numTrain) : productionWorker(s,r,n, num, h)
{
	monthlyBonus = mb;
	training = train;
	numTraining = numTrain;
}

void TeamLeader::setTeam(double mb, int t, int numT)
{
	if (mb > 0)
	{
		monthlyBonus = mb;
	}
	else
	{
		monthlyBonus = 0;
	}

	if (t > 0)
	{
		training = t;
	}

	else
	{
		training = 0;
	}

	if (numT > 0)
	{
		numTraining = numT;
	}

	else
	{
		numTraining = 0;
	}
}

double TeamLeader::getMonthlyBonus()
{
	return monthlyBonus;
}

int TeamLeader::getTraining()
{
	return training;
}

int TeamLeader::getNumTraining()
{
	return numTraining;
}

void TeamLeader::print()
{
	cout << "EMPLOYEE NAME IS: " << getname();
	cout << "\nEMPLOYEE NUMBER IS: " << getEmployeeNo();
	cout << "\nEMPLOYEE'S HIRE DATE IS: " << getHireDate();
	cout << "\nEMPLOYEE'S SHIFT IS" << getShift();
	cout << "\nEMPLOYEE'S HOURLY PAY-RATE IS: " <<getHourlyPayRate();
	cout << "\nEMPLOYEE,S MONTHLY BONUS IS: " << monthlyBonus;
	cout << "\nTRAINING HOURS FOR EMPLOYEE ARE: " << training;
	cout << "\nNUMBER OF TRAININGS OF EMPLOYEE ARE: " << numTraining;
}
