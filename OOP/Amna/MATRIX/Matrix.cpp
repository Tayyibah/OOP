#include<iostream>
using namespace std;
class Matrix
{

int row,col;
int **data;
public:
	int **m,**addm,**newsize,**m2;
Matrix()
{
	cout<<"Default value constructor for columns and rows.";
	row=0;
	col=0;
}
Matrix(int r,int c)
{
	cout<<"Assigning values entered by user:";
	if(r>0 && c>0)
	{
	if(row==0 && col==0)
	{
		row=r;
		col=c;
	}
	}
	data=new int *[row];
	for (int co=0;co<col;co++)
	{
	data[co]=new int[col];
	}
}

void setAt(int r,int c,int value)
{
	cout<<"enter location where data is to be placed on:";
	cout<<"row:";
	cin>>r;
	cout<<endl<<"column:";
	cin>>c;
	cout<<"Enter value that is to be placed:";
	cin>>value;
	data[r][c]=value;
}
int &getAt(int r,int c,int value)
{
	cout<<"Enter row for value:";
	cin>>r;
	cout<<"Enter column for value:";
	cin>>c;
	return *(data[r]+c);
}
int transpose()
{
	m=new int*[col];
	for (int i=0;i<row;i++)
{
	m[i]=new int[row];
}
	for (int i=0;i<col;i++)
		for(int j=0;j<row;j++)
		{
		m[i][j]=data[j][i];
		}
		return **m;
}
int add()
{
	int r,c;
	cout<<"Enter no of rows for matrix that you want to add to original matrix:";
	cin>>r;
	cout<<"Enter no of columns for matrix that you want to add to original matrix:";
	cin>>c;
	m2=new int*[r];
	for(int l=0;l<col;l++)
	{
	m2[l]=new int[col];
	}
	for (int m=0;m<row;m++)
	{
	for(int n=0;n<col;n++)
	{
	cout<<"Enter value:";
	cin>>*(*(m2+m)+n);
	}
	}
	if(col>c)
	{
		if(row > r)
		{
   addm=new int *[row];
		for(int j=0;j<col;j++)
			addm=new int *[col];
		for (int o=0;o<row;o++)
			for(int i=0;i<col;i++)
			{
			addm[o][i]=m2[o][i]+data[o][i];
			}
		}
		else
		{
		addm=new int *[r];
		for(int j=0;j<col;j++)
			addm=new int *[col];
		for (int o=0;o<row;o++)
			for(int i=0;i<col;i++)
			{
			addm[o][i]=m2[o][i]+data[o][i];
			}
		}
		return **addm;
	}
	else
	if(row > r)
		{
        addm=new int *[row];
		for(int j=0;j<c;j++)
			addm=new int *[c];
		for (int o=0;o<row;o++)
			for(int i=0;i<col;i++)
			{
			addm[o][i]=m2[o][i]+data[o][i];
			}
		}
		else
		{
		addm=new int *[r];
		for(int j=0;j<c;j++)
			addm=new int *[c];
		for (int o=0;o<row;o++)
			for(int i=0;i<col;i++)
			{
			addm[o][i]=m2[o][i]+data[o][i];
			}
		}
	return **addm;
}
void reSize()
{
	int ro,clm;
	cout<<"Enter new size of row:";
	cin>>ro;
	cout<<"Enter new size of column:";
	cin>>clm;
newsize=new int*[ro];
for(int i=0;i<clm;i++)
	newsize[i]=new int [clm];
for(int a=0;a<row;a++)
{
	for(int b=0;b<col;b++)
	{
	newsize[a][b]=data[a][b];
	cout<<newsize[a][b]<<"\t";
}
}

}
void display()
{
	for(int i=0;i<row;i++)
		for(int j=0;j<col;j++)
	{
cout<<" _                                                    _\n";
cout<<"|                                                      |\n";
cout<<"|"<<data[i][j]<<" "<<data[i][j+1]<<" "<<data[i][j+2]<<"|\n";
j=j+3;
}
cout<<"|                                                      |\n";
cout<<" _                                                    _\n";
}
bool isSymmetric()
{
	bool flag;
	int i=0;
for(int o=0;o<row;o++)
	while(i<col)
	{
	if(data[o][i]==m[o][i])
	{
	i++;
	 flag=true;
	}
	else
		flag=false;
	}
	return flag;
}
bool isUnity()
{
	bool flag;
for(int r=0;r<row;r++)
	for(int c=0;c<col;c++)
	{
		if((r==c && data[r][c]==1) && (r!=c && data[r][c]==0))
		{
			flag= true;
		}
		else
			flag=false;

	}
	return flag;
}
~Matrix()
{
	cout<<"Destroying dynamically allocated memory.";
	delete []data;
	delete []m;
	delete []m2;
	delete []addm;
	data=m=m2=addm=NULL;
}
};
int main()
{
	int r,c;
	cout<<"Enter no of rows and columns :";
	cout<<"rows=";
	cin>>r;
	cout<<"\ncolumns=";
	cin>>c;
Matrix m;
Matrix m1(r,c);
Matrix m2;
m2.setAt(r,c,0);
int output=m2.getAt(r,c,0);
int trans=m2.transpose();
int added_matrix=m2.add();
m2.reSize();
m2.display();
bool symmetry=m2.isSymmetric();
bool unity=m2.isUnity();

}
