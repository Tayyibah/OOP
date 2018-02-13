
#include"Set.h"

int *arr; // Array to hold the set 
int size;
Set::Set(){
	size = 0;
	arr = new int[size];
} // Default constructer setting arr to NULL and size to 0
Set::Set(int s){
	size = s;
	arr = new int[size];
} // Takes the size as input parameter and creates the set on heap.  
bool Set::Equal(Set B){
	int sizeB = B.size; int i = 0;

	if (size == sizeB)
	{
		while (i < size)
		{
			if (arr[i] == B.arr[i])
				i++;
		}
		if (i == size){

			cout << "Sets Are Equal" << endl;
			return false;
		}
		else
			cout << "Sets Are not Equal" << endl;
		return false;
	}
	else
	{
		cout << "Size of sets is not Equal" << endl;
		return false;
	}

} // compares if two sets are equal return true if yes otherwise false. 
bool isAlreadyAnElement(int element, int ind)
{
	for (int i = 0; i < size; i++)
	{
		if (element == arr[i])
		{
			return true;
		}

	}
	return false;
}

int findCommonElements(int s1[], int s2[], int size1, int size2)
{

	int i = 0, j = 0, count = 0; int k = 0;
	for (int i = 0; i < size1; i++)
	{
		for (int j = 0; j < size2; j++)
		{
			if (s1[i] == s1[j])
			{
				k++;

			}
		}
	}
	return k;
}
//Set  Set::Intersection(Set s2){
//
//	int commonElementsCount = findCommonElements(arr, s2.arr, size, s2.size);
//	Set intersection(commonElementsCount);
//	int k = 0;
//	for (int i = 0; i < size; i++)
//	{
//		for (int j = i; j < s2.size; j++)
//		{
//			if (arr[i] == s2.arr[j])
//			{
//				intersection.arr[k] = arr[i];
//				k++;
//				//intersection.arr[intersection.size++] = arr[i];
//			}
//		}
//	}
//	intersection.Display();
//	return intersection;
//} // Takes intersection of two sets and return the resultant set.  
//Set  Set::Difference(Set s2){
//
//	int commonElementsCount = findCommonElements(arr, s2.arr, size, s2.size);
//	Set diff(size - commonElementsCount);
//	//	Set diff(size);
//	int k = 0;
//	for (int i = 0; i < size; i++)
//	{
//		for (int j = 0; j < s2.size; j++)
//		{
//			if (arr[i] == s2.arr[j])
//			{
//				break;
//			}
//			if (j == s2.size - 1)
//			{
//				diff.arr[k] = arr[i];
//				k++;
//				diff.arr[diff.size++] = arr[i];
//			}
//		}
//	}
//	diff.Display();
//	return diff;
//} // Takes difference of two sets (A-B) and return the resultant set.  
void Set::Display(){

	cout << "Set" << "=";
	cout << "{";
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << ",";
	}
	cout << "\b}";
	cout << endl;
} // Function displays the set values.{}  
void Set::Input(int s){
	size = s;
	int n;
	for (int i = 0; i < size; i++)
	{
		cout << "Enter input " << i << " in Set:";
		cin >> n;
		arr[i] = n;
	}
	cout << endl;
} // Takes input in a set object.  
Set::~Set()
{
	size = 0;
	delete[]arr;
	arr = NULL;
}
Set createSet(Set s, int size)
{
	Set result(size);
	s.arr = new int[s.size];
	return result;
}
//Set Set::Union(Set s2)
//{
//	int commonElementsCount = findCommonElements(arr, s2.arr, size, s2.size);
//	//Set result;
//	Set result(size + s2.size - commonElementsCount);
//	result = createSet(result, size + s2.size - commonElementsCount);
//	for (int i = 0; i < size; i++)
//	{
//		result.arr[i] = arr[i];
//		//result.size++;
//	}
//	for (int j = 0; j < s2.size; j++)
//	{
//		int i = 0;
//		while (i < result.size&&result.arr[i] != s2.arr[j])
//		{
//			i++;
//		}
//		if (i == result.size)
//			result.arr[size++] = s2.arr[j];
//	}
//	result.Display();
//	return result;
//}
int Set::findSetElementIndex(int element)
{
	int i = 0;
	while (i < size && arr[i] != element)
	{
		i++;
	}
	return i == size ? -1 : i;
}

