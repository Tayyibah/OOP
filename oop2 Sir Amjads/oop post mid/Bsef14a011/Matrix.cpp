#include <iostream>
#include "Matrix.h"
using namespace std;
Matrix::Matrix(){
	rows = cols = 0;

	arr = NULL;
}

Matrix::Matrix(int r, int c)
{
	if (r <= 0 || c <= 0)
	{
		rows = cols = 0;
		arr = 0;
		return;
	}
	rows = r;
	cols = c;
	arr = new int*[rows];
	for (int i = 0; i<rows; i++)
	{
		arr[i] = new int[cols];
	}
}
Matrix::Matrix(Matrix & ref)
{
	if (!ref.arr)
	{
		arr = 0;
		rows = cols = 0;
		return;
	}
	rows = ref.rows;
	cols = ref.cols;
	arr = new int*[rows];
	for (int i = 0; i<rows; i++)
	{
		arr[i] = new int[cols];
	}
	for (int i = 0; i<rows; i++)
	{
		for (int j = 0; j<cols; j++)
		{
			arr[i][j] = ref.arr[i][j];
		}
	}
}


bool Matrix::operator == (const Matrix &ref) const  // overloading operator ==
{
	int sum1 = 0;
	int sum2 = 0;
	for (int i = 0; i<rows; i++)
	for (int j = 0; j<cols; j++)
		sum1 = sum1 + arr[i][j];
	for (int i = 0; i<rows; i++)
	for (int j = 0; j<cols; j++)
		sum2 = sum2 + ref.arr[i][j];
	if (sum1 == sum2)
		return true;
	else
		return false;
}
bool Matrix::operator != (const Matrix &ref) const
{

	int sum1 = 0;
	int sum2 = 0;
	for (int i = 0; i<rows; i++)
	for (int j = 0; j<cols; j++)
		sum1 = sum1 + arr[i][j];
	for (int i = 0; i<rows; i++)
	for (int j = 0; j<cols; j++)
		sum2 = sum2 + ref.arr[i][j];
	if (sum1 == sum2)
		return true;
	else
		return false;
}
bool Matrix::operator <= (const Matrix &ref) const
{

	int sum1 = 0;
	int sum2 = 0;
	for (int i = 0; i<rows; i++)
	for (int j = 0; j<cols; j++)
		sum1 = sum1 + arr[i][j];
	for (int i = 0; i<rows; i++)
	for (int j = 0; j<cols; j++)
		sum2 = sum2 + ref.arr[i][j];
	if (sum1 <= sum2)
		return true;
	else
		return false;
}
bool Matrix::operator < (const Matrix &ref) const
{

	int sum1 = 0;
	int sum2 = 0;
	for (int i = 0; i<rows; i++)
	for (int j = 0; j<cols; j++)
		sum1 = sum1 + arr[i][j];
	for (int i = 0; i<rows; i++)
	for (int j = 0; j<cols; j++)
		sum2 = sum2 + ref.arr[i][j];
	if (sum1 < sum2)
		return true;
	else
		return false;
}
bool Matrix::operator >(const Matrix &ref) const
{

	int sum1 = 0;
	int sum2 = 0;
	for (int i = 0; i<rows; i++)
	for (int j = 0; j<cols; j++)
		sum1 = sum1 + arr[i][j];
	for (int i = 0; i<rows; i++)
	for (int j = 0; j<cols; j++)
		sum2 = sum2 + ref.arr[i][j];
	if (sum1 > sum2)
		return true;
	else
		return false;
}
bool Matrix::operator >= (const Matrix &ref) const
{

	int sum1 = 0;
	int sum2 = 0;
	for (int i = 0; i<rows; i++)
	for (int j = 0; j<cols; j++)
		sum1 = sum1 + arr[i][j];
	for (int i = 0; i<rows; i++)
	for (int j = 0; j<cols; j++)
		sum2 = sum2 + ref.arr[i][j];
	if (sum1 >= sum2)
		return true;
	else
		return false;
}


