#include <iostream>
#include "Matrix.h"
using namespace std;

#include"Set.h"
void displayMatrixApplicationMenu()
{
	cout << "\n************Matrix Application***********";
	cout << "\nTo Perform Mathematical Operation:.......................Press1";
	cout << "\nTo Perform Relational Operation:.......................Press2";
	cout << "\nTo Perform Unary Operation:................Press3";
	cout << "\nTo do  Sorting:..................Press4";
	cout << "\nTo do  Conversion:..................Press5";
	cout << "\nTo Exit Application:............press6";
	cout << "\n";
}

void displayMatrixOperation(int choice, Matrix m1, Matrix m2)
{
	while (choice)
	{
	
		if (choice == 1)
		{
			cout << "\n************Perform Mathematical Operation***********";
			cout << "\nTo Add:.......................Press1";
			cout << "\nTo Subtract:.......................Press2";
			cout << "\nMultiply:................Press3";
			cout << "\nDivide:..................Press4";
			cout << "\nGo Back:..................Press5";
			cout << "\n";
			cin >> choice;
			if (choice == 1)
			{

				Matrix m3 = m1 + m2;

				m3.print();
			}
			else if (choice == 2)
			{
				Matrix m4 = m1 - m2;

				m4.print();
			}
			else if (choice == 3)
			{
				/*Matrix mat(3,2);
				mat.at(0, 0) = 1;
				mat.at(0, 1) = 2;
				mat.at(1, 0) = 1;
				mat.at(1, 1) = 2;
				mat.at(2, 0) = 1;
				mat.at(2, 1) = 2;*/
				Matrix m5 = m1*m2;
				m5.print();
			}
			else if (choice == 4)
			{
				int o = 2;
				Matrix m6 = m1 / o;
				Matrix m7= m1 / m2;

				m6.print();
				m7.print();

			}
			else if (choice == 5)
			{

				displayMatrixApplicationMenu();
				cin >> choice;

			}
		
		}
		else if(choice == 2)
		{
			cout << "\n************Perform Relational Operation***********";
			cout << "\nTo Equal:.......................Press1";
			cout << "\nTo Not Equal:.......................Press2";
			cout << "\nLess Than:................Press3";
			cout << "\nLess Than and Equal:..................Press4";
			cout << "\nGreater Than:................Press5";
			cout << "\nGreater Than and Equal:................Press6";
			cout << "\nGo Back:..................Press7";
			cout << "\n";
			cin >> choice;
			if (choice == 1)
			{

				bool flag = m1.operator==(m2);
				cout << "Matrix 1 == 2 :" << flag;
				cout << "\n";
			}
			else if (choice == 2)
			{

				bool flag = m1.operator!=(m2);
				cout << "Matrix 1 != 2 :" << flag;
				cout << "\n";
			}
			else if (choice == 3)
			{

				bool flag = m1.operator<(m2);
				cout << "Matrix 1 < 2 :" << flag;
				cout << "\n";
			}
			else if (choice == 4)
			{

				bool flag = m1.operator<=(m2);
				cout << "Matrix 1 <= 2 :" << flag;
				cout << "\n";
			}
			else if (choice == 5)
			{

				bool flag = m1.operator>(m2);
				cout << "Matrix 1 > 2 :" << flag;
				cout << "\n";
			}
			else if (choice == 6)
			{

				bool flag = m1.operator>=(m2);
				cout << "Matrix 1 >= 2 :" << flag;
				cout << "\n";
			}
			else if (choice == 7)
			{

				displayMatrixApplicationMenu();
				cin >> choice;

			}


		}
		else if (choice == 3)
		{
			cout << "\n************Perform Unary Operation***********";
			cout << "\nPrefix ++: .......................Press1";
			cout << "\nPrefix --:.......................Press2";
			cout << "\nPostfix ++:................Press3";
			cout << "\nPostfix --:..................Press4";
			cout << "\nTranspose:................Press5";
			cout << "\nGo Back:..................Press6";
			cout << "\n";
			cin >> choice;
			if (choice == 1)
			{
				m1.operator++();
			}
			else if (choice == 2)
			{
				m1.operator--();
			}
			else if (choice == 3)
			{
				m1.operator++(0);
			}
			else if (choice == 4)
			{
				m1.operator++(0);
			}
			else if (choice == 5)
			{
				m1.Transpose();
			}
			else if (choice == 6)
			{

				displayMatrixApplicationMenu();
				cin >> choice;

			}


		}
		else if (choice == 4)
		{
			cout << "\n************Sorting***********";
			cout << "\nAscending: .......................Press1";
			cout << "\nDescending:.......................Press2";
			cout << "\nGo Back:..................Press3";
			cout << "\n";
			cin >> choice;
			if (choice == 1)
			{

				Matrix m3 = m1+m2;

				m3.print();
			}
			else if (choice == 2)
			{
				Matrix m4 = m1-m2;

				m4.print();
			}
			else if (choice == 3)
			{

				displayMatrixApplicationMenu();
				cin >> choice;
			}


		}
		else if (choice == 5)
		{
			cout << "\n************Conversion***********";
			cout << "\nConvert Matrix to Int: .......................Press1";
			cout << "\nConvert Matrix to double:.......................Press2";
			cout << "\nConvert Matrix to Set:.......................Press3";
			cout << "\nGo Back:..................Press4";
			cout << "\n"; cin >> choice;
			if (choice == 1)
			{
				int(m4);
			}
			else if (choice == 2)
			{
				double(m4);
			}
			else if (choice == 3)
			{
				Set(m4);
			}
			else if (choice == 4)
			{

				displayMatrixApplicationMenu();
				cin >> choice;
			}
		
		}
		else if (choice == 6)
			return;

		displayMatrixApplicationMenu();
		cin >> choice;
	}
}
Matrix& createMat()
{
	////Matrix mat;
	//cout << "Enter size of rows of Matrix" << endl;
	//int rows, cols;
	//cin >> rows;
	//cout << "Enter size of cols of Matrix" << endl;
	//cin >> cols;
	//mat(rows, cols); 
	/*for (int i = 0; i<rows; i++)
		{
		for (int j = 0; j < cols; j++)
			{
			mat.at(i, j) = 0;
			cin >> mat.at(i, j);
			}
		}*/
	//mat = arr;
	Matrix mat(2, 3);
	mat.at(0, 0) = 1;
	mat.at(0, 1) = 2;
	mat.at(0, 2) = 3;
	mat.at(1, 0) = 1;
	mat.at(1, 1) = 2;
	mat.at(1, 2) = 3;
	return mat;
}
int main()
{
	int choice = 0;
	Matrix mat(2, 3);
	mat.at(0, 0) = 1;
	mat.at(0, 1) = 2;
	mat.at(0, 2) = 3;
	mat.at(1, 0) = 1;
	mat.at(1, 1) = 2;
	mat.at(1, 2) = 3;
	Matrix mat1(2, 3);
	mat1.at(0, 0) = 7;
	mat1.at(0, 1) = 29;
	mat1.at(0, 2) = 32;
	mat1.at(1, 0) = 12;
	mat1.at(1, 1) = 22;
	mat1.at(1, 2) = 32;
	
	/*s1 = createMat();
	s2 = createMat();*/

	mat.print();
	mat1.print();
	displayMatrixApplicationMenu();
	cin >> choice;
	displayMatrixOperation(choice, mat, mat1);

	
	return 0;
}