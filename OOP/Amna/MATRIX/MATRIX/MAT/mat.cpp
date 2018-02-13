#include"MATRIX.h"
#include<fstream>
#include<iostream>
#include<iomanip>
using namespace std;
Matrix::Matrix()
{
	row = 5;
	 column = 5;
	matrix = new int *[row];
	for (int i = 0; i < row; i++)
	{
		matrix[i] = new int[column];
	}
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
		{
			matrix[i][j] =0 ;
		}
	}
}
Matrix::Matrix(int r, int c)
{
	if (r>0 && c>0)
	{
		row = r;
		column = c;
	}
	else
	{
		row = 5;
		column = 5;
	}
	matrix = new int *[row];
	for (int i = 0; i < row; i++)
	{
		matrix[i] = new int[column];
	}
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
		{
			matrix[i][j] = 5;
		}
	}
	display(*this);
}
Matrix::~Matrix()
{
	cout << "destructor is called....";
	if (matrix != NULL)
	{
		for (int i = 0; i<row; i++)
		{
			delete[] matrix[i];
		}
		delete[] matrix;
		matrix = NULL;
	}
}
Matrix::Matrix(Matrix &m)
{
	row =m. row;
	column =m. column;
	if (matrix != NULL)
	{
		Matrix::~Matrix();
	}
	matrix = new int*[row];
	for (int i = 0; i <row; i++)
	{
		matrix[i] = new int[column];
	}
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j <column; j++)
		{
			matrix[i][j] =m.matrix[i][j];
		}
	}
	display(*this);
	if (m.matrix != NULL)
	{
		for (int i = 0; i < row; i++)
		{
			delete[] m.matrix[i];
		}
		delete[] m.matrix;
		m.matrix = NULL;
	}
}
int Matrix::getRows()
{
	return row;
}
int Matrix::getColumns()
{
	return column;
}
const Matrix Matrix::operator =(const Matrix &rhs)
{
	this->row =rhs. row;
	this->column = rhs.column;
	if (&rhs != this)
	{
		delete[]this->matrix;
		this->matrix = NULL;
		if (this->matrix = NULL)
		{
			this->matrix = new int*[this->row];
			for (int i = 0; i < this->row; i++)
			{
				this->matrix[i] = new int[this->column];
			}
			for (int i = 0; i < this->row; i++)
			{
				for (int j = 0; j < this->column; j++)
				{
					this->matrix[i][j] = rhs.matrix[i][j];
				}
			}
		}
	}
	display(*this);
	return *this;
}
void Matrix::display(Matrix &m)
{
	cout << "Matrix you entered \n";
	for (int i = 0; i <m. row; i++)
	{
		for (int j = 0; j <m. column; j++)
		{
			cout <<m. matrix[i][j] << " ";
		}
		cout << endl;
	}
}
void operator <<( Matrix &m,ostream &out)
{
	
	cout << "MATRIX IS:\n"<<setw(m.column);
	for (int i = 0; i < m.row; i++)
	{
		out << "|";
		for (int j = 0; j < m.column; j++)
		{
			out << m.matrix[i][j]<<"\t";
		}
		out << "|";
		cout << endl;
	}
}
void operator >>( Matrix &m,istream &in)
{

	cout<< "ENTER MATRIX VALUES:\n";
	for (int i = 0; i < m.row; i++)
	{
		for (int j = 0; j < m.column; j++)
		{
			in >>m.matrix[i][j];
		}
	}
}
int Matrix:: operator() (int r, int c,int value)
{
	cout << "Enter modified value:";
	cin >> value;
	matrix[r][c] = value;
	cout << "\ndata at given location is:";
	
	return matrix[r][c];

}
 Matrix Matrix::operator !()
{
		int r =this-> column;
		int c=this->row;
		int **m;
		m = new int *[r];
	for (int k = 0; k < r; k++)
	{
		m[k] = new int[c];
	}
	
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j <c; j++)
		{
			m[i][j] = this-> matrix[j][i];
		}
	}
	cout << "Matrix you entered \n";
	for (int i = 0; i <r; i++)
	{
		for (int j = 0; j <c; j++)
		{
			cout << m[i][j] << " ";
		}
		cout << endl;
	}
		return *this;
}
Matrix Matrix::operator +(Matrix &m)
{
		Matrix n;
	if (this->row == m.row && this->column == m.column)
	{
		n.row = m.row;
		n.column = m.column;
		n.matrix = new int *[n.row];
		for (int i = 0; i < n.row; i++)
		{
			n.matrix[i] = new int[n.column];
		}
		for (int j = 0; j < n.row; j++)
		{
			for (int k = 0; k < n.column; k++)
			{
				n.matrix[j][k] = m.matrix[j][k] + this->matrix[j][k];
			}
		}
		display(n);
	}
		return n;
}
Matrix Matrix::operator +=(Matrix &m)
{
	if (this->row == m.row && this->column == m.column)
	{
			Matrix n;
			n.row = m.row;
			n.column = m.column;
			n.matrix = new int *[n.row];
		for (int i = 0; i < n.row; i++)
		{
			n.matrix[i] = new int[n.column];
		}
		for (int j = 0; j < n.row; j++)
		{
			for (int k = 0; k < n.column; k++)
			{
				n.matrix[j][k] = m.matrix[j][k] + this->matrix[j][k];
			}
			if (this->matrix != NULL)
			{
				Matrix::Matrix();
			}
			for (int j = 0; j < row; j++)
			{
				for (int k = 0; k < column; k++)
				{
					this->matrix[j][k] += n.matrix[j][k];
				}
			}
			display(*this);
		}
	}
	return *this;
}
Matrix Matrix::operator *(Matrix &m)
{
	Matrix mul;
	if (this->row == m.row && this->column == m.column)
	{
		mul .row = m.row;
		mul.column = m.column;
		mul.matrix = new int *[mul.row];
		for (int i = 0; i < mul.row; i++)
		{
			mul.matrix[i] = new int[mul.column];
		}
		for (int j = 0; j < mul.row; j++)
		{
			for (int k = 0; k < mul.column; k++)
			{
				mul.matrix[j][k] = (m.matrix[j][k] * this->matrix[j][k]+m.matrix[j][k+1]* this->matrix[j+1][k]);
			}
		}
		display(mul);
	}
	return mul;

}