void Matrix::operator=(const Matrix &other)   // overloading operator =
{
	if (arr != other.arr && cols == other.cols && rows == other.rows)
	{
		for (int i = 0; i<rows; i++)
		for (int j = 0; j<cols; j++)
			arr[i][j] = other.arr[i][j];
	}
}
void Matrix::print() const
{

	for (int i = 0; i<rows; i++)
	{
		for (int j = 0; j<cols; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}


void Matrix::setrows(int r)
{
	rows = r;

}
int Matrix::getrows() const
{
	return rows;
}
void Matrix::setcols(int r)
{
	cols = r;

}
int Matrix::getcols() const
{
	return cols;
}
Matrix::~Matrix()
{
	if (!arr)
		return;
	for (int i = 0; i < rows; i++)
	{
		delete[] arr[i];
		arr[i] = 0;
	}
	delete[] arr;
	arr = 0;
	rows = cols = 0;
}
istream& operator>> (istream &cin, Matrix &obj)
{
	cout << "Enter rows: ";
	cin >> obj.rows;
	cout << "Enter cols: ";
	cin >> obj.cols;
	return cin;
}

ostream& operator<< (ostream &cout, const Matrix &obj)
{
	cout << "(" << obj.rows << "," << obj.cols << ")" << endl;
	return cout;
}
bool Matrix::isValidBounds(int i, int j)
{
	return i >= 0 && i<rows && j >= 0 && j<cols;
}
int & Matrix::at(int i, int j)
{
	if (isValidBounds(i, j))
	{
		return arr[i][j];
	}
	exit(0);
}

Matrix Matrix::operator+(Matrix & ref)
{
	if (!(rows == ref.rows && cols == ref.cols))
		exit(0);
	Matrix res(rows, cols);
	for (int i = 0; i<rows; i++)
	{
		for (int j = 0; j<cols; j++)
		{
			res.arr[i][j] = arr[i][j] + ref.arr[i][j];
		}
	}
	return res;
}
Matrix Matrix::operator-(Matrix & ref)
{
	if (!(rows == ref.rows && cols == ref.cols))
		exit(0);
	Matrix res(rows, cols);
	for (int i = 0; i<rows; i++)
	{
		for (int j = 0; j<cols; j++)
		{
			res.arr[i][j] = arr[i][j] - ref.arr[i][j];
		}
	}
	return res;
}
Matrix Matrix::operator*(Matrix & ref)
{
	if (!(rows == ref.rows && cols == ref.cols))
		exit(0);
	Matrix res(rows, cols);
	for (int i = 0; i < rows; i++)
	{
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < cols; j++)
			{
				res.arr[i][j] = 0;
				for (int k = 0; k < rows; k++)
				{
					res.arr[i][j] = res.arr[i][j] + res.arr[i][k] * res.arr[k][j];
				}
			}
		}
	}
	return res;
}

Matrix Matrix::operator/(Matrix & ref)
{
	Matrix res(rows, cols);
	for (int i = 0; i<rows; i++)
	{
		for (int j = 0; j<cols; j++)
		{
			res.arr[i][j] = arr[i][j] / ref.arr[i][j];
		}
	}
	return res;
}

Matrix Matrix::operator/(int & ref)
{
	if (!(ref))
		exit(0);
	Matrix res(rows, cols);
	for (int i = 0; i<rows; i++)
	{
		for (int j = 0; j<cols; j++)
		{
			res.arr[i][j] = arr[i][j] / ref;
		}
	}
	return res;
}

Matrix Matrix::Transpose()
{
	Matrix t(cols, rows);
	for (int i = 0; i<rows; i++)
	{
		for (int j = 0; j<cols; j++)
		{
			t.arr[j][i] = arr[i][j];
		}
	}
	for (int i = 0; i<t.rows; i++)
	{
		for (int j = 0; j<t.cols; j++)
		{
			cout << t.arr[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	return t;
}
Matrix Matrix::operator++() /* Prefix Operator */
{
	Matrix t(rows, cols);
	for (int i = 0; i<rows; i++)
	{
		for (int j = 0; j<cols; j++)
		{
			t.arr[i][j] = ++arr[i][j];
			//++t.arr[i][j];
		}
	}
	t.print();
	return (*this);
}
Matrix Matrix::operator++(int) /* Postfix Operator */
{
	Matrix t(rows, cols);
	for (int i = 0; i<rows; i++)
	{
		for (int j = 0; j<cols; j++)
		{
			t.arr[i][j] = arr[i][j]++;
			//t.arr[i][j]++;
		}
	}
	t.print();
	return (*this);
}
Matrix Matrix::operator--() 
{
	Matrix t(rows, cols);
	for (int i = 0; i<rows; i++)
	{
		for (int j = 0; j<cols; j++)
		{
			t.arr[i][j] = --arr[i][j]; 
			//--t.arr[i][j];
		}
	}
	t.print();
	return (*this);
}
Matrix Matrix::operator--(int) 
{
	Matrix t(rows,cols);
	for (int i = 0; i<rows; i++)
	{
		for (int j = 0; j<cols; j++)
		{
			t.arr[i][j] = arr[i][j]--;
			//t.arr[i][j]--;
		}
	}
	t.print();
	return (*this);
}