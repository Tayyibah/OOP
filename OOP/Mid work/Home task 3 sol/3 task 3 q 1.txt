#include<iostream>
using namespace std;

struct monthlyBudget
{
	float housing;
	float utilities;
	float householdExpenses;
	float transportation;
	float food;
	float medical;
	float insurance;
	float entertainment;
	float clothing;
	float miscellaneous;
};

float getBudgetData( monthlyBudget*);
float showData( monthlyBudget*);
float addUsedBugdet;
float addOrgBugdet;
float checkMonthlyAmount(float *addOrgBugdet , float *addUsedBugdet);
void checkIndividualBgt( monthlyBudget* rs,monthlyBudget* b);
int main()
{
	monthlyBudget a,orgDt;
	addOrgBugdet=showData(&orgDt);
	addUsedBugdet=getBudgetData(&a);
	checkMonthlyAmount(&addOrgBugdet,&addUsedBugdet);
	checkIndividualBgt(&a,&orgDt);

	return 0;
}
float showData( monthlyBudget* b)
{
	(*b).housing=500;
	(*b).utilities=150;
	(*b).householdExpenses=65;
	(*b).transportation=50;
	(*b).food=250;
	(*b).medical=30;
	(*b).insurance=100;
	(*b).entertainment=150;
	(*b).clothing=75;
	(*b).miscellaneous=50;
	addOrgBugdet=(*b).housing+(*b).utilities+(*b).householdExpenses+(*b).transportation+(*b).food+(*b).medical+(*b).insurance+(*b).entertainment+(*b).clothing+(*b).miscellaneous;
	return addOrgBugdet;
}

float getBudgetData( monthlyBudget* rs)
{
	cout<<"Enter the amount of bugdet of Housing for a month:";
	cin>>(*rs).housing;
	cout<<"Enter the amount of bugdet of utilities for a month:";
	cin>>(*rs).utilities;
	cout<<"Enter the amount of bugdet of householdExpenses for a month:";
	cin>>(*rs).householdExpenses;
	cout<<"Enter the amount of bugdet of transportation for a month:";
	cin>>(*rs).transportation;
	cout<<"Enter the amount of bugdet of food for a month:";
	cin>>(*rs).food ;
	cout<<"Enter the amount of bugdet of medical for a month:";
	cin>>(*rs).medical;
	cout<<"Enter the amount of bugdet of insurance for a month:";
	cin>>(*rs).insurance;
	cout<<"Enter the amount of bugdet of entertainment for a month:";
	cin>>(*rs).entertainment;
	cout<<"Enter the amount of bugdet of clothing for a month:";
	cin>>(*rs).clothing;
	cout<<"Enter the amount of bugdet of miscellaneous for a month:";
	cin>>(*rs).miscellaneous;
	addUsedBugdet=(*rs).housing+(*rs).utilities+(*rs).householdExpenses+(*rs).transportation+(*rs).food +(*rs).medical+(*rs).insurance+(*rs).entertainment+(*rs).clothing+(*rs).miscellaneous;
	return addUsedBugdet;
}


float checkMonthlyAmount(float *addOrgBugdet , float *addUsedBugdet)
{
	if(addUsedBugdet<addOrgBugdet)
		cout<<"The budget is under the monthly budget  i.e "<<*addOrgBugdet-*addUsedBugdet<<endl;
	else
		cout<<"The budget is over the monthly budget i.e "<<*addUsedBugdet-*addOrgBugdet<<endl;
	cout<<endl;
	return 0;

}


void checkIndividualBgt( monthlyBudget* rs,monthlyBudget* b)
{
	if((*rs).housing>(*b).housing)
		cout<<"Housing bugdet is less than monthly bugdet"<<endl;
	else
		cout<<"Housing bugdet is more  than monthly bugdet"<<endl;
	cout<<endl;
	
	if((*rs).utilities>(*b).utilities)
		cout<<"utilities bugdet is less than monthly bugdet"<<endl;
	else
		cout<<"utilities bugdet is more than monthly bugdet"<<endl;
	cout<<endl;
	
	if((*rs).householdExpenses>(*b).householdExpenses)
		cout<<"household Expenses bugdet is less than monthly bugdet"<<endl;
	else
		cout<<"household Expenses bugdet is more or equal than monthly bugdet"<<endl;
	cout<<endl;

	if((*rs).transportation>(*b).transportation)
		cout<<"transportation bugdet is less than monthly bugdet"<<endl;
	else
		cout<<"transportation bugdet is more  than monthly bugdet"<<endl;
	cout<<endl;

	if((*rs).food>(*b).food)
		cout<<"food bugdet is less than monthly bugdet"<<endl;
	else
		cout<<"food bugdet is more  than monthly bugdet"<<endl;
	cout<<endl;

	if((*rs).medical>(*b).medical)
		cout<<"medical bugdet is less than monthly bugdet"<<endl;
	else
		cout<<"medical bugdet is more than monthly bugdet"<<endl;
	cout<<endl;

	if((*rs).insurance>(*b).insurance)
		cout<<"insurance bugdet is less than monthly bugdet"<<endl;
	else
		cout<<"insurance bugdet is more than monthly bugdet"<<endl;
	cout<<endl;

	if((*rs).entertainment>(*b).entertainment)
		cout<<"entertainment bugdet is less than monthly bugdet"<<endl;
	else
		cout<<"entertainment bugdet is more  than monthly bugdet"<<endl;
	cout<<endl;
	
	if((*rs).miscellaneous>(*b).miscellaneous)
		cout<<"miscellaneous bugdet is less than monthly bugdet"<<endl;
	else
		cout<<"miscellaneous bugdet is more  than monthly bugdet"<<endl;
	cout<<endl;
}