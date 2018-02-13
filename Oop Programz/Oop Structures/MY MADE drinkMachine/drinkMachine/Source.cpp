#include<iostream>
using namespace std;
struct Drink
{
	char * DrinkName;
	double DrinkCost;
	int NumberOfDrinks;
};
void displayDrinksMenu(Drink *drink,int size)
{
	for(int i=0;i<size;i++)
	{
		cout<<i<<")"<<drink[i].DrinkName<<" ...costs... "<<drink[i].DrinkCost<<endl;
	}
	cout<<"\nTo Quit.............Press 0"<<endl;
	cout<<"To Pick Cola..........Press 1"<<endl;
	cout<<"To Pick RootBeer......Press 2"<<endl;
	cout<<"To Pick Lemon-Lime....Press 3"<<endl;
	cout<<"To Pick GrapeSoda.....Press 4"<<endl;
	cout<<"To Pick Cream Soda....Press 5"<<endl;
}
void totalAmount(double  & total, double  cost)
{ 
	total=total+cost;
}
double  amountValidity(double  amount)
{
	if (amount>1.00 || amount< .75)
		return -1;
	else 
		return amount;
}
double  returnAmount(double  amount,double  cost)
{
	return amount-cost;
}
void drinksInMachine(int & drinks)
{
	drinks=drinks-1;
}
void startDrinksApplication()
{
	double totalCost=0;
	const int size=5;
	Drink drink[size]={{"Cola",0.25,20},{"RootBear",0.25,20},{"LemonLime",0.25,20},{"GrapeSoda",0.25,20},{"CreamSoda",0.25,20}};
	while(true)
	{
		int choice;
		displayDrinksMenu(drink,size);
		cout<<"Enter choice";
		cin>>choice;
		if(choice==1)
		{
			double amount;
			cout<<"Enter Amout ";
			cin>>amount;
			amountValidity(amount);
			totalAmount(totalCost, drink[choice].DrinkCost);
			returnAmount(totalCost, drink[choice].DrinkCost);
			drinksInMachine(drink[choice].NumberOfDrinks);
		}
		else if(choice==2)
		{
			double  amount;
			cout<<"\t\t\tEnter Amount:";
			cin>>amount;
			amount=amountValidity(amount);
			totalAmount(totalCost,drink[1].DrinkCost);
			if (amount==-1)
			{
				cout<<"\t\t\tInvalid Amount"<<endl;
			}
			else
			{
				double  change=returnAmount(amount,drink[1].DrinkCost);
				cout<<"\t\t\tReturning amount="<<change<<endl;
				drinksInMachine(drink[1].NumberOfDrinks);
				if (drink[1].NumberOfDrinks==0)
					return;
			}
		}
		else if(choice==3)
		{	
			double amount;
			cout<<"Enter Amout ";
			cin>>amount;
			amountValidity(amount);
			totalAmount(totalCost, drink[choice].DrinkCost);
			returnAmount(totalCost, drink[choice].DrinkCost);
			drinksInMachine(drink[choice].NumberOfDrinks);
		}
		else if(choice==4)
		{
			double amount;
			cout<<"Enter Amout ";
			cin>>amount;
			amountValidity(amount);
			totalAmount(totalCost, drink[choice].DrinkCost);
			returnAmount(totalCost, drink[choice].DrinkCost);
			drinksInMachine(drink[choice].NumberOfDrinks);
		}
		else if(choice==0)
		{
			cout<<"\t\t\tTotal Earning Of Machine is:"<<totalCost<<endl;
			return;
		}
	}
}
int main()
{
	startDrinksApplication();
	return 0;
}