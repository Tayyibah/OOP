#ifndef MYLIST_H
#define MYLIST_H
class MyList
{
private:
	double *list;	
	int size;
public:
	MyList();
	MyList(int size);					
	MyList(const MyList &);				
	MyList operator = (const MyList &);	
	MyList operator ^ (double exp);	
	friend istream & operator >> (MyList & l,istream cin);
	~MyList();
	void display();

};
#endif