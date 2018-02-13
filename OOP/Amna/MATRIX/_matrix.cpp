#include<iostream>
#include<cstring>
using namespace std;


class Matrix
{
	int **data;
	int row;
	int col;

	public:
		Matrix()
		{
			row=0;
			col=0;
		}


		Matrix(int r,int c)
		{
			setRC(r,c);
			
			data = new int*[row];
			for(int i = 0; i < row; i++)
			{
				data[i] = new int[col];
			}

			setValues();
		}

		////////////////////////////////////////////////////////////////////
		///////////////////set values of rows and cols ////////////////////
		///////////////////////////////////////////////////////////////////
		void setRC(int r,int c)
		{
			if(c<0)
			{
				col=0;
			}
			else
			{
				col=c;
			}
			if(r<0)
			{
				row=0;
			}
			else
			{
				row=r;
			}
		}
	
		//////////////////////////////////////////////////////////////////
		///////////////setting rows and column values///////////////////
		/////////////////////////////////////////////////////////////////

		void setValues()
		{
			for (int i = 0 ; i < row ; i++)
			{
				for(int j = 0 ; j < col ; j++)
				{
					cout<<"Enter value for row : "<< i+1 << " and column : " << j+1 <<endl;
					cin >> data[i][j];

				}
			}
		}
		///////////////////////////////////////////////////////////////
		/////////////////// shows matrix you entered //////////////////
		//////////////////////////////////////////////////////////////
		void showValues()
		{
			cout<< "Matrix you entered \n";
			for (int i=0 ; i< row ; i++)
			{
				for (int j=0 ; j< col ; j++)
				{
					cout<<data[i][j] << " " ;

				}
				cout<< endl;
			}
		}
		///////////////////////////////////////////////////////////////
		/////////////////////set value to given place/////////////////
		/////////////////////////////////////////////////////////////
		 void setAt ( int  r ,  int  c, int value )
		 {
			 
			 while(r <= 0 || r > row )
					{
						 cout << "Invalid input for row " << endl;
						 cout << "Enter the row again" << endl;
						 cin >> r;
					 }

					 while(c <= 0 || c > col)
					 {
						 cout<<"Invalid input for column" << endl;
						 cout << "Enter the column again" << endl;
						 cin >> c;
					 }

					 data[r-1][c-1]=value;
		 }
		 //////////////////////////////////////////////////////////////////
		 /////////////////get value from given place//////////////////////
		 /////////////////////////////////////////////////////////////////
		 int getAt ( int  x ,  int  y) 
		 {
			 
					while(x <= 0 || x > row )
					{
						 cout << "Invalid input for row " << endl;
						 cout << "Enter the row again" << endl;
						 cin >> x;
					 }

					 while(y <= 0 || y > col)
					 {
						 cout<<"Invalid input for column" << endl;
						 cout << "Enter the column again" << endl;
						 cin >> y;
					 }
				
					 return  data[x-1][y-1];
		 }

		 //////////////////////////////////////////////////////////////
		 ////////////////// Transpose of matrix ///////////////////////
		 //////////////////////////////////////////////////////////////

		  void transpose()
			{
				int **m;
				m=new int*[col];
				for (int i=0; i < col; i++)
				{
					m[i]=new int[row];
				}
				for (int i=0;i<col;i++)
				{
					for(int j=0;j<row;j++)
					{
						m[i][j]=data[j][i];
					}
				}
				cout<< "\n\nTranspose of Matrix you entered \n";
				for (int i=0 ; i< col ; i++)
				{
					for (int j=0 ; j< row ; j++)
					{
						cout<<m[i][j] << " " ;
					}
					cout<< endl;
				}

				for (int i = 0; i < col ; ++i)
				 {
					delete [] m[i];
				 }
				 delete [] m;
			}

