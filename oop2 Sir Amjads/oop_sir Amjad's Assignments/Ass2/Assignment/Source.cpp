#include<iostream>
using namespace std;
#include "Date.h"
#include"Employee.h"
#include"Set.h"

void displaySetApplicationMenu()
{
	cout << "\n************Set Application***********";
	cout << "\nTo Equal:.......................Press1";
	cout << "\nTo Union:.......................Press2";
	cout << "\nTo Intersection:................Press3";
	cout << "\nTo Difference:..................Press4";
	cout << "\nTo Exit Application:............press5";
	cout << "\n";
}

void startSetApplication()
{

	//Set set1(4);
	//set1.arr[0] = 1;
	//set1.arr[1] = 3;
	//set1.arr[2] = 2;
	//set1.arr[3] = 4;
	///*set1.arr[4] = 1;*/
	//Set set2(3);
	//set2.arr[0] = 1;
	//set2.arr[1] = 2;
	//set2.arr[2] = 5;
	while (true)
	{
		displaySetApplicationMenu();
		int choice;
		cin >> choice;
		if (choice == 1)
		{
			//int size1, size2;
			//cout << "\n\t\tEnter the size of set1";
			//cin >> size1;
			//Set *heapArray1;
			//heapArray1 = new Set(size1);
			////Set heapArray1(size1); 
			//heapArray1->Input(size1);
			////Set heapArray1 = new Set(size1); 
			//cout << "\n\t\tEnter the size of set2";
			//cin >> size2;
			//// heapArray2(size2);
			//Set *heapArray2;
			//heapArray2 = new Set(size2);
			//heapArray1->Input(size2);
			//cout << "\nset1:............:";
			//heapArray1->Display();
			//cout << "\n";
			//cout << "\nset2:............:";
			//heapArray2->Display();
			//cout << "\n";


			int size1,size2;
			cout << "\n\t\tEnter the size of set1";
			cin >> size1;
			Set heapArray1(size1); 
			heapArray1.Input(size1);
			//Set heapArray1 = new Set(size1); 
			cout << "\n\t\tEnter the size of set2";
			cin >> size2;
			Set heapArray2(size2);
			heapArray2.Input(size2);
			cout << "\nset1:............:";
			heapArray1.Display();
			cout << "\n";
			cout << "\nset2:............:";
			heapArray2.Display();
			cout << "\n";
			//Set heapArray2 = new Set(size2); 
			heapArray1.Equal(heapArray2);
			return;
		}
		else if (choice == 2)
		{
			int size1, size2;
			cout << "\n\t\tEnter the size of set1";
			cin >> size1;
			Set heapArray1(size1);
			heapArray1.Input(size1);
			//Set heapArray1 = new Set(size1); 
			cout << "\n\t\tEnter the size of set2";
			cin >> size2;
			Set heapArray2(size2);
			heapArray2.Input(size2);
			cout << "\nset1:............:";
			heapArray1.Display();
			cout << "\n";
			cout << "\nset2:............:";
			heapArray2.Display();
			cout << "\n";
			//Set heapArray2 = new Set(size2); 
			cout << "\nUnion of set1 and set2:............:";
			heapArray1. Union(heapArray2);
			//set1.Union(set2);
			return;
		}
		else if (choice == 3)
		{
			int size1, size2;
			cout << "\n\t\tEnter the size of set1";
			cin >> size1;
			Set heapArray1(size1);
			heapArray1.Input(size1);
			//Set heapArray1 = new Set(size1); 
			cout << "\n\t\tEnter the size of set2";
			cin >> size2;
			Set heapArray2(size2);
			heapArray2.Input(size2);
			cout << "\nset1:............:";
			heapArray1.Display();
			cout << "\n";
			cout << "\nset2:............:";
			heapArray2.Display();
			cout << "\n";
			//Set heapArray2 = new Set(size2); 
			cout << "\nIntersection of set1 and set2:............:";
			heapArray1. Intersection(heapArray2);
			//set1.Intersection(set2);  Intersection
			return;
		}
		else if (choice == 4)
		{
			int size1, size2;
			cout << "\n\t\tEnter the size of set1";
			cin >> size1;
			Set heapArray1(size1);
			heapArray1.Input(size1);
			//Set heapArray1 = new Set(size1); 
			cout << "\n\t\tEnter the size of set2";
			cin >> size2;
			Set heapArray2(size2);
			heapArray2.Input(size2);
			cout << "\nset1:............:";
			heapArray1.Display();
			cout << "\n";
			cout << "\nset2:............:";
			heapArray2.Display();
			cout << "\n";
			//Set heapArray2 = new Set(size2); 
			cout << "\nDifference of set1 and set2:............:";
			heapArray1.Difference(heapArray2);
			return;
		}
		else if (choice == 5)
			return;
	}
}




int main()
{
	////************Date**********
	Date *d;
	d = new Date(1, 7, 3);
	d->setMonth(7);
	d->setDay(23);
	d->setYear(2013);
	d->printDate();


	////************Employee**********
	Employee *emp;
	emp = new Employee();
	emp = new Employee(1, "internee");
	emp = new Employee(1, "internee", "Tayyibah", "PUCIT");
	const int size = 3;
	Employee emp1[size] = { Employee(1, "internee", "Tayyibah", "PUCIT"),
							Employee(1, "internee", "Tayyibah", "PUCIT") ,
							Employee(1, "internee", "Tayyibah", "PUCIT")};

	////************Employee__Task2**********
	int n;
	cout << "Enter a no to create n employee's:";
	cin >> n;
	Employee *arrayEmp = new Employee[n];
	for (int i = 0; i < n; i++)
	{
		arrayEmp[i] = Employee(1, "internee", "Tayyibah", "PUCIT");
	}


	//************Set**********
	startSetApplication();
	//cout << "\nUnion of set1 and set2:............:";
	//set1. Union(set2);
	////set1.Union(set2);
	//cout << "\nIntersection of set1 and set2:............:";
	//set1. Intersection(set2);
	////set1.Intersection(set2);  Intersection
	//cout << "\nDifference of set1 and set2:............:";
	//set1. Difference(set2); 
	/////set1.Difference(set2);  Difference
	return 0;
}