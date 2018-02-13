#ifndef MATRIX_H
#define MATRIX_H
class Matrix
{
private:
	int * * data; /* pointer to an array of pointers whose each locationpoints to an array of integers */
	int rows; // number of rows in matrix
	int cols;
	bool isValidBounds( int i, int j );
public:
	Matrix ();//Set row and col to 0 and obviously initializes data to zero as well.Represents a null matrix
	Matrix (int r, int c); //Set the r to row and c to col and creates matrix structure appropriately.
	//If user sends invalid value in r or c or both then set them to 0.
	Matrix ( Matrix & ) ;//The copy ctor 
	~Matrix (); //Free the dynamically allocated memory.
	int & at(int r, int c);
	//For setting or getting some value at a particular location of matrix
	int getRows();//returns the number of rows of the matrix.
	int getColumns(); //returns the number of columns of the matrix.
	Matrix Transpose ();//Find Transpose of the *this object (calling object) and returns the transpose in a new Matrix object. No change in calling object.
	Matrix add ( Matrix & m2 );//Add this(calling object) and m2 object and return the result in a new//Matrix object. No change in calling object and received object.
	Matrix sub ( Matrix & m2 );
	Matrix mul ( Matrix & m2 );
	Matrix div ( int & m2 );
	void reSize ( int newrow, int newcol );//resize the matrix according to new row and column. Make sure that the old matrix elements should be preserved in the new resized matrix ifpossible.
	void displayMatrix();
	int & operator [](const int index1);//char & at( const int index);
};
#endif
