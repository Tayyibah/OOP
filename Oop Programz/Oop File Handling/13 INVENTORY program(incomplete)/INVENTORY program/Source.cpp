#include<iostream>
#include"fstream"
using namespace std;

struct inventryProgram
{
	char* itemDescription;
	int retailPrice;
	int price;
	int wholeSaleCost;
	int date;
};

void addNewRecords(inventryProgram ip)
{
	cout<<"Enter description of item ";
	cin>>ip.itemDescription;
	cout<<"Enter retailPrice of item ";
	cin>>ip.retailPrice;
	cout<<"Enter price of item ";
	cin>>ip.price;
	cout<<"Enter wholeSaleCost of item ";
	cin>>ip.wholeSaleCost;
	cout<<"Enter date of item ";
	cin>>ip.date;

}

void displayRecords()
{

}

void changeRecords()
{

}
int main()
{
	inventryProgram ip;
	char choice;
	cout<<"Do u want to add new item ,if yes press y";
	cin>>choice;
		
	while(choice==y)
	{
		addNewRecords(ip);
		cout<<"Do u want to add new item ,if yes press y";
		cin>>choice;
	}
	//fstream file("myFile.txt",ios::out|ios::in|ios::app");
	return 0;
}