Matrix Matrix::operator *=(Matrix &m)
{
	Matrix mul;
	if (this->row == m.row && this->column == m.column)
	{
		mul.row = m.row;
		mul.column = m.column;
		mul.matrix = new int *[mul.row];
		for (int i = 0; i < mul.row; i++)
		{
			mul.matrix[i] = new int[mul.column];
		}
		for (int j = 0; j < mul.row; j++)
		{
			for (int k = 0; k < mul.column; k++)
			{
				mul.matrix[j][k] = (m.matrix[j][k] * this->matrix[j][k] + m.matrix[j][k + 1] * this->matrix[j + 1][k]);
			}
		}
		if (this->matrix != NULL)
		{
			Matrix::Matrix();
		}
		for (int j = 0; j < row; j++)
		{
			for (int k = 0; k < column; k++)
			{
				this->matrix[j][k] = 1;
				this->matrix[j][k] *= mul.matrix[j][k];
			}
		}
		display(*this);
	}
	return *this;

}
void Matrix::readFromFile(ifstream &fin)
{
	int number,rows,columns;
	fin >> number;
	fin >> rows;
	fin >> columns;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			fin >> matrix[i][j];
		}
	}
	display(*this);
}
//void Matrix::readAllFile(ifstream &fin,int number)
//{
//	int  rows, columns, counter = 0;
//	while (counter < number)
//	{
//		fin >> number;
//		fin >> rows;
//		fin >> columns;
//		for (int i = 0; i < rows; i++)
//		{
//			for (int j = 0; j < columns; j++)
//			{
//				fin >> matrix[i][j];
//			}
//		}
//		display(*this);
//		counter++;
//	}
//}
void Matrix::modifyMatrix(ofstream &fout)
{
	int value,r,c;
	cout << "Enter rows:";
	cin >> r;
	cout << "Enter columns:";
	cin >> c;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cout << "enter value:";
			cin >> value;
			matrix[i][j]=value;
			fout << matrix[i][j];
		}
	}
	display(*this);
}
Matrix Matrix::mul(int x)
{
	for (int j = 0; j < this->row; j++)
	{
		for (int k = 0; k < this->column; k++)
		{
			this->matrix[j][k] = x*this->matrix[j][k];
		}
	}
	return *this;
}