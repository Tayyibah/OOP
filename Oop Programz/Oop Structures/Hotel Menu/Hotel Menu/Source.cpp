#include<iostream>
#include<iomanip>
using namespace std;

struct Dish
{
	char DishName[20];
	char discription[20];
	int unitPrice;
};

struct HotelMenu
{
	Dish*data;
	int noOfItems;
	int capacity;
};

struct Invoice
{
 Dish order[20];
 int noOfItems;
}


void inputDish(Dish &);

void printDish(Dish);
bool addDishInMenu(HotelMenu &,Dish);
bool removeDishFromHotelMenu(HotelMenu&,char*dishName);
bool updateDishUnitPrice(HotelMenu&,char*dishName,int newUnitPrice);
void displayHotelMenu(HotelMenu);

void orderMenu(HotelMenu&,Invoice&,int dishNumber);
void checkOutMenu(HotelMenu&,Invoice&);
void displayHotelMenu(HotelMenu&,Invoice&);

void inputDish(Dish &);
void printDish(Dish &);
bool addDishInMenu(HotelMenu &,Dish);	
void creatMenu(HotelMenu &, int);
void displayHotelMenu(HotelMenu &,Dish &);
bool removeDishFromHotelMenu(HotelMenu,char*DishName);
bool updateDishUnitPrice(HotelMenu&,char*dishName,int newUnitPrice);


int main()
{
	Dish d;
	HotelMenu h;
	inputDish(d);
	printDish(d);
	creatMenu(h, 20);
	addDishInMenu(h,d);
	displayHotelMenu(h,d);
	removeDishFromHotelMenu(h,d.DishName);
	updateDishUnitPrice(HotelMenu&,*dishName,newUnitPrice)

}

void inputDish(Dish &d)
{
	cout<<"Enter the name of dish"<<":";
	cin.getline(d.DishName,20);
	cout<<"Enter its discription:";
	cin.getline(d.discription,20);
	cout<<"Enter the unit price:";
	cin>>d.unitPrice;
}

void printDish(Dish &d)
{
	cout<<"The name of dish is"<<d.DishName<<endl;
	cout<<"Its discription:"<<d.discription<<endl;
	cout<<"The unit price of this dish is:"<<d.unitPrice<<endl;
}

bool addDishInMenu(HotelMenu & h,Dish d)
{
	bool result=false;
	if(h.noOfItems<h.capacity)
	{
		h.data[h.noOfItems++]=d;
	
		h.noOfItems++;
	}
	h.noOfItems++;
	result= true;
	if(true)
		{
			cout<<"Dish is added successfully"<<endl;
		}
	else
		{
			cout<<"Dish is not added successfully"<<endl;
		}
	return true;

}

void creatMenu(HotelMenu & h,int size)
{
	h.capacity=size;
	h.noOfItems=0;
	h.data=new Dish[h.capacity];
}

void displayHotelMenu(HotelMenu &h,Dish &d)
{
	cout<<"Names and price of dish:";
	for(int i=0;i<h.noOfItems;i++)
	{
		cout<<h.data[i].DishName<<" having unit price "<<h.data[i].unitPrice;
	}
}


bool removeDishFromHotelMenu(HotelMenu h,char *d)
{
	for(int i=0;i<h.noOfItems;i++)
	{
		h.data[i]=h.data[h.noOfItems-1];
		h.noOfItems--;
	}
	return true;
}


bool updateDishUnitPrice(HotelMenu&,char*dishName,int newUnitPrice)
{



}

