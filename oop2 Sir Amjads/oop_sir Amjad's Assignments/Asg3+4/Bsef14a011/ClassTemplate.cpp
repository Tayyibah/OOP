//#include <iostream>
//
//using namespace std;
//
//template <class T>
//class Array
//{
//
//private:
//	T *aptr; // To point to the allocated array
//	int arraySize; // Number of elements in the array
//	void memError() // Handles memory allocation errors
//	{
//		cout << "ERROR:Cannot allocate memory.\n";
//	}
//
//	void subError() // Handles subscripts out of range
//	{
//		cout << "ERROR: Subscript out of range.\n";
//	}
//
//public:
//	// Default constructor
//	Array()
//	{
//		aptr = 0; arraySize = 0;
//	}
//
//	// Constructor declaration
//	Array(int size)
//	{
//		arraySize = size;
//		aptr = new T[arraySize];
//	}
//
//	// Copy constructor declaration
//	Array(const Array &obj)
//	{
//		arraySize = obj.arraySize;
//		aptr = new T[arraySize];
//		for (int i = 0; i < arraySize; i++)
//			aptr[i] = obj.aptr[i];
//	}
//
//	// Destructor declaration
//	~Array()
//	{
//		if (arraySize > 0)	delete[]aptr;
//	}
//
//	// Accessor to return the array size
//	int size() const
//	{
//		return arraySize;
//	}
//
//	// Overloaded [] operator declaration
//	T &operator[](const int &sub)
//	{
//		if (sub < 0 || sub >= arraySize)
//			subError();
//		else
//			return aptr[sub];
//	}
//
//};
//
//void main()
//{
//	int size;
//	double sum = 0;
//	cout << "Enter the size of array: ";
//	cin >> size;
//	Array<char> arr(size);
//	cout << "Enter the items: ";
//	for (int i = 0; i < size; i++)
//	{
//		char val;
//		cin >> val;
//		arr[i] = val;
//		sum += val;
//	}
//	cout << "Array contents are as follow: \n";
//	for (int i = 0; i < size; i++)
//		cout << arr[i] << endl;
//
//	cout << "Sum of array elements: " << sum << endl;
//}