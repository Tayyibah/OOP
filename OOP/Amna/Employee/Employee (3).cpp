#include<iostream>
using namespace std;
class Employee
{
	int id;
	char *name[50];
	char *designation[50];
	int payscale;
public:
	void getemployeeid()
	{
	cout<<"enter id of employee:";
	cin>>id;
	}
	void setemployeeid(int i)
	{
	cout<<"enter new id:";
	cin>>i;
	id =i;
	}
	char* getname()
	{
	cout<<"enter name";
	for(int i=0;i<50;i++)
		cin>>name[i];
	return *name;
	}
	char* setname(char *d[])
	{
	cout<<"enter new name:";
	for(int i=0;i<50;i++)
	{
		cin>>*d[i];
		*name[i]=*d[i];
	}
	return *name;
	}
	char* getdesignation()
	{
	cout<<"enter designation of that employee:";
	for (int i=0;i<50;i++)
		cin>>*designation[i];
	return *designation;
	}
	char* setdesignation(char *d[])
	{
		cout<<"enter new designation of your employee:";
		for(int i=0;i<50;i++)
		{
		cin>>*d[i];
		*designation[i]=*d[i];
		}
		return *designation;
	}
	int getpayscale()
	{
	cout<<"enter pay scale of your employee:";
	cin>>payscale;
	return payscale;
	}
	int setpayscale(int newpscale)
	{
	cout<<"enter new payscale for your employee:";
	cin>>newpscale;
	payscale=newpscale;
	return payscale;
	}
	void input(int empid,char *empname[50],char *empdes[50],int empscale)
	{
	empid=id;
	*empname[50]=*name[50];
	*empdes[50]=*designation[50];
	empscale=payscale;
	}
	void output()
	{
	cout<<"ID of employee is:"<<id<<endl;
	cout<<"NAME of employee is:"<<*name<<endl;
	cout<<"DESIGNATION of employee is:"<<designation<<endl;
	cout<<"PAY SCALE of employee is:"<<payscale<<endl;
	}
};
void main ()
{
	Employee data1;Employee data2;Employee data3;
	char name[50],des[50];
	int e_id,ps;
	int id=data1.getemployeeid;
	
	char *n[50]=data1.(*getname)[i];
	char *d[50]=data1.(*getdesignation)[i];
	data1.input(id,n[50],d[50]);
	data1.output();

	data2.setname(name[]);
	data2.setdesignation(des[]);
	data2.setemployeeid(e_id);
	data2.setpayscale(ps);
	data2.output();


	data3.setname(name[]);
	data3.setdesignation(des[]);
	data3.setemployeeid(e_id);
	data3.setpayscale(ps);
	data3.output();
}