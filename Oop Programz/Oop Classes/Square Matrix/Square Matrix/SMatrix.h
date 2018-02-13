#ifndef SMATRIX_H
#define SMATRIX_H
#include"Matrix.h"
class SMatrix
{
	Matrix mat;
public:
	SMatrix()
	{}
	SMatrix(int n):mat(n,n)
	{}
	int & at( int r, int c)
	{
		return mat.at(r,c);
	}
	int getMatrixOrder()
	{
		return mat.getRows();//OR return mat.getColums();
	}
};
#endif
