#include<iostream>
#include"Matrix.h"
using namespace std;

bool Matrix::isValidBounds( int i, int j)
{
	return i>=0 && i<row && j>=0 && j<col;
}
Matrix::Matrix ()
{
	data = 0;
	row = col = 0;
}
Matrix::Matrix ( int r, int c )
{
	if (r<=0 || c<=0)
	{
		data=0;
		row = col = 0;
		return;
	}
	row=r;
	col=c;
	data = new Array*[row];
	for ( int i=0; i<row; i++ )
	{
		data[i] = new Array(col);
	}
}
Matrix::Matrix ( const Matrix & ref)
{
	row = ref.row;
	col = ref.col;
	if (ref.data==0)
	{
		data=0; return;
	}
	data = new Array*[row];
	for ( int i=0; i<row; i++ )
	{
		data[i] = new Array(*(ref.data[i]));
	}
}
Matrix & Matrix::operator = ( const Matrix & ref)
{
	if ( this==&ref )
	return *this;
	row = ref.row;
	col = ref.col;
	if (ref.data==0)
	{
		data=0;
		return *this;
	}
	data = new Array* [row];
	for ( int i=0; i<row; i++ )
	{
		data[i] = new Array(*(ref.data[i]));
	}
	return *this;
}
Array Matrix::operator () (int rowNumber)
{
	if (!(rowNumber>=0 && rowNumber<row))
	exit(0);
	return *data[rowNumber];
}/*
Array & Matrix::operator [] (int i)
{
	if (!(i>=0 && i<row))
		exit(0);
	return *data[i];
}*/

 Array & Matrix::at( int i, int j )
 {
	 if ( isValidBounds( i, j) )
		 return data[i][j];
	 exit(0);
 }
 int Matrix::getRows()
 {
	return row;
 }
 int Matrix::getColumns()
 {
	return col;
 }
 Matrix Matrix::Transpose()
 {
	 Matrix t(col,row);
	 for ( int i=0; i<row; i++)
	 {
		 for ( int j=0; j<col; j++)
		 {
			t.data[j][i] = data[i][j];
		 }
	 }
	 return t;
 }
 void Matrix::displayMatrix()
 {
	 for ( int i=0; i<row; i++)
	 {
		 for ( int j=0; j<col; j++)
		 {
			 cout<<data[i][j]<<" ";
		 }
		 cout<<endl;
	 }
	 cout<<endl;
 }
 Matrix Matrix::add (Matrix & ref )
 {
	 if (!(row==ref.row && col==ref.col))
		exit(0);
	 Matrix res(row,col);
	 for ( int i=0; i<row; i++)
	 {
		 for ( int j=0; j<col; j++)
		 {
			 res.data[i][j] = data[i][j] + ref.data[i][j];
		 }
	 }
	 return res;
 }
Matrix Matrix::sub ( Matrix & ref )
{
	 if (!(row==ref.row && col==ref.col))
		exit(0);
	 Matrix res(row,col);
	 for ( int i=0; i<row; i++)
	 {
		 for ( int j=0; j<col; j++)
		 {
			 res.data[i][j] = data[i][j] - ref.data[i][j];
		 }
	 }
	 return res;
}
Matrix Matrix::mul ( Matrix & ref )
{
	if (!(row==ref.row && col==ref.col))
		exit(0);
	Matrix res(row,col);
	for(int i=0;i<row;i++)
	{
		for(int i=0;i<row;i++)
		{
			for(int j=0;j<col;j++)
			{
				res.data[i][j]=0;
				for(int k=0;k<row;k++)
				{
					res.data[i][j]=res.data[i][j]+res.data[i][k]*res.data[k][j];
				}
			}
		}
	}
	
	this->~Matrix();
	 return res;
}
Matrix Matrix::div ( int & ref )
{
	 if (!(ref))
		exit(0);
	 Matrix res(row,col);
	 for ( int i=0; i<row; i++)
	 {
		 for ( int j=0; j<col; j++)
		 {
			 res.data[i][j] = data[i][j] /ref;
		 }
	 }
	this->~Matrix();
	 return res;
}
 void Matrix::reSize(int nr, int nc)
 {
	 if (nr<=0 || nc<=0)
	 {
		 this->~Matrix();
		 return;
	 }
	 Array ** mat = new Array*[nr];
	 for ( int i=0; i<nr; i++)
	 {
		 mat[i] = new Array[nc];
	 }
	 int i=0,j=0;
	 while(i<nr && i<row)
	 {
		 while(j<nc && j<col)
		 {
			 mat[i][j] = data[i][j];
			 j++;
		 }
		 i++;
	 }
	 this->~Matrix();
	 row = nr;
	 col = nc;
	 data = mat;
 }
 
Array & Matrix::operator [](const int index1)
{
	if (isValidBounds(row,col))
		return data[row][col];
	else
		exit(0);
}

istream & operator >> (istream & is,  Array & c)//void input();
{
	cout << "Enter string:";
	is>>c.data;
	return is;
}
ostream & operator << (ostream & os, Array & c)//void display()
{
	if (c.data != NULL)
		os << c.data << endl;
	return os;
}