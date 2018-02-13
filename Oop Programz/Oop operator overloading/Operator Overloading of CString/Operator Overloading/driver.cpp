#include<iostream>
#include "CString.h"
using namespace std;
int main()
{
	CString c("I am a girl");
	CString c1("My name is Tayyibah");
	/*c.display();
	cout<<c.isEmpty()<<endl ;
	cout<<c.getLength() <<endl; 
	cout<<c1.getLength() <<endl; 
	cout<<c.find( 'a' , 5 ) <<endl;
	cout<<c1.find("name is" , 2 )  <<endl;  
	cout<<c.insert(6 ,'u' )<<endl;
	c.display();
	c.insert (8 , "nice ");
	c.display();
	cout<<c.remove(6 ,4)<<endl;
	c.display();
	cout<<c.remove('a' )<<endl;
	c.display();
	c.replace('a' );
	c.display();
	cout<<c.replace('a' , 'm' )<<endl;
	c.display();
	c.replace("am a","nicesscs" );
	c.display();
	c.makeUpper();
	c.display();
	c.makeLower();
	c.display();
	c.reverse();
	c.display();
	c.rightTrim();
	c.display();
	c.leftTrim();
	c.display();
	c.trim();
	c.display();
	c.resize(10 );
	c.display();
	CString(c2) ;
	c2.display();
	c.left(4 );
	c.display();
	c.right(4 );
	c.display();*/
	cout<<c.operator [](7)<<endl;//char & at( const int index);
	cout<<c.operator [](7)<<endl;//const char & at( const int index) const;
	c.operator ==(c);//int isEqual(const CString & s2 )const  ;
	c.operator ==("I am a girl");//int isEqual(const char *const s2 ) ;
	c.operator +=( "Hi!");//void CString :: concatEqual(const char * const s2)
	c.display();
	c.operator +=(c);//void concatEqual( const CString& s2 );
	c.display();
	c.operator + (c);//CString concat( const CString& s2 ) const  ;
	c.display();
	c.operator +("Hi!");//	CString concat( const char * const s2 )  const;
	c.display();
	c.operator () ("Oh my luck");  //CString tokenzie( const char * const delim ); 
	c.display();
	operator >> (cin,  c); //void input();
	operator << (cout ,  c);//void display()const;
	c.display();
	return 0;
}