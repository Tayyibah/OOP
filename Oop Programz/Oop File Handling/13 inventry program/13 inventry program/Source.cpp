#include<iostream>
#include"fstream"
#include<string>
using namespace std;

struct inventryProgram
{
	char itemDescription[20];
	int retailPrice;
	int price;
	int wholeSaleCost;
	int date;
};

void addNewRecords(inventryProgram ip[],int index)
{
	cout<<"Enter retailPrice of item ";
	cin>>ip[index].retailPrice;
	cout<<"Enter price of item ";
	cin>>ip[index].price;
	cout<<"Enter wholeSaleCost of item ";
	cin>>ip[index].wholeSaleCost;
	cout<<"Enter date of item ";
	cin>>ip[index].date;
	cout<<"Enter description of item ";
	cin>>ip[index].itemDescription;
}

void displayRecords(inventryProgram ip[],int index)
{
	for(int i=0;i<index;i++)
	{
		cout<<ip[i].retailPrice;
		cout<<ip[i].price;
		cout<<ip[i].wholeSaleCost;
		cout<<ip[i].date;
		cout<<ip[i].itemDescription;
	}
}

void changeRecords(inventryProgram ip[],int index)
{
	cout<<"Enter retailPrice of item ";
	cin>>ip[index].retailPrice;
	cout<<"Enter price of item ";
	cin>>ip[index].price;
	cout<<"Enter wholeSaleCost of item ";
	cin>>ip[index].wholeSaleCost;
	cout<<"Enter date of item ";
	cin>>ip[index].date;
	cout<<"Enter description of item ";
	cin>>ip[index].itemDescription;
}
int main()
{
	inventryProgram ip[]={"",0,0,0,0};
	char choice;
	cout<<"Do u want to add new item ,if yes press y : ";
	cin>>choice;
	int i=0;
	if(choice=='y')
	{
		while(choice=='y')
		{
			addNewRecords(ip,i);
			cout<<"Do u want to add new item ,if yes press y : ";
			cin>>choice;
			i++;
		}
	}
	displayRecords(ip,i);
	cout<<endl;
	i=0;
	if(choice=='n')
	{
		cout<<"Do u want to change any item ";
		cin>>choice;
		while(choice=='y')
		{
			cout<<" which item u want to change ";
			cin>>i;
			changeRecords(ip,i);
			cout<<"Do u want to change any item ";
			cin>>choice;
			i++;
		}
	}
	displayRecords(ip,i);
	cout<<endl;
	return 0;
}
