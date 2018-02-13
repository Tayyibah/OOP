#ifndef JAGGEDARRAY_H
#define JAGGEDARRAY_H
#include"Array.h"
class JaggedArray
{
	Array * * data;
	int rows;
	bool isValidIndex( int i, int j) const;
public:
	JaggedArray();
	JaggedArray(int r, ...);
	JaggedArray( const JaggedArray & ref );
	int & at(int i, int j);
	const int & at(int i, int j) const;
	int getRows() const;
	int getColumn(int i) const;
	~JaggedArray();
};
#endif