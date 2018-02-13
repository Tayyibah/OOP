//#include<iostream>
//#include<cstring>
//using namespace std;
//class Employee
//{
//int employeeID;
//char name[50];
//char department [50];
//char position[50];
//public:
//     int getEmployeeID(int id)
//	{
//		cout<<"Enter Employee ID\t\t";
//		cin>>id;
//		return id;
//	}
//	void setEmployeeID(int empID)
//	{
//		bool flage=true;
//		while (flage==true)
//		{
//			if(empID<0)
//			{
//				cout<<"Invalid input\n";
//				cin>>empID;
//			}
//			else
//			{
//				employeeID=empID;
//				flage=false;
//			}
//		}
//	}
//	char* getName(char d[])
//	{	
//		cout<<"Enter Employee name\t\t";
//		cin.ignore();
//		cin.getline(d,50);
//		return d;
//	}
//	void setName(char* d)
//	{	
//		for(int i=0;i<50;i++)
//		{
//			name[i]=*(d+i);
//		}
//	}
//	char* getDepartment(char d[])
//	{	
//		cout<<"Enter Employee Department\t";
//		cin.ignore();
//		cin.getline(d,50);
//		return d;
//	}
//	void setDepartment(char* d)
//	{	
//		for(int i=0;i<50;i++)
//		{
//			department[i]=*(d+i);
//		}
//	}
//	char *getPosition(char p[])
//	{
//		cout<<"enter position of employee";
//		cin.ignore();
//		cin.getline(p,50);
//		return p;
//	}
//	void setPosition(char *p)
//	{
//	for (int i=0;i<50;i++)
//		position[i]=*(p+i);
//
//	}
//	
//	/*input output methods*/
//	void input(int id, char* empName, char* empDepartment, char *empPosition)
//	{	
//		int empID=getEmployeeID(id);
//		setEmployeeID(empID);
//		char* name=getName(empName);
//		setName(name);
//		char* department=getDepartment(empDepartment);
//		setDepartment(department);
//		char *position=getPosition(empPosition);
//		setPosition(position);
//	}
//	void output()
//	{	
//		static int employeeNum=1;
//		cout<<"Employee "<<employeeNum<<"data\n";
//		cout<<"employeeID\t"<<"Employee Name\t"<<"Employee Department\t"<<"Position\n";
//		cout<<employeeID<<"\t\t"<<name<<"\t\t"<<department<<"\t\t\t"<<position;
//		cout<<"\n_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_\n\n";
//		employeeNum++;
//	}
//	/*******************constructors***************************/
//	Employee()
//	{
//		char n[]={""};char d[]={""};char p[]={""};
//		employeeID=0;
//		name[0]=*n;
//		position[0]=*p;
//		department[0]=*d;
//		}
//	Employee(int id,char *name,char* department,char* position)
//	{
//	setName(name);
//	setEmployeeID(id);
//	setDepartment(department);
//	setPosition(position);
//	}
//	Employee(int id,char *name)
//	{
//	char n[50];char d[]={""};char p[]={""};
//	setName(n);
//	setEmployeeID(id);
//	position[0]=*p;
//	department[0]=*d;
//
//	}
//};
//int main()
//{
//	int id=0;
//	char empName[50], empDesignation[50],empPosition[50];
//	Employee obj[3];
//	for(int i=0;i<3;i++)
//	{
//		obj[i].input(id, empName, empDesignation, empPosition);
//	}
//		cout<<"\n_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_\n\n";
//		for (int i=0;i<3;i++)
//		{
//		obj[i].output();
//		}
//		char name[30]="Ali";
//		int id1=1;
//		char department[30]="IT";
//		char position[30]="Programmer";
//		Employee obj1(int id1,char name,char department,char position);
//		Employee obj2(int id1,char name);
//
//
//		return 0;
//	}
