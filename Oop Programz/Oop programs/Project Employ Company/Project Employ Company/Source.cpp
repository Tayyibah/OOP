#include <iostream>
#include <iomanip>
using namespace std;

class CString
{
public:
    char * data;
    int size;
    
    int getLength(const char * s) const
    {
        int i=0;
        while(s[i++]!='\0');
        return i-1;
    }
public:
    int getLength() const
    {
        return getLength(data);
    }
    CString()
    {
        data=0;
        size=0;
        cout<<"\nCString()"<<this;
    }
    CString ( const char * s)
    {
        size = getLength(s)+1;
        data = new char[size];
        memcpy(data, s, size);
        cout<<"\nCString(const char *)"<<this;
    }
    CString(const CString & ref)
    {
        size = ref.size;
        data = new char[size];
        memcpy(data, ref.data, size);
        cout<<"\nCString(CStrig & )";
    }
    ~CString()
    {
        if (data)
        {
            delete[] data;
            data=0;
            size=0;
        }
    }
    void display() const
    {
        if (data)
            cout<<data;
    }
    char & at(int i)
    {
        if (i>=0 && i<size)
            return data[i];
        exit(0);
    }
    const char & at(int i) const
    {
        if (i>=0 && i<size)
            return data[i];
        exit(0);
    }
    void reSize(int ns)
    {
        if (ns<=0)
        {
            this->~CString();
            return;
        }
        char * temp = new char[ns];
        int i=0;
        while(i<ns && i<size)
        {
            temp[i] = data[i];
            i++;
        }
        this->~CString();
        size=ns;
        data=temp;
    }
    void concatEqual (const CString & ref )
    {
        int len1 = getLength();
        int len2 = ref.getLength();
        char * temp = new char[len1+len2+1];
        int i=0;
        memcpy(temp, data, len1+1);
        memcpy(&temp[len1], ref.data, len2+1);
        this->~CString();
        data = temp;
        size = len1+len2+1;
    }
    CString & operator = (const CString & ref)
    {
        if (this==&ref)
            return *this;
        this->~CString();
        size = ref.size;
        data = new char[size];
        memcpy(data, ref.data, size);
        return *this;
    }
};

class Project;

class Employee
{
public:
    int empid;
    CString name;
    CString title;
};

class Project
{
public:
    CString pName;
    int noe;
    Employee ** emp;
    Project(const char * p="abc");
    void assignEmployee(Employee & e);
};

class Company
{
public:
    Employee * emp;
    Project * proj;
    int nop;
    int noe;
    Company()
    {
        noe=0;
        nop=0;
        emp = new Employee[100];
        proj = new Project[50];
    }
    void addEmployee(Employee & e)
    {
        emp[noe++]=e;
    }
    void addProject(Project & p)
    {
        proj[nop++]=p;
    }
    void assignEmployeeToProject(CString & pname, int eid)
    {
        int i=0;
        proj[i].assignEmployee(emp[0]);
    }
};

Project::Project(const char * p):pName(p)
{
    emp=new Employee*[5];
    noe=0;
}
void Project::assignEmployee(Employee & e)
{
    emp[noe] = &e;
    noe++;
}
int main()
{
    Project p1,p2;
    Employee e1,e2,e3;
    return 1;
}
