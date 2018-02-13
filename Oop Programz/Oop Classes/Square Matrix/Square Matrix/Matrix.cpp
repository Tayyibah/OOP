#include<iostream>
#include"Matrix.h"
using namespace std;
bool Matrix::isValidBounds( int i, int j )
 {
	return i>=0 && i<rows && j>=0 && j<cols;
 }
 Matrix::Matrix()
 {
	 data=0;
	 rows=cols=0;
 }
 Matrix::Matrix ( int r, int c )
 {
	 if (r<=0 || c<=0 )
	 {
		 rows=cols=0;
		 data=0;
		 return;
	 }
	 rows=r;
	 cols=c;
	 data = new int* [rows];
	 for ( int i=0; i<rows; i++)
	 {
		 data[i] = new int[cols];
	 }
 }
 Matrix::Matrix( Matrix & ref)
 {
	 if (!ref.data)
	 {
		 data=0;
		 rows=cols=0;
		 return;
	 }
	 rows = ref.rows;
	 cols = ref.cols;
	 data = new int* [rows];
	 for ( int i=0; i<rows; i++)
	 {
		 data[i] = new int[cols];
	 }
	 for ( int i=0; i<rows; i++ )
	 {
		 for ( int j=0; j<cols; j++ )
		 {
			data[i][j] = ref.data[i][j];
		 }
	 }
 }
 Matrix::~Matrix()
 {
	 if (!data)
		return;
	 for (int i=0; i<rows; i++)
		 delete [] data[i];
	 delete [] data;
	 data=0;
	 rows=cols=0;
 }
 int & Matrix::at( int i, int j )
 {
	 if ( isValidBounds( i, j) )
		 return data[i][j];
	 exit(0);
 }
 int Matrix::getRows()
 {
	return rows;
 }
 int Matrix::getColumns()
 {
	return cols;
 }
 Matrix Matrix::Transpose()
 {
	 Matrix t(cols,rows);
	 for ( int i=0; i<rows; i++)
	 {
		 for ( int j=0; j<cols; j++)
		 {
			t.data[j][i] = data[i][j];
		 }
	 }
	 return t;
 }
 void Matrix::displayMatrix()
 {
	 for ( int i=0; i<rows; i++)
	 {
		 for ( int j=0; j<cols; j++)
		 {
			 cout<<data[i][j]<<" ";
		 }
		 cout<<endl;
	 }
	 cout<<endl;
 }
 Matrix Matrix::add (Matrix & ref )
 {
	 if (!(rows==ref.rows && cols==ref.cols))
		exit(0);
	 Matrix res(rows,cols);
	 for ( int i=0; i<rows; i++)
	 {
		 for ( int j=0; j<cols; j++)
		 {
			 res.data[i][j] = data[i][j] + ref.data[i][j];
		 }
	 }
	 return res;
 }
Matrix Matrix::sub ( Matrix & ref )
{
	 if (!(rows==ref.rows && cols==ref.cols))
		exit(0);
	 Matrix res(rows,cols);
	 for ( int i=0; i<rows; i++)
	 {
		 for ( int j=0; j<cols; j++)
		 {
			 res.data[i][j] = data[i][j] - ref.data[i][j];
		 }
	 }
	 return res;
}
Matrix Matrix::mul ( Matrix & ref )
{
	if (!(rows==ref.rows && cols==ref.cols))
		exit(0);
	Matrix res(rows,cols);
	for(int i=0;i<rows;i++)
	{
		for(int i=0;i<rows;i++)
		{
			for(int j=0;j<cols;j++)
			{
				res.data[i][j]=0;
				for(int k=0;k<rows;k++)
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
	 Matrix res(rows,cols);
	 for ( int i=0; i<rows; i++)
	 {
		 for ( int j=0; j<cols; j++)
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
	 int ** mat = new int*[nr];
	 for ( int i=0; i<nr; i++)
	 {
		 mat[i] = new int[nc];
	 }
	 int i=0,j=0;
	 while(i<nr && i<rows)
	 {
		 while(j<nc && j<cols)
		 {
			 mat[i][j] = data[i][j];
			 j++;
		 }
		 i++;
	 }
	 this->~Matrix();
	 rows = nr;
	 cols = nc;
	 data = mat;
 }
 
int & Matrix::operator [](const int index1)
{
	if (isValidBounds(rows,cols))
		return data[rows][cols];
	else
		exit(0);
}
Matrix Matrix::Transpose() const
{
	Matrix t(cols,rows);
	for ( int i=0; i<rows; i++)
	{
		for ( int j=0; j<cols; j++)
		{
			t.data[j][i] = data[i][j];
		}
	}
return t;
}
	/*Matrix Matrixadd(const Matrix & ref) const
	{
		Matrix m=mat.add(ref.mat);
		SMatrix x(m);
		return x;
	}*/