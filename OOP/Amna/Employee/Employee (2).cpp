#include<iostream>
#include<cstring>
using namespace std;
class Employee
{
	private:
		char* name;
		long id;
		double salary;

	public:
		Employee();
		Employee(char*,long,double);
		Employee(const Employee &E);

		void inputEmployee();
		void setName(char*);
		char* getName();
		void setId(long);
		long getId();
		void setSalary(double);
		double getSalary();

		void outputEmployee();
		~Employee();
};
Employee::Employee()
{
	
	name ='\0';
	id = 0;
	salary = 0.0;
}
Employee::Employee(char * n,long id1,double s)
{
	
	if(n!=NULL)
	{
		name=new char[strlen(n)+1];
		strcpy(name,n);
	}
	
	if(id1>0)
	{
		id=id1;
	}

	if(s>0)
	{
		salary=s;
	}
}

void Employee::inputEmployee()
{
	char tempName[30];
	
	cout<<"Enter name\n";
	cin>>tempName;

	int size =strlen(tempName);
	name=new char[size+1];
	strcpy(name,tempName);

	cout<<"Enter employee's ID\n";
	cin>>id;

	cout<<"Enter employee's Salary\n";
	cin>>salary;

}
void Employee::setName(char* n)
{
	if(name != NULL)
	{
		delete[] name;
		name='\0';
	}
	if(n != '\0')
	{
		int len=strlen(n);
		name=new char[len+1];
		strcpy(name,n);
	}

}
char* Employee::getName()
{
	return name;
}
void Employee::setId(long i)
{
	if(id != 0)
	{
		id=0;
	}
	if(i!=0)
	{
		id=i;
	}

}
long Employee::getId()
{
	return id;
}
void Employee::setSalary(double s)
{
	if(s>0)
	{
		salary=s;
	}
}
double Employee::getSalary()
{
	return salary;
}
Employee::Employee(const Employee & E)
{
	cout << "copy constructor is called...."<<endl;
	if(E.name!=NULL)
	{
		int len=strlen(E.name);
		name=new char[len+1];
		strcpy(name,E.name);
	}
	
	if(E.id>0)
	{
		id=E.id;
	}

	if(E.salary>0)
	{
		salary=E.salary;
	}

} 
void Employee::outputEmployee()
{
	cout<<"_____________________________\n";
	cout<<"Employee's name:  \t\t"<<name<<endl;
	cout<<"Employee's id:  \t\t"<<id<<endl;
	cout<<"Employee's salary:  \t\t"<<salary<<endl;
	cout<<"-------------------------------\n";
}
Employee::~Employee()
{
	if(name !='\0')
	{
		delete []name;
		name = 0;
	}

}
void main()
{

	Employee emp("Ali",1234,50000);

	cout<<"SETTER FUNCTIONS:\n";
	cout<<"***************\n";
	char name1[30];
	cout<<"Enter name to set\n";
	cin>>name1;
	emp.setName(name1);
	char* name=emp.getName();

	long id;
	cout<<"Enter id to set\n";
	cin>>id;
	emp.setId(id);
	long i=emp.getId();

	double sal;
	cout<<"Enter salary to set\n";
	cin>>sal;
	emp.setSalary(sal);
	double salary1=emp.getSalary();

	cout<<"\nOutput of setters is:\n";
	emp.outputEmployee();

	Employee emp2(emp);
	cout<<"employee2 "<<endl;
	emp2.outputEmployee();
	
	int choice;
	cout<<"do you want to give input\npress 1:\t";cin>>choice;

	if(choice==1)
	{
	cout<<"Calling input function\n";
	cout<<"******************\n";
	emp.inputEmployee();
	

	cout<<"\nOutput of input function is:\n";
	emp.outputEmployee();
	}
	else
	{
		exit(0);
	}
}