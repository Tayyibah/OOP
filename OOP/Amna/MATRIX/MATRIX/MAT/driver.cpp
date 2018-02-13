#include<iostream>
#include<fstream>
#include"MATRIX.h"
using namespace std;
int main()
{

	int i, r, c, v, j,number;
	ifstream fin;
	ofstream fout;
	fin.open("matrix");
	fout.open("matrix",ios::out|ios::app);
	fin >> number;
	cout << number<<endl;
	Matrix *m;
	m = new Matrix[number];
	int choice;
	cout << "Menu\n1. Display a matrix\n2. Display ALL matrices\n3. Modify an element in a matrix\n4. Modify a whole matrix\n5."
		<<" Take transpose of a matrix\n6. Add two matrices"
		<<"\n7. Multiply two matrices\n8. Multiply a matrix with an integer\n9. Quit\nEnter your choice :";
	cin >> choice;
	switch (choice)
	{
	case 1:
	{
			  cout << "Enter vaue of object:";
			  cin >> i;
			  while (i > number && i < 0)
			  {
				  cout << "Enter vaue of object:";
				  cin >> i;
			  }
		 m[i].Matrix::display(m[i]);
	}
	case 2:
	{
			  cout << "Displaying all objects:";
			  for (int i = 0; i < number; i++)
			  {
				  m[i].Matrix::readFromFile(fin);
			  }
	}
	case 3:
	{
			  cout << "Enter vaue of object:";
			  cin >> i;
			  while (i > number && i < 0)
			  {
				  cout << "Enter vaue of object:";
				  cin >> i;
			  }
			  cout << "\nEnter row:";
		cin >> r;
			  cout << "\nEnter column:";
		 cin >> c;
			 cout<< m[i](r,c,v=0);
		 m[i].display(m[i]);
	}
	case 4:
	{
			  cout << "Enter vaue of object:";
			  cin >> i;
			  while (i > number && i < 0)
			  {
				  cout << "Enter vaue of object:";
				  cin >> i;
			  }
		m[i]. Matrix::modifyMatrix(fout);
	}
	case 5:
	{
			  cout << "Enter vaue of object:";
			  cin >> i;
			  while (i > number && i < 0)
			  {
				  cout << "Enter vaue of object:";
				  cin >> i;
			  }
			  m[i] = !m[i];
	}
	case 6:
		cout << "Enter vaue of object 1:";
		cin >> i;
		cout << "Enter vaue of object 2:";
		cin >> j;
	
	{
			  while (i > number && i < 0 && j>number &&j<0)
			  {
				  cout << "Enter vaue of object 1:";
				  cin >> i;
				  cout << "Enter vaue of object 2:";
				  cin >> j;
			  }
			  m[i] += m[j];
	}
	case 7:
	{
			  cout << "Enter vaue of object 1:";
			  cin >> i;
			  cout << "Enter vaue of object 2:";
			  cin >> j;
			  while (i > number && i < 0 && j>number &&j<0)
			  {
				  cout << "Enter vaue of object 1:";
				  cin >> i;
				  cout << "Enter vaue of object 2:";
				  cin >> j;
			  }
			  m[i] *= m[j];
	}
	case 8:
	{
			  cout << "Enter vaue of object:";
			  cin >> i;
			  while (i > number && i < 0)
			  {
				  cout << "Enter vaue of object:";
				  cin >> i;
			  }
		cout << "Enter integer :";
		m[i].Matrix::mul(i);
		
	}
	case 9:
	{
			  exit(0);
	}

	}
	delete[]m;

	return 0;
}