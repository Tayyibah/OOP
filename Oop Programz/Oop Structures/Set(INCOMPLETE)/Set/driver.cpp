#include<iostream>
using namespace std;

struct Set
{
	int * data;
	int capacity;
	int noOfElements;
};
void createSet ( Set & s, int size);
void insertElement ( Set & s, int elem );
void removeElement (Set & s, int elem );
void displaySet(Set s);
Set intersection ( Set s1, Set s2 );
Set Union ( Set s1, Set s2 );
Set difference ( Set s1, Set s2 );
int isSubSet ( Set s1, Set s2 );   //It return 0 if both sets are equal, returns 1 if s1 is proper subset of s2, otherwise returns -1.


int main()
{
	 Set s1,s2;
	 createSet ( s1,20);
	 insertElement ( s1,3 );
	 insertElement ( s1,4 );
	 insertElement ( s1,32 );
	 insertElement ( s1,5 );
	 insertElement ( s1,6 );
	 insertElement ( s1,1 );
	 displaySet(s1);
	 removeElement (s1,4);
	 removeElement (s1,32 );
	 removeElement (s1,3 );
	 displaySet(s1);
	 createSet ( s2,20);
	 insertElement ( s2,3 );
	 insertElement ( s2,8 );
	 insertElement ( s2,7 );
	 insertElement ( s2,4 );
	 insertElement ( s1,32 );
	 insertElement ( s2,6 );
	 insertElement ( s2,5 );
	 insertElement ( s2,3 );
	 displaySet(s2);
	 removeElement (s2,3 );
	 removeElement (s2,4 );
	 removeElement (s2,5 );
	 removeElement (s2,5 );
	 displaySet(s2);
	 Union (s1,s2 );
	 intersection (s1,s2 );
	  difference (s1,s2 );
	 /*isSubSet (s1,s2 );*/
	return 0;
}

void createSet ( Set & s, int size)
{
	s.capacity=size;
	s.data=new int[s.capacity];
	s.noOfElements=0;
}
void insertElement ( Set & s, int elem )
{
	if(s.noOfElements==s.capacity)
	{
		s.data=new int[s.capacity++];
	}
	s.data[s.noOfElements++]=elem;
}
void removeElement (Set & s, int elem )
{
	if(s.noOfElements==0)
	{
		exit(0);
	}
	for(int i=0;i<s.noOfElements;i++)
	{
		if(s.data[i]==elem)
		{
			s.data[i]=s.data[s.noOfElements-1]; 
			s.noOfElements=s.noOfElements-1;
		}
	}
}
void displaySet(Set s)
{
	for(int i=0;i<s.noOfElements;i++)
	{
		cout<<s.data[i]<<" ";
	}
	cout<<endl;
}
Set intersection ( Set s1, Set s2 )
{
	Set s;
	createSet(s,s1.noOfElements);
	for(int i=0;i<s1.noOfElements;i++)
	{
		for(int j=0;j<s2.noOfElements;j++)
		{
			if(s1.data[i]==s2.data[j])
			{
				insertElement ( s,s1.data[i]);
			}
		}
	}
	displaySet(s);
	return s; 
}
Set Union ( Set s1, Set s2 )
{
	int common=0;
	for(int i=0;i<s1.noOfElements;i++)
	{
		for(int j=0;j<s2.noOfElements-common;j++)
		{
			if(s1.data[i]==s2.data[j])
			{
				common++;
			}
		}
	}
	Set s;
	createSet(s,s1.noOfElements+s2.noOfElements);
	int j=0;
	for(int i=0;i<s1.noOfElements;i++)
	{
		insertElement ( s,s1.data[i]);
		j++;
	}
	int i=0;
	int k=0;
	for(int i=0;i<s1.noOfElements;i++)
	{
		while(k<s2.noOfElements-common)
		{
			if(s.data[i]!=s2.data[k])
			{
				insertElement ( s,s2.data[k]);
			}
			k++;
		}
	}
	displaySet(s);
	return s; 
}
Set difference ( Set s1, Set s2 )
{
	Set diff;
	createSet(diff,s1.capacity);
	for (int i = 0; i < s1.noOfElements; i++)
	{
		for (int j = 0; j < s2.noOfElements; j++)
		{
			if (s1.data[i] == s2.data[j])
			{
				break ;
			}
			else if (s1.data[i] != s2.data[j])
			{
				diff.data[diff.noOfElements++] = s1.data[i] ;
			}
		}
	}
	return diff ;
	displaySet(diff);
	return diff; 
}
int isSubSet ( Set s1, Set s2 )
{
	Set s;
	displaySet(s);
	return 0; 
}