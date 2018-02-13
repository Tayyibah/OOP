#ifndef MATRIX_H
#define MATRIX_H
#include<iostream>
using namespace std;
class Matrix
{
	int **matrix;
	int row;
	 int column;
public:
	Matrix::Matrix();
	Matrix::Matrix(int r, int c);
	Matrix::~Matrix();
	Matrix::Matrix(Matrix &m);

	int Matrix:: getRows();
	int Matrix:: getColumns();

	const Matrix Matrix::operator =(const Matrix &rhs);

	void Matrix::display(Matrix &);

	friend void operator <<(Matrix &m,ostream &);
	friend void operator >>(Matrix &m,istream &);

	int Matrix:: operator()(int r,int c,int value);

	void Matrix::modifyMatrix(ofstream &);

	 Matrix Matrix::operator !();

	 Matrix Matrix::operator +(Matrix &);

	 Matrix Matrix::operator +=(Matrix &);

	 Matrix Matrix::operator *(Matrix &);

	 Matrix Matrix::operator *=(Matrix &);

	 Matrix Matrix::mul(int x);

	 void Matrix::readFromFile(ifstream &);

	 void Matrix::readAllFile(ifstream &fin);
};
#endif