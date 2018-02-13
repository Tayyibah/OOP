#ifndef ARRAY_H
#define ARRAY_H
class Array
{
private:
	int *data;
	int capacity;
	int isValidIndex(int index)const;
public :

	~Array();
	int &getSet(int index);
	const int &getSet(int index)const;
	int getCapacity() const;
	void resize (int newCapacity);
	Array (const Array & ref);
	Array & operator = (const Array & ref);
	Array (int argCount=5, ...);
};
#endif