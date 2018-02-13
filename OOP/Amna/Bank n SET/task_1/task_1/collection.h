#ifndef COLLECTION_H
#define COLLECTION_H
class collection
{
private:
	int col[30];
public:
	void setCollection();
	bool addElement(int a,int l);
	bool searchElement(int a);
	bool searchElementAgain(int a);
	bool deleteElement(int l);
};
#endif;