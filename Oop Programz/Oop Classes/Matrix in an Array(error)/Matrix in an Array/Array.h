#ifndef ARRAY_H
#define ARRAY_H
class Array
{
private:
	int *data;
	int capacity;
	bool isValidIndex(int index);
	void copy (int * dest, int * source);
public:
	Array (int cap=5);//Sets ‘cap’ to ‘capacity’ and initializes rest of the data membersaccordingly.If user sends any invalid value then sets the cap to zero.
	~ Array ();//Free the dynamically allocated memory.
	int & getSet (int index);//insert value at given index of array.
	int getCapacity();//returns the size of array.
	void resize (int newCapacity);//resize the array to new capacity. Make sure that elements in old array should be preserved in the new array if possible.
	Array (Array &ref);//makes a deep copy of the received object.
	//Array::Array(int argCount=5, ...);
};
#endif