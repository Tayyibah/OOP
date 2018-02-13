#include<iostream>
#include"Matrix.h"
using namespace std;
int main()
{
	Matrix m1(2,3);// at this time all matrix values are garbage.
	//initialize all value matrix cells to zero.
	m1.at(0,0)=1;
	m1.at(0,1)=2;
	m1.at(0,2)=3;
	m1.at(1,0)=1;
	m1.at(1,1)=2;
	m1.at(1,2)=3;
	//for ( int i=0; i<m1.getRows(); i++ )
	//{
	//	for ( int j=0; j<m1.getColumns(); j++ )
	//	{
	//		/*m1.at(i,j) = 0; 
	//		cin >> m1.at(i,j);*/
	//	}
	//}
	m1.displayMatrix();
	Matrix m2 = m1;
	m2.displayMatrix();
	Matrix m3 = m1.add(m2);
	m3.displayMatrix();
	Matrix m4=m1.sub ( m2 );
	m4.displayMatrix();
	Matrix m5=m1.mul (m2 );
	m5.displayMatrix();
	int div=2;
	Matrix m6=m1.div (div);
	m6.displayMatrix();
	m1.reSize(3,6); // assume the elements in m1 are what is shown in above diagram.
	 // After resizing the m1 object diagram will be as follows:
	m1.displayMatrix();
	return 0;
}
