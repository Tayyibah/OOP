#ifndef MATRIX_H
#define MATRIX_H
#include <iostream>
using namespace std;
#include"Set.h"
class Matrix
{

public:
	int **arr, rows, cols;
	bool isValidBounds(int i, int j);
	Matrix();//1
	Matrix(int r, int c);//2
	Matrix(Matrix & ref);//3
	~Matrix();//4
	void setrows(int r);//5
	int getrows() const;
	void setcols(int r);
	int getcols() const; 
	friend std::ostream &operator<<(std::ostream &out, Matrix m);//6
	friend std::istream& operator>> (istream &cin, Matrix &obj);
	Matrix operator+(Matrix & m2);
	Matrix operator-(Matrix & m2);
	Matrix operator*(Matrix & m2);
	Matrix operator/(int & m2);
	Matrix operator/(Matrix & m2);
	bool operator == (const Matrix &ref) const;
	bool operator != (const Matrix &ref) const;
	bool operator <= (const Matrix &ref) const;
	bool operator < (const Matrix &ref) const;
	bool operator > (const Matrix &ref) const;
	bool operator >= (const Matrix &ref) const;
	Matrix Equal(Matrix & ref);
	int & at(int r, int c);
	void print() const;
	operator Matrix()
	{
		Matrix tmp(rows, cols);
		return tmp;
	}
	Matrix operator()(int rows, int cols)
	{
		Matrix tmp(rows, cols);
		return tmp;
	}
	
	void operator=(const Matrix &other);//9
	Matrix operator++();//10
	Matrix operator--();
	Matrix operator++(int); 
	Matrix operator--(int);
	Matrix Transpose();
	operator int()//11
	{
		int sum = 0;
		for (int i = 0; i<rows; i++)
		{
			for (int j = 0; j<cols; j++)
			{
				sum = arr[i][j] + sum;
			}
		}
		return sum;
	}
	operator double()//11
	{
		double sum = 0;
		for (int i = 0; i<rows; i++)
		{
			for (int j = 0; j<cols; j++)
			{
				sum = arr[i][j] + sum;
			}
		}
		return double(sum);
	}
	operator Set()//11
	{
		int size = rows+cols;
		Set s; int k = 0;
		s.arr = new int[size];
		for (int i = 0; i<rows; i++)
		{
			for (int j = 0; j<cols; j++)
			{
				s.arr[k] = arr[i][j];
				k++;
			}
		}
		s.Display();
		return s;
	}
	
};
#endif

