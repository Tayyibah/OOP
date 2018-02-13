#include<iostream>
#include<iomanip>
using namespace std;
struct Set
{
	int *data;
	int noOfElements;
	int capacity;
	char name[30];
};
struct SetArray
{
	Set*data;
	int noOfSets;
	int capacity;
};
void createSet(Set&s,int capacity=10,char *name="A");
void displaySet(Set s);
int findSetElementIndex(Set&s,int element);
bool isSetFull(Set & s);
bool isSetEmpty(Set & s);
bool addElement(Set&s,int element);
bool removeElement(Set&s,int element);
int findCommonElements(Set&s1,Set&s2);
Set findSetUnion(Set&s1,Set&s2);
void freeSet(Set&s);
void displaySetApplicationMenu();
void createSetDatabase(SetArray&sa,int size=10);
int findSetIndexInSetDatabase(SetArray&sa,char*SetName);
bool isSetDataBaseEmpty(SetArray&sa);
bool isSetDataBaseFull(SetArray&sa);
void doDeepCopy(Set&dest,Set&source);
bool addSetInSetsDatabase(SetArray&sa,Set s);
bool removeSetFromSetsDatabase(SetArray&sa,char*SetName);
void displayAllSetsInSetsDatabase(SetArray&sa);
bool addSetElementsInSetsDatabase(SetArray&sa,char*setName,int element);
bool removeSetElementInSetsDatabase(SetArray&sa,char*setName,int element);
void displaySetInSetDatabase(SetArray&sa,char*SetName);
void startSetApplication();
int main()
{
	startSetApplication();
	return 1;
}
//int main()
//{
//	Set s,a;
//	createSet(s,10,"A");
//	addElement(s,23);
//	addElement(s,10);
//	addElement(s,13);
//	addElement(s,5);
//	displaySet(s);
//	createSet(a,10,"X");
//	addElement(s,23);
//	addElement(s,1);
//	addElement(s,3);
//	addElement(s,13);
//	addElement(s,10);
//	addElement(s,21);
//	displaySet(s);
//	Set res=findSetUnion(s,a);
//	displaySet(res);
//	return 1;
//}
void createSet(Set&s,int capacity,char*name)
{
	s.capacity=capacity;
	s.noOfElements=0;
	s.data=new int [s.capacity];
	strcpy(s.name,name);
}
void displaySet(Set s)
{
	cout<<s.name<<"=";
	cout<<"{";
	for(int i=0;i<s.noOfElements;i++)
	{
		cout<<s.data[i]<<",";
	}
	cout<<"\b}";
}
int findSetElementIndex(Set&s,int element)
{
	int i=0;
	while(i<s.noOfElements&&s.data[i]!=element)
	{
		i++;
	}
	return i==s.noOfElements? -1:i;
}
bool isSetFull(Set &s)
{
	return s.noOfElements==s.capacity;
}
bool isSetEmpty(Set&s)
{
	return s.noOfElements==0;
}
bool addElement(Set&s,int element)
{
	if(isSetFull(s))
		return false;
	if(findSetElementIndex(s,element)!=-1)
		return false;
	s.data[s.noOfElements++]=element;
	return true;
}
bool removeElement(Set&s,int element)
{
	if(isSetEmpty(s))
		return false;
	int elementIndex=findSetElementIndex(s,element);
	if(elementIndex==-1)
		return false;
	s.data[elementIndex]=s.data[s.noOfElements-1];
	s.noOfElements--;
	return true;
}
int findCommonElements(Set&s1,Set&s2)
{
	int i=0,j=0,count=0;
	for(int i=0;i<s1.noOfElements;i++)
	{
		for(int j=0;j<s2.noOfElements;j++)
		{
			if(s1.data[i]==s2.data[j])
				count ++;
		}
	}
	return count;
}
Set findSetUnion(Set&s1,Set&s2)
{
	int commonElementsCount=findCommonElements(s1,s2);
	Set result;
	createSet(result,s1.noOfElements+s2.noOfElements-commonElementsCount);
	for(int i=0;i<s1.noOfElements;i++)
	{
		result.data[i]=s1.data[i];
		result.noOfElements++;
	}
	for(int j=0;j<s2.noOfElements;j++)
	{
		addElement(result,s2.data[j]);
	}
	return result;
}
void freeSet(Set&s)
{
	if(s.data)
		delete[]s.data;
	s.data=0;
	s.capacity=0;
	s.noOfElements=0;
}
void displaySetApplicationMenu()
{
	cout<<"\n******Set Application******";
	cout<<"\nTo Create Set:..................Press1";
	cout<<"\nTo Add Element in Set:..........Press2";
	cout<<"\nTo Remove Element from Set:.....Press3";
	cout<<"\nTo Display Set:.................Press4";
	cout<<"\nTo Calculate Union of Sets:.....Press5";
	cout<<"\nTo Remove Set from Database:....Press6";
	cout<<"\nTo Display All Sets:............Press7";
	cout<<"\nTo Exit Application:............press0";
}
void createSetDatabase(SetArray&sa,int size)//1
{
	sa.capacity=size;
	sa.data=new Set[sa.capacity];
	sa.noOfSets=0;
}
int findSetIndexInSetDatabase(SetArray&sa,char*setName)
{
	int i=0;
	while(i<sa.noOfSets&&strcmp(sa.data[i].name,setName)!=0)
	{
		i++;
	}
	return i==sa.noOfSets? -1:i;
}
bool isSetDataBaseEmpty(SetArray&sa)
{
	return sa.noOfSets==0;
}
bool isSetDataBaseFull(SetArray &sa)
{
	return sa.noOfSets==sa.capacity;
}
void doDeepCopy(Set&dest,Set&source)
{
	createSet(dest,source.capacity,source.name);
	dest.noOfElements=source.noOfElements;
	for(int i=0;i<source.noOfElements;i++)
	{
		dest.data[i]=source.data[i];
	}
}
bool addSetInSetsDatabase(SetArray&sa,Set s)
{
	if(isSetDataBaseFull(sa))
		return false;
	if(findSetIndexInSetDatabase(sa,s.name)!=-1)
		return false;
	doDeepCopy(sa.data[sa.noOfSets],s);
	sa.noOfSets++;
	return true;
}
bool removeSetFromSetsDatabase(SetArray&sa,char*setName)
{
	int ind=findSetIndexInSetDatabase(sa,setName);
	if(ind!=-1)
	{
		freeSet(sa.data[ind]);
		doDeepCopy(sa.data[ind],sa.data[sa.noOfSets-1]);
		sa.noOfSets--;
	}
	return true;
}
void displayAllSetsInSetsDatabase(SetArray&sa)
{
	for(int i=0;i<sa.noOfSets;i++)
	{
		cout<<"\n";
		displaySet(sa.data[i]);
	}
}
bool addSetElementsInSetsDatabase(SetArray&sa,char*setName,int element)
{
	int setIndex=findSetIndexInSetDatabase(sa,setName);
	return setIndex==-1?false:addElement(sa.data[setIndex],element);
}
bool removeSetElementInSetsDatabase(SetArray&sa,char*setName,int element)
{
	int setIndex=findSetIndexInSetDatabase(sa,setName);
	return setIndex==-1?false:removeElement(sa.data[setIndex],element);
}
void displaySetInSetDatabase(SetArray&sa,char*setName)
{
	int ind=findSetIndexInSetDatabase(sa,setName);
	if(ind!=-1)
		displaySet(sa.data[ind]);
}
void startSetApplication()
{
	SetArray setsDatabase;
	createSetDatabase(setsDatabase);
	while(true)
	{
		displaySetApplicationMenu();
		int choice;
		cin>>choice;
		if(choice==1)
		{
			Set s;
			char name[30];
			int size;
			cout<<"\n\t\tEnter the name of set";
			cin>>name;
			cout<<"\n\t\tEnter the size of set";
			cin>>size;
			createSet(s,size,name);
			bool status=addSetInSetsDatabase(setsDatabase,s);
			if(status)

				cout<<"\n\t\tSet Added Successfully";
			else
				cout<<"\n\t\tSet not Added in Database";
		}
		else if(choice==2)
		{
			Set s;
			char name[30];
			int element;
			cout<<"\n\t\tEnter the name of set:";
			cin>>name;
			int ind=findSetIndexInSetDatabase(setsDatabase,name);
			if(ind==-1)
				cout<<"\n\t\tSet not found in Sets Database";
			else
			{
				cout<<"\n\t\tEnter the Element to store";
				cin>>element;
				bool status=addSetElementsInSetsDatabase(setsDatabase,name,element);
				if(status)
					cout<<"\n\t\tElement Added successfully";
				else
					cout<<"\n\t\tElement not added successfully";
			}
		}
		else if(choice==3)
		{
			
			Set s;
			char name[30];
			int element;
			cout<<"\n\t\tEnter the name of set:";
			cin>>name;
			int ind=findSetIndexInSetDatabase(setsDatabase,name);
			if(ind==-1)
				cout<<"\n\t\tSet not found in Sets Database";
			else
			{
				cout<<"\n\t\tEnter the element to remove";
				cin>>element;
				bool status=removeSetElementInSetsDatabase(setsDatabase,name,element);
				if(status)
					cout<<"\n\t\tElement removed successfully";
				else
					cout<<"\n\t\tElement not removed successfully";
			}
		}
		else if(choice==4)
		{
			char name[30];
			cout<<"\n\t\tEnter the name of set";
			cin>>name;
			displaySetInSetDatabase(setsDatabase,name);
		}
		else if(choice==5)
		{
			char name1[30];
			char name2[30];
			cout<<"\n\t\tEnter the name of first set";
			cin>>name1;
			cout<<"\n\t\tEnter the name of second set";
			cin>>name2;
			int ind1=findSetIndexInSetDatabase(setsDatabase,name1);
			int ind2=findSetIndexInSetDatabase(setsDatabase,name2);
			if(ind1==-1&&ind2==-1)
			{
				cout<<"\n\t\tSets not found in setsdatabase";
			}
			else
			{
				Set s3=findSetUnion(setsDatabase.data[ind1],setsDatabase.data[ind2]);
				displaySet(s3);
			}
		}
		else if(choice==6)
		{
			Set s;
			char name[30];
			cout<<"\n\t\tEnter the name of set:";
			cin>>name;
			int ind=findSetIndexInSetDatabase(setsDatabase,name);
			if(ind==-1)
				cout<<"\n\t\tSet not found in Sets Database";
			else
			{
				bool status=removeSetFromSetsDatabase(setsDatabase,name);
				if(status)
					cout<<"\n\t\tElement removed successfully";
				else
					cout<<"\n\t\tElement not removed successfully";
			}
		}
		else if(choice==7)
		{
			displayAllSetsInSetsDatabase(setsDatabase);
		}
		else if(choice==0)
			return;
	}
}