		  //////////////////////////////////////////////////
		  //////////////////// Add Matrix /////////////////
		  //////////////////////////////////////////////////
		  int **addMatrix(Matrix & m2)
			 {
				if(this->row==m2.row && this->col == m2.col)
				{
					 for(int i=0; i<row; i++)
					 {
						for(int j=0; j<col; j++)
						{
							m2.data[i][j]=this->data[i][j]+m2.data[i][j];
						}
					 }
					cout<< "Added Matrix is \n";
					for (int i=0 ; i< row ; i++)
					{
						for (int j=0 ; j< col ; j++)
						{
							cout<<m2.data[i][j] << " " ;
						}
						cout<< endl;
					}
				}
				else
				{
					cout << "\nInvalid Matrix input for number of rows oR no of columns or both  \n";
				}

				return m2.data;
			 }
		  ///////////////////////////////////////////////////
		  ////////////////Resize Matrix /////////////////
		  /////////////////////////////////////////////////
		  void reSize(int newrow,int newcol)
			 {
				
				int **p;
				p=new int*[row];
				for(int i = 0 ; i < row ; i++)
				{
					p[i] = new int [col];
				}
				
				for (int i=0 ; i < row ; i++)
				{
					for (int j=0 ; j < col ; j++)
					{
							p[i][j]=data[i][j];
					}
				}
				
				for (int i = 0; i < row ; ++i)
				 {
					delete [] data[i];
				 }
				 delete [] data;
				 data=0;

				data=new int *[newrow];
				for (int i = 0 ; i < newrow ; i++)
				{
					data[i] = new int [newcol];
				}

				for(int i=0 ; i < newrow ; i++)
				{
					for(int j=0 ; j < newcol ; j++)
					{
						data[i][j]=0;
					}
				}


				if(row <= newrow)
				{
					for (int i = 0; i < row; i++)
					{
						if(col<newcol)
						{
							for(int j=0; j<col ; j++)
							{
								data[i][j]=p[i][j];
							}
						}
						else
						{
							for(int j=0; j<newcol ; j++)
							{
								data[i][j]=p[i][j];
							}
						}
					}
					
				}

				else
				{
					if(newrow <= row && newcol <= col)
					{
						for(int i=0 ; i < newrow ; i++)
						{
							for(int j=0 ; j < newcol ; j++)
							{
								data[i][j]=p[i][j];
							}
						}
					}
					if(newrow <= row && newcol >= col)
					{
						for(int i=0 ; i < newrow ; i++)
						{
							for(int j=0 ; j < col ; j++)
							{
								data[i][j]=p[i][j];
							}
						}
					}
				}


				cout << "\n\nNew reized matrix \n";
				for (int i=0 ; i < newrow ; i++)
				{
					for (int j=0 ; j < newcol ; j++)
					{
						cout << data[i][j]<<"   ";
					}
					cout<<endl;
				}
				int row1=row;
				int col1=col;
				row=newrow;
				col = newcol;

				cout<<endl;
				for(int i=0; i<row1; i++)
				{
					delete [] p[i];
				}
				delete [] p;
				p=0;
		  }
		  /////////////////////////////////////////////////////////////////
		  /////////////////// Symmetric or NOT //////////////////////////
		  ///////////////////////////////////////////////////////////////
		  bool isSymmetric()
			{
				bool flage=true;
				if( row == col )
				{
					for(int i=0 ; i<row ;i++)
					{
						for(int j=0 ; j<col ; j++)
						{
							if( data[i][j] == data[j][i])
							{
								flage = true;
							}
							else
							{
								return false;
							}
				
						}
					}
				}
				else
				{
					return false;
				}
				return flage;
			}
		  //////////////////////////////////////////////////////////////
		  ////////////////////// Unity or NOT //////////////////////////
		  /////////////////////////////////////////////////////////////
		  bool isUnity()
			{
				bool x=true;
				if( row != col )
				{
					return false;
				}
				for ( int i=0; i < row; i++)
				{
					for ( int j=0; j < col; j++)
					{
						if(i == j && x==true)
						{
							if (data[i][j] == 1)
							{
								x=true;
							}
							else
							{
								return false;
							}
						}
						else
						{
							if(i != j && x==true)
							{
								if (data[i][j] == 0)
								{
									x=true;
								}
								else
								{
									return false;
								}
							}
						}
					}
				}
				return true;
			}
		  /////////////////////////////////////////////////////////////////////////
		  /////////////////////////  DISPLAY MATRIX ENTERED //////////////////////////
		  ///////////////////////////////////////////////////////////////////////////
		  void display()
			{
				cout<< "\n\nMatrix you entered \n";
				for (int i=0 ; i< row ; i++)
				{
					for (int j=0 ; j< col ; j++)
					{
						cout<<data[i][j] << "  " ;
					}
					cout<< endl;
				}
			}
		  /////////////////////////////////////////////////
		 /////////////////// Destructor ////////////////////
		  //////////////////////////////////////////////////
		 ~Matrix()
		 {
			 for (int i = 0; i < row ; ++i)
			 {
				delete [] data[i];
			 }
			 delete [] data;
			 data=0;
		 }

};

int main()
{
	int r,c;
	cout << "Enter number of rows \n";
	cin >> r;
	cout << "Enter number of columns \n";
	cin >> c;
	Matrix m1(r,c);

	m1.showValues();

	int x,r1,c1,value;
	do
	{
		cout << "Enter 1 to put value at specific place \n";
		cout << "Enter 2 to Get value from specific place \n";
		cout << "Enter any other number to continue \n";
		cin >>x;
		switch(x)
		{
		case 1:
			{
				cout << "Enter no of row \n";
				cin >> r1;
				cout << "Enter no of column \n";
				cin >> c1;
				cout << "Enter value to replace \n";
				cin >> value;
				m1.setAt ( r1 , c1 ,value );
			}
			break;
		case 2:
			{
				cout << "Enter no of row \n";
				cin >> r1;
				cout << "Enter no of column \n";
				cin >> c1;
				value=m1.getAt ( r1, c1);
				cout <<"The value at this place : " << value << endl;

			}
			break;

		default:
			{
				m1.transpose();
				if(m1.isSymmetric()==true)
				{
					cout << "Matrix is Symmetric \n";
				}
				else
				{
					cout << "Matrix is not Symmetric \n";
				}
				if(m1.isUnity()==true)
				{
					cout << "Matrix is unity \n";
				}
				else
				{
					cout << "Matrix is not unity \n";
				}

				int row,col;
			
				cout << "\n\nEnter number of rows for matrix to add \n";
				cin >> row;
				cout << "Enter number of columns for matrix to add\n";
				cin>> col;
				Matrix m2(row, col);
				m1.addMatrix(m2);

				int row1,col1;
				cout<<"\nEnter new size of row: \n";
				cin>>row1;
				cout<<"Enter new size of column:\n";
				cin>>col1;

				m1.display();

				m1.reSize(row1,col1);
				
				x=0;
			}
		}
	}while(x);

	

	return 0;
}