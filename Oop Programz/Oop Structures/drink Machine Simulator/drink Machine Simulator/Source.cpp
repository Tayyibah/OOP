# include <iostream>
using namespace std;
struct DrinksData
{
	char drinkName[20];
	double cost;
	int drinksInMachine;
};
void displayDrinksMenu(DrinksData arr[] ,int size );
void totalAmount(double  & total, double  cost);
double  amountValidity(double  amount);
double  returnAmount(double  amount,double  cost);
void drinksInMachine(int & drinks);
void startDrinksApplication();
int main()
{
	startDrinksApplication();
	return 0;
}
void displayDrinksMenu(DrinksData arr[] ,int size )
{
	cout<<"DrinkName"<<"\t\t"<<"Cost"<<"\t\t"<<"Drinks In Machine"<<endl;
	cout<<arr[0].drinkName<<"\t\t\t"<<arr[0].cost<<"\t\t"<<arr[0].drinksInMachine<<endl;
	cout<<arr[1].drinkName<<"\t\t"<<arr[1].cost<<"\t\t"<<arr[1].drinksInMachine<<endl;
	cout<<arr[2].drinkName<<"\t\t"<<arr[2].cost<<"\t\t"<<arr[2].drinksInMachine<<endl;
	cout<<arr[3].drinkName<<"\t\t"<<arr[3].cost<<"\t\t"<<arr[3].drinksInMachine<<endl;
	cout<<arr[4].drinkName<<"\t\t"<<arr[4].cost<<"\t\t"<<arr[4].drinksInMachine<<endl;
	cout<<"\nTo Quit.............Press 0"<<endl;
	cout<<"To Pick Cola..........Press 1"<<endl;
	cout<<"To Pick RootBeer......Press 2"<<endl;
	cout<<"To Pick Lemon-Lime....Press 3"<<endl;
	cout<<"To Pick GrapeSoda.....Press 4"<<endl;
	cout<<"To Pick Cream Soda....Press 5"<<endl;
} 
void totalAmount( double  & total, double  cost)
{
	total=total+cost;
}
double  amountValidity (double  amount)
{
	if (amount>1.00 || amount< .75)
	{
		return -1;
	}
	else 
	{
		return amount;
	}
}
double  returnAmount ( double  amount,double  cost)
{
	return amount-cost;
}
void drinksInMachine(int & drinks)
{
	drinks=drinks-1;
}
void startDrinksApplication()
{
	double  totalEarning=0;
	const int size=5;
	DrinksData arr[size]={{"Cola",.75,20},{"Root Beer",.75,20},{"Lemon Lime",.75,20},{"Grape Soda",.80,20},{"Cream Soda",.80,20}};
	while(true)
	{
		displayDrinksMenu(arr,size);
		int choice;
		cout<<"\t\t\tEnter Your Choice:";
		cin>>choice;
		if (choice==1)
		{
			double  amount;
			cout<<"\t\t\tEnter Amount:";
			cin>>amount;
			if (amountValidity(amount)==-1)
			{
				cout<<"\t\t\tInvalid Amount"<<endl;
			}
			else
			{
				double  change=returnAmount(amount,arr[0].cost);
				cout<<"\t\t\tReturning amount="<<change<<endl;
				totalAmount(totalEarning,arr[0].cost);
				drinksInMachine(arr[0].drinksInMachine);

			}
		}
		else if (choice==2)
		{
			double  amount;
			cout<<"\t\t\tEnter Amount:";
			cin>>amount;
			amount=amountValidity(amount);
			totalAmount(totalEarning,arr[1].cost);
			if (amount==-1)
			{
				cout<<"\t\t\tInvalid Amount"<<endl;
			}
			else
			{
				double  change=returnAmount(amount,arr[1].cost);
				cout<<"\t\t\tReturning amount="<<change<<endl;
				drinksInMachine(arr[1].drinksInMachine);
				if (arr[1].drinksInMachine==0)
					return;
			}
		}
		else if (choice==3)
		{
			double  amount;
			cout<<"\t\t\tEnter Amount:";
			cin>>amount;
			amount=amountValidity(amount);
			totalAmount(totalEarning,arr[2].cost);
			if (amount==-1)
			{
				cout<<"\t\t\tInvalid Amount"<<endl;
			}
			else
			{
				double  change=returnAmount(amount,arr[2].cost);
				cout<<"\t\t\tReturning amount="<<change<<endl;
				drinksInMachine(arr[2].drinksInMachine);
				if (arr[2].drinksInMachine==0)
					return;
			}
		}
		else if (choice==4)
		{
			double  amount;
			cout<<"\t\t\tEnter Amount:";
			cin>>amount;
			amount=amountValidity(amount);
			totalAmount(totalEarning,arr[3].cost);
			if (amount==-1)				
			{
				cout<<"\t\t\tInvalid Amount"<<endl;
			}
			else
			{					
				double  change=returnAmount(amount,arr[3].cost);
				cout<<"\t\t\tReturning amount="<<change<<endl;
				drinksInMachine(arr[3].drinksInMachine);
				if (arr[3].drinksInMachine==0)
				return;
			}
		}
		else if (choice==5)
		{
			double  amount;
			cout<<"\t\t\tEnter Amount:";
			cin>>amount;			
			amount=amountValidity(amount);
			totalAmount(totalEarning,arr[4].cost);
			if (amount==-1)
			{
				cout<<"\t\t\tInvalid Amount"<<endl;
			}
			else
			{
			double  change=returnAmount(amount,arr[4].cost);
			cout<<"\t\t\tReturning amount="<<change<<endl;
			drinksInMachine(arr[4].drinksInMachine);
			if (arr[4].drinksInMachine==0)
				return;
			}
		}
		else if (choice==0)
		{
			cout<<"\t\t\tTotal Earning Of Machine is:"<<totalEarning<<endl;
			return;
		}
	}
}