int Set::isMember(int val)
{
	if (findSetElementIndex(val) != -1)
		return 1;
	else if (findSetElementIndex(val) == -1)
		return 0;
	return 0;
}
int findCommonElements1(int s1[], int s2[], int size1, int size2)
{
	//set1:............ : Set = { 1, 3, 2, 4 }
	//
	//
	//set2:............ : Set = { 1, 2, 5 }
	int i = 0, j = 0, count = 0;
	Set common = 0;
	common.size = size2; int k = 0;
	for (int i = 0; i<size1; i++)
	{
		for (int j = 0; j<size2; j++)
		{
			if (s1[i] == s2[j])
			{
				k++;
				for (int l = 0; l < k; l++)
				{
					if (common.arr[k-1] != s1[i])
					{
						common.arr[k-1] = s1[i];
						//k++;
						count++;

					}
				}
			}
		}
	}
	common.size = count;
	return count;
}
Set Set:: Union(Set & s2)
{
	int  count = 0;
	Set common;// = new Set[s2.size];
	common.arr = new int[s2.size];
	common.size = s2.size; int k = 0;
	for (int i = 0; i<size; i++)
	{
		for (int j = 0; j<s2.size; j++)
		{
			if (arr[i] == s2.arr[j])
			{
				k++;
				for (int l = 0; l < k; l++)
				{
					if (common.arr[k - 1] != arr[i])
					{
						common.arr[k - 1] = arr[i];
						//k++;
						count++;

					}
				}
			}
		}
	}
	//common.size = count;
	int commonElementsCount = count;// findCommonElements1(arr, s2.arr, size, s2.size);
	//Set result;
	Set result(size + s2.size - commonElementsCount);
	Set Union(size + s2.size - commonElementsCount);
	int i;
	for (i = 0; i < size; i++)
	{
		Union.arr[i] = arr[i];
		//Union.size++;
	}
	int j = i;
	int l = 0;
	while (l < s2.size)
	{
		for (int k = 0; k < size; k++)
		{
			if (arr[k] == s2.arr[l])
			{
				break;
			}
			if (k == size - 1)
			{
				Union.arr[j] = s2.arr[l];
				//Union.size++;
				j++;
			}
		}
		l++;
	}
	Union.Display();
	return Union;
}
Set Set:: Intersection(Set s2)
{
	Set intersection;
	int k = 0;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < s2.size; j++)
		{
			if (arr[i] == s2.arr[j])
			{
				intersection.arr[k] = arr[i];
				k++;
			}
		}
	}
	intersection.size=k;
	intersection.Display();
	return intersection;
}
Set Set:: Difference(Set & s2)
{
	int commonElementsCount = findCommonElements1(arr, s2.arr, size, s2.size);
	Set diff(size - commonElementsCount); int k = 0;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < s2.size; j++)
		{
			if (arr[i] == s2.arr[j])
			{
				break;
			}
			if (j == s2.size - 1)
			{
				diff.arr[k] = arr[i];
				k++;
			}
		}
	}
	diff.Display();
	return diff;
}









































































//
//Set Set:: Union(Set & s2)
//{
//	Set Union(size + s2.size);
//	int i;
//	for (i = 0; i < size; i++)
//	{
//		Union.arr[i] = arr[i];
//		//Union.size++;
//	}
//	int j = i;
//	int l = 0;
//	while (l < s2.size)
//	{
//		for (int k = 0; k < size; k++)
//		{
//			if (arr[k] == s2.arr[l])
//			{
//				break;
//			}
//			if (k == size - 1)
//			{
//				Union.arr[j] = s2.arr[l];
//				//Union.size++;
//				j++;
//			}
//		}
//		l++;
//	}Union.Display();
//	return Union;
//}
//Set Set:: Intersection(Set & s2)
//{
//	Set intersection(size + s2.size);
//	for (int i = 0; i < size; i++)
//	{
//		for (int j = 0; j < s2.size; j++)
//		{
//			if (arr[i] == s2.arr[j])
//			{
//				intersection.arr[intersection.size++] = arr[i];
//			}
//		}
//	}intersection.Display();
//	return intersection;
//}
//Set Set:: Difference(Set & s2)
//{
//	Set diff(size);
//	for (int i = 0; i < size; i++)
//	{
//		for (int j = 0; j < s2.size; j++)
//		{
//			if (arr[i] == s2.arr[j])
//			{
//				break;
//			}
//			if (j == s2.size - 1)
//			{
//				diff.arr[diff.size++] = arr[i];
//			}
//		}
//	}diff.Display();
//	return diff;
//}