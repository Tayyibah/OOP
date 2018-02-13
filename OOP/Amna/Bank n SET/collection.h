#ifndef COLLECTION_H
#define COLLECTION_H
class collection
{
private:
	int col[30];
	int search;
public:
	bool addElement(int i,int val);
	bool searchElement(int val);
	bool deleteElement(int l);
	bool searchAgain(int val);
};
#endif