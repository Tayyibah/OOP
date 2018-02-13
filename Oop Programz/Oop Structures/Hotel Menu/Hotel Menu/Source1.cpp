#include<iostream>
using namespace std;

struct Dish
{
	char *dishName[8];
	char *description[8];
	int noOfItems;
	int dishNumber;
	int unitPrice[8];
};

struct HotelMenu
{
	Dish *data;
	int noOfItems;
	int capacity;
};
struct Invoice
{
	Dish order[20];
	int noOfItems;
};
void inputDish(Dish & dish);
void printDish(Dish dish);
void addDishInHotelMenu(HotelMenu & menu,Dish dish);
bool removeDishFromHotelMenu(HotelMenu & menu,char *dishname,Dish dish);
bool updateDishUnitPrice(HotelMenu & menu,Dish dish,char *dishname,int newUnitPrice);
void displayHotelMenu(HotelMenu menu,Dish dish, Invoice & in);
void orderMenu(HotelMenu & menu,Dish dish, Invoice & in, int dishNumber);
void checkOutMenu(HotelMenu & menu,Dish dish, Invoice & in);
void cancelOrder(HotelMenu & menu, Invoice & in);


int main()
{
	Dish dish;
	HotelMenu menu;
	Invoice in;
	dish.noOfItems=9;
	menu.noOfItems=9;
	menu.capacity=menu.noOfItems;
	//inputDish(dish);
	//printDish(dish);
	int i=0;
	dish.dishName[i]="Cheese Omelet";
	dish.dishName[i++]="Mattan Karahi";
	dish.dishName[i++]="Tawa Chicken";
	dish.dishName[i++]="Pizza Chicken Supreme";
	dish.dishName[i++]="Chicken Sajji";
	dish.dishName[i++]="Water Nestle";
	dish.dishName[i++]="Coffee";
	dish.dishName[i++]="Cappucinno";
	dish.dishName[i++]="Pepsi 50ml";
	i=0;
	dish.unitPrice[i]= 90;
	dish.unitPrice[i++]= 1200;
	dish.unitPrice[i++]= 500;
	dish.unitPrice[i++]= 700;
	dish.unitPrice[i++]= 600;
	dish.unitPrice[i++]= 45;
	dish.unitPrice[i++]= 40;
	dish.unitPrice[i++]= 50;
	dish.unitPrice[i++]= 40;
	i=0;
	dish.description[i]="A";
	dish.description[i++]="B";
	dish.description[i++]="C";
	dish.description[i++]="D";
	dish.description[i++]="E";
	dish.description[i++]="F";
	dish.description[i++]="G";
	dish.description[i++]="H";
	dish.description[i++]="I";
	displayHotelMenu(menu,dish,in);
	/*
	addDishInHotelMenu(menu,dish);
	cancelOrder(menu,in);
	displayHotelMenu(menu,dish,in);
	updateDishUnitPrice(menu,dish,"palao",30);
	removeDishFromHotelMenu(menu,"palao",dish);*/
	return 0;
}

void inputDish(Dish & dish)
{
	for(int i=0;i<dish.noOfItems;i++)
	{
		cout<<"Enter Dish name: ";
		cin>>dish.dishName[i];
		cout<<"Enter Dish discription: ";
		cin>>dish.description[i];
		cout<<"Enter unit price: ";
		cin>>dish.unitPrice[i];
	}
}
void printDish(Dish dish)
{
	for(int i=0;i<dish.noOfItems;i++)
	{
		cout<<"Dish Name :"<<dish.dishName[i]<<endl;
		cout<<"Dish description:"<<dish.description[i]<<endl;
		cout<<"Dish unitPrice:"<<dish.unitPrice[i]<<endl;
	}
}
void addDishInHotelMenu(HotelMenu & menu,Dish dish)    //ERROR
{
	dish.noOfItems=dish.noOfItems++;
	cout<<"Enter Dish Name :";
	cin>>dish.dishName[dish.noOfItems++];
	cout<<endl;
	cout<<"Enter Dish description :";
	cin>>dish.description[dish.noOfItems++];
	cout<<endl;
	cout<<"Enter Dish unit price :";
	cin>>dish.unitPrice[dish.noOfItems++];
}
bool removeDishFromHotelMenu(HotelMenu & menu,char *dishname,Dish dish)
{
	for(int i=0;i<dish.noOfItems;i++)
	{
		if(dish.dishName[i]==dishname)
		{
			dish.dishName[i]=dish.dishName[dish.noOfItems];
			dish.noOfItems--;
			return true;
		}
	}
	return false;
}
bool updateDishUnitPrice(HotelMenu & menu,Dish dish,char *dishname,int newUnitPrice)
{
	for(int i=0;i<dish.noOfItems;i++)
	{
		if(dish.dishName[i]==dishname)
		{
			dish.unitPrice[i]=newUnitPrice;
			return true;
		}
	}
	return false;
}
void checkOutMenu(HotelMenu & menu,Dish dish, Invoice & in)
{
	cout<<"U have ordered the following Items "<<endl;
	int sum=0;
	for(int i=0;i<in.noOfItems;i++) 
	{
		cout<<i++<<dish.dishName[i]<< "........................." <<dish.unitPrice[i]<<"  Rs"<<endl;
		sum=sum+dish.unitPrice[i];
	}
	cout<<"Press any key to return "<<endl;
	cin.get();
}
void cancelOrder(HotelMenu & menu, Invoice & in)
{
	cin.get();
}


void orderMenu(HotelMenu & menu,Dish dish, Invoice & in, int dishNumber)
{
	int j=0;
	char option='Y';
	cout<<"Want to add another dish:";
	cin>>option;
	while(option)
	{
		cout<<"Enter dish number to order ";
		cin>>dishNumber;
		Dish*data=new Dish[menu.capacity];
		//strcpy(menu.data.dish[menu.noOfItems++],dish.dishName[dishNumber]);//error
		in.order[j++]=menu.data[dishNumber];//error
		in.noOfItems++;//error
		cout<<"Want to add another dish:";//error
		cin>>option;//error
	}
}
void displayHotelMenu(HotelMenu menu,Dish dish, Invoice & in)
{
	int choice;
	cout<<"                   Hotel Menu                        "<<endl;
	cout<<"Press1 - Display Hotel Menu  "<<endl;
	cout<<"Press2 - Add Dish In Menu  "<<endl;
	cout<<"Press3 - Remove Dish From Menu  "<<endl;
	cout<<"Press4 - Update Dish Unit Price  "<<endl;
	cin>>choice;
	switch(choice)
	{
	case 1:
		{
			int dishNumber=0;
			int j=1;
			for(int i=0;i<menu.noOfItems;i++) 
			{
				cout<<j++<<" "<<dish.dishName[i]<< "........................." <<dish.unitPrice[i]<<"  Rs"<<endl;
			}
			cout<<endl;
			cout<<"Enter dish number to order ";
			cin>>dishNumber;
			//orderMenu(menu,dish, in, dishNumber);
			int num;
			cout<<"Press 1 to checkout "<<endl;
			cout<<"Press 2 to cancel order "<<endl;
			cin>>num;
			if(num==1)
				checkOutMenu(menu,dish, in);
			else
				cancelOrder(menu,in);
		}
		break;
	case 2:
		{
			 addDishInHotelMenu(menu,dish);
		}
		break;
	case 3:
		{
			 removeDishFromHotelMenu(menu,"Coffee",dish);
		}
	
		break;
	case 4:
		{
			 updateDishUnitPrice(menu,dish,"Coffee",34);
		}
		break;
	}
}