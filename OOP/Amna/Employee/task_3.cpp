#include<iostream>
#include<cstring>
using namespace std;
class Employee
{
int employeeID;
char name[50];
char designation [50];
int payScale;
public:
     int getEmployeeID(int id)
	{
		cout<<"Enter Employee ID\t\t";
		cin>>id;
		return id;
	}
	void setEmployeeID(int empID)
	{
		bool flage=true;
		while (flage==true)
		{
			if(empID<0)
			{
				cout<<"Invalid input\n";
				cin>>empID;
			}
			else
			{
				employeeID=empID;
				flage=false;
			}
		}
	}
	char* getName(char d[])
	{	
		cout<<"Enter Employee name\t\t";
		cin.ignore();
		cin.getline(d,50);
		return d;
	}
	void setName(char* d)
	{	
		for(int i=0;i<50;i++)
		{
			name[i]=*(d+i);
		}
	}
	char* getDesignation(char d[])
	{	
		cout<<"Enter Employee Designation\t";
		cin.ignore();
		cin.getline(d,50);
		return d;
	}
	void setDesignation(char* d)
	{	
		for(int i=0;i<50;i++)
		{
			designation[i]=*(d+i);
		}
	}
	int getPayScale(int empScale)
	{
		cout<<"Enter Employee Scale\t\t";
		cin>>empScale;
		return empScale;
	}
	void setPayScale(int scale)
	{	
		bool flage=true;
		while (flage==true)
		{
			if(scale<0||scale>20)
			{
				cout<<"Invalid input\n";
				cin>>scale;
			}
			else
			{
				payScale=scale;
				flage=false;
			}
		}
	}
	/*input output methods*/
	void input(int id, char* empName, char* empDesignation, int empScale)
	{	
		int empID=getEmployeeID(id);
		setEmployeeID(empID);
		char* name=getName(empName);
		setName(name);
		char* designation=getDesignation(empDesignation);
		setDesignation(designation);
		int scale=getPayScale(empScale);
		setPayScale(scale);
	}
	void output()
	{	
		static int employeeNum=1;
		cout<<"Employee "<<employeeNum<<"data\n";
		cout<<"employeeID\t"<<"Employee Name\t"<<"Employee Designation\t"<<"Pay Scale\n";
		cout<<employeeID<<"\t\t"<<name<<"\t\t"<<designation<<"\t\t\t"<<payScale;
		cout<<"\n_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_\n\n";
		employeeNum++;
	}
};
void main()
{
	int id=0, empScale=0;
	char empName[50], empDesignation[50];
	Employee obj[3];
	for(int i=0;i<3;i++)
	{
		obj[i].input(id, empName, empDesignation, empScale);
		cout<<"\n_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_\n\n";
	}
	for(int i=0;i<3;i++)
	{
		obj[i].output();
	}
}