//#include<iostream>
//using namespace std;
//class Matrix
//{
//	int **data;
//	int row;
//	int col;
//public:
//	int ** m, **p,  **p2;
//	Matrix();
//	Matrix(int , int);
//	~Matrix();
//
//	void setAt(int , int , int);
//	int getAt (int , int );
//
//	void transpose();
//	void reSize();
//	void addMatrix(Matrix &);
//
//	void display();
//
//	bool isSymmetric();
//	bool isUnity();
//};
//
//Matrix :: Matrix ()
//{
//	cout<<"Default value constructor to set row and column to 0 instead of garbage..\n";
//	int row=0;
//	int col=0;
//}
//
//
//Matrix :: Matrix (int r, int c)
//{
//	if (r >0)
//	{
//		row =r;
//	}
//	else
//	{
//		cout<<"Invalid Row to form a matrix.\n";
//	}
//	if(c> 0)
//	{
//		col = c;
//	}
//	else
//	{
//		cout<<"Invalid col to form a matrix. \n";
//	}
//	data = new int*[row];
//	for(int i = 0; i < row; i++)
//	{
//		data[i] = new int[col];
//	}
//	for (int i = 0 ; i < row ; i++)
//	{
//		for(int j = 0 ; j < col ; j++)
//		{
//			cout<<"Enter value for row : "<< i+1 << " and column : " << j+1 <<endl;
//			cin >> data[i][j];
//		}
//	}
//	display();
//}
//
//Matrix ::  ~Matrix()
//{
//	cout<<"Destructor of data is called:";
//	if(data!=NULL)
//	{
//		for(int i=0; i<row; i++)
//		{
//			delete [] data[i];
//		}
//		delete [] data;
//		data=0;
//	}
//	cout<<"Destructor of m is called:";
//	
//	if(m!=NULL)
//	{
//		for(int i=0; i<row; i++)
//		{
//			delete [] m[i];
//		}
//		delete [] m;
//		m=0;
//	}
//	cout<<"Destructor of p is called:";
//	
//	if(p!=NULL)
//	{
//		for(int i=0; i<row; i++)
//		{
//			delete [] p[i];
//		}
//		delete [] p;
//		p=0;
//	}
//	cout<<"Destructor of p2 is called:";
//	
//	if(p2!=NULL)
//	{
//		for(int i=0; i<row; i++)
//		{
//			delete [] p2[i];
//		}
//		delete [] p2;
//		p2=0;
//	}
//}
//
//
//void Matrix :: setAt(int r, int c, int val)
//{
//	data[r-1][c-1]=val;
//	display();
//}
//
//int Matrix :: getAt(int r, int c)
//{
//	return data[r-1][c-1];
//}
//
//
// void Matrix :: transpose()
//{
//	m=new int*[col];
//	for (int i=0;i<row;i++)
//	{
//		m[i]=new int[row];
//	}
//	for (int i=0;i<col;i++)
//	{
//		for(int j=0;j<row;j++)
//		{
//			m[i][j]=data[j][i];
//		}
//	}
//	cout<< "Transpose Matrix you entered \n";
//	for (int i=0 ; i< row ; i++)
//	{
//		for (int j=0 ; j< col ; j++)
//		{
//			cout<<m[i][j] << " " ;
//		}
//		cout<< endl;
//	}
//}
//
//
// void Matrix :: addMatrix(Matrix & m2)
// {
//	if(this->row==m2.row && this->col == m2.col)
//	this->p2 = new int*[row];
//	for(int i = 0; i < row; i++)
//	{
//		this->p2[i] = new int[col];
//	}
//	 for(int i=0; i<row; i++)
//	 {
//		for(int j=0; j<col; j++)
//		{
//			this->p2[i][j]=this->data[i][j]+m2.data[i][j];
//		}
//	}
//	cout<< "Add Matrix is \n";
//	for (int i=0 ; i< row ; i++)
//	{
//		for (int j=0 ; j< col ; j++)
//		{
//			cout<<this->p2[i][j] << " " ;
//		}
//		cout<< endl;
//	}
// }
//
// void Matrix :: reSize()
// {
//	int ro,clm;
//	cout<<"Enter new size of row:";
//	cin>>ro;
//	cout<<"Enter new size of column:";
//	cin>>clm;
//	p=data;
//	data=new int*[ro];
//	for(int i=0;i<clm;i++)
//	{
//		data[i]=new int [clm];
//	}
//	if(col<clm && row<ro)
//
//	{
//		for(int a=0;a<row;a++)
//		{
//			for(int b=0;b<col;b++)
//			{
//				data[a][b]=p[a][b];
//				cout<<p[a][b]<<"\t";
//			}
//		}
//	}
//	else
//	{
//		cout<<"New Matrix size is not Enough to copy Previous Matrix\n";
//	}
//
//
// }
//
//
// void Matrix :: display()
//
//{
//	for(int i=0;i<row;i++)
//		for(int j=0;j<col;j++)
//	{
//	cout<<" _                                                    _\n";
//	cout<<"|                                                      |\n";
//	cout<<"|"<<data[i][j]<<" "<<data[i][j+1]<<" "<<data[i][j+2]<<"|\n";
//	j=j+3;
//	}
//	cout<<"|                                                      |\n";
//	cout<<" _                                                    _\n";
//}
//
//
//bool Matrix :: isSymmetric()
//{
//	bool flage=true;
//	if( row == col )
//	{
//		for(int i=0 ; i<row ;i++)
//		{
//			for(int j=0 ; j<col ; j++)
//			{
//				if( data[i][j] == data[j][i])
//				{
//					flage = true;
//				}
//				else
//				{
//					return false;
//				}
//				
//				display();
//			}
//		}
//	}
//	else
//	{
//		return false;
//	}
//	return flage;
//}
//
//
//bool Matrix :: isUnity()
//{
//	bool flag;
//	if( row != col )
//	{
//		flag= false;
//	}
//	for ( int i=0; i<row; i++)
//	{
//		for ( int j=0; j<col; j++)
//		{
//			if( (i == j) && (data[i][j]=1)) 
//			{
//				if((i != j && (data[i][j]=0)))
//				{
//				flag= true;
//				}
//			}
//			else
//			{
//				flag= false;
//			}	
//		}
//	}
//		
//	
//	return flag;
//}
//
//
//
//void main()
//{
//	int row=000, col=00, r=0, c=0, val=0;
//	cout<<endl<<endl<<"Enter rows and columns for MEMORY ALLOCATION \n of matrix at a particular location:";
//	while(row<=0)
//	{
//		cout<<"Enter number of rows\t";
//		cin>>row;
//	}
//	while(col<=0)
//	{
//		cout<<"Enter number of col\t";
//		cin>>col;
//	}
//	Matrix s4(row, col);
//
//	//////////////////////////
//	cout<<endl<<endl<<"Enter rows and columns for SETTING value \n of matrix at a particular location:";
//	cout<<"Enter number of rows\t";
//	cin>>r;
//	while(row<r || r<=0)
//	{
//		cout<<"Enter number of rows\t";
//		cin>>r;
//	}
//	cout<<"Enter number of col\t";
//	cin>>c;
//	while(col<c|| c<=0)
//	{
//		cout<<"Enter number of col\t";
//		cin>>c;
//	}
//	cout<<"Enter changed value\t";
//	cin>>val;
//	s4.setAt(r, c, val);
//	//////////////////////////////////
//	cout<<endl<<endl<<"Enter rows and columns for GETTING value \n of matrix at a particular location:";
//
//	cout<<"Enter number of rows\t";
//	cin>>r;
//	while(row<r || r<=0)
//	{
//		cout<<"Enter number of rows\t";
//		cin>>r;
//	}
//	cout<<"Enter number of col\t";
//	cin>>c;
//	while(col<c || c<=0)
//	{
//		cout<<"Enter number of col\t";
//		cin>>c;
//	}
//
//	cout<<s4.getAt(r, c )<<endl;
//	
//	bool isSym=true, isUni=true;
//
//	////////////////////////////////////////////
//	isSym=s4.isSymmetric();
//	if(isSym==true)
//	{
//		cout<<"Matrix is Symmetric\n";
//	}
//	else
//	{
//		cout<<"Matrix is not Symmetric\n";
//	}
//	isUni=s4.isUnity();
//	if(isUni==true)
//	{
//		cout<<"Matrix is Unity Matrix.\n";
//	}
//	else
//	{
//		cout<<"Matrix is not Unity Matrix.\n";
//	}
//
//	s4.transpose();
//
//	Matrix s3(row, col);
//	s4.addMatrix(s3);
//	s4.reSize();
//	
//}