#include<iostream>
using namespace std;

class Matrix
{
	int ** data ;
	int rows ;
	int cols ;

public:
	Matrix()
	{
		data = 0 ;
		rows = cols = 0 ;
	}

	Matrix(int r , int c)
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


	Matrix(Matrix & t)
	{
		if (t.data == 0 || t.rows == 0 || t.cols == 0)
		{
			data = 0 ;
			rows = cols = 0 ;
			return ;
		}

		rows = t.rows ;
		cols = t.cols ;

		data = new int * [rows] ;
		for (int i = 0; i < rows; i++)
		{
			data[i] = new int [cols] ;
		}


		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < cols; j++)
			{
				data[i][j] = t.data[i][j] ;
			}
		}
	}


	~Matrix()
	{
		for (int i = 0; i < rows; i++)
		{
			delete [] data[i] ;
		}

		delete [] data ;
		data = 0 ;
		rows = cols = 0 ;
	}


	int & at(int i , int j)
	{
		if (data != 0 && isInBounds(i , j))
		{
			return data[i][j] ;
		}
		exit(0) ;
	}


	int getRows()
	{
		return rows ;
	}

	int getColumns()
	{
		return cols ;
	}

	Matrix transpose()
	{
		Matrix trans(cols , rows);
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < cols; j++)
			{
				trans.data[j][i] = data [i][j] ;
 			}
		}
		return trans ;
	}





	bool isInBounds(int r , int c)
	{
		if (r>=0 && r<rows && c>=0 && c<cols)
		{
			return true ;
		}
		return false ;
	}

	Matrix add(Matrix & m2)
	{
		if (m2.rows == rows && m2.cols == cols)
		{
			Matrix add(rows , cols) ;
			for (int i = 0; i < rows; i++)
			{
				for(int j = 0 ; j < cols ; j++)
				{
					add.data[i][j] = data[i][j] + m2.data[i][j] ;
				}
			}
			return add ;
		}
		exit(0) ;
	}


	void resize(int nr , int nc)
	{
		if (nr<=0 || nc<=0)
		{
			this->~Matrix() ;
			return ;
		}

		int ** mat = new int * [nr] ;
		for (int i = 0; i < nr; i++)
		{
			mat[i] = new int [nc] ;
		}
		int k = 0 , j;
		while (k < nc && k < rows)
		{
			j = 0 ;
			while (j < nc && j < cols)
			{
				mat[k][j] = data[k][j] ;
				j++ ;
			}
			k++ ;
		}


		this->~Matrix() ;
		rows = nr ;
		cols = nc ;
		data = mat ;
	}

	void output()
	{
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < cols; j++)
			{
				cout<<at(i , j)<<"    ";
			}
			cout<<endl;
		}
	}
};



int main()
{
	Matrix m(3 , 3) ;
	int num ;
	cout<<"ENter matrix :"<<endl;

	for (int i = 0; i < m.getRows(); i++)
	{
		for (int j = 0; j < m.getColumns(); j++)
		{
			cin>> num ;
			cout<<" | ";
			m.at(i , j) = num ;
		}
		cout<<endl;
	}
	m.output();
	cout<<endl<<endl;

	Matrix trans = m.transpose() ;
	trans.output() ;
	cout<<endl<<endl;
	
	return 0 ;
}