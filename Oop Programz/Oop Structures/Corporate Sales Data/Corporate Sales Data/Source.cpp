#include<iostream>
using namespace std;
struct direction
{
	char division_Name ;
	int first_Quarter_Sales ;
	int second_Quarter ;
	int sales_Third_Quarter_Sales; 
	int fourth_Quarter_Sales ;
	int average_Quarterly_Sales;
};

int main()
{
	direction e,w,n,s;
	char dir;
	int total;
	cout<<"Enter any direction ";
	cin>>dir;
	if(dir=='e')
	{
		cout<<"Enter the division name:";
		cin>>e.division_Name ;
		cout<<"Enter the first quarter sale:";
		cin>>e.first_Quarter_Sales ;
		cout<<"Enter the second quarter sale:";
		cin>>e.second_Quarter ;
		cout<<"Enter the Third quarter sale:";
		cin>>e.sales_Third_Quarter_Sales; 
		cout<<"Enter the fourth quarter sale:";
		cin>>e.fourth_Quarter_Sales ;
		cout<<"The average quartly sales is ";
		total=e.first_Quarter_Sales+e.second_Quarter+e.sales_Third_Quarter_Sales+e.fourth_Quarter_Sales;
		e.average_Quarterly_Sales=total/4;
		cout<<"The average sale of a company is "<<e.average_Quarterly_Sales<<endl;
	}
	else if(dir=='w')
	{
		cout<<"Enter the division name:";
		cin>>w.division_Name ;
		cout<<"Enter the first quarter sale:";
		cin>>w.first_Quarter_Sales ;
		cout<<"Enter the second quarter sale:";
		cin>>w.second_Quarter ;
		cout<<"Enter the Third quarter sale:";
		cin>>w.sales_Third_Quarter_Sales; 
		cout<<"Enter the fourth quarter sale:";
		cin>>w.fourth_Quarter_Sales ;
		cout<<"The average quartly sales is ";
		total=w.first_Quarter_Sales+w.second_Quarter+w.sales_Third_Quarter_Sales+w.fourth_Quarter_Sales;
		w.average_Quarterly_Sales=total/4;
		cout<<"The average sale of a company is "<<w.average_Quarterly_Sales<<endl;
	}
	else if(dir=='n')
	{
		cout<<"Enter the division name:";
		cin>>n.division_Name ;
		cout<<"Enter the first quarter sale:";
		cin>>n.first_Quarter_Sales ;
		cout<<"Enter the second quarter sale:";
		cin>>n.second_Quarter ;
		cout<<"Enter the Third quarter sale:";
		cin>>n.sales_Third_Quarter_Sales; 
		cout<<"Enter the fourth quarter sale:";
		cin>>n.fourth_Quarter_Sales ;
		cout<<"The average quartly sales is ";
		total=n.first_Quarter_Sales+n.second_Quarter+n.sales_Third_Quarter_Sales+n.fourth_Quarter_Sales;
		n.average_Quarterly_Sales=total/4;
		cout<<"The average sale of a company is "<<n.average_Quarterly_Sales<<endl;
	}

	else if(dir=='s')
	{
		cout<<"Enter the division name:";
		cin>>s.division_Name ;
		cout<<"Enter the first quarter sale:";
		cin>>s.first_Quarter_Sales ;
		cout<<"Enter the second quarter sale:";
		cin>>s.second_Quarter ;
		cout<<"Enter the Third quarter sale:";
		cin>>s.sales_Third_Quarter_Sales; 
		cout<<"Enter the fourth quarter sale:";
		cin>>s.fourth_Quarter_Sales ;
		cout<<"The average quartly sales is ";
		total=s.first_Quarter_Sales+s.second_Quarter+s.sales_Third_Quarter_Sales+s.fourth_Quarter_Sales;
		s.average_Quarterly_Sales=total;
		cout<<"The average sale of a company is "<<s.average_Quarterly_Sales<<endl;
	}
	return 0;
}