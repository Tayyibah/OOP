#ifndef SET_H
#define SET_H
#include<iostream>
using namespace std;
#include<cstdlib>
class Set {
public:
	int *arr; // Array to hold the set 
	int size; // Holds the size of set public:
	Set(); // Default constructer setting arr to NULL and size to 0
	Set(int); // Takes the size as input parameter and creates the set on heap.  
	bool Equal(Set B); // compares if two sets are equal return true if yes otherwise false.  
	//Set Union(Set B); // Takes union of two sets and return the resultant set.  
	//Set Intersection(Set B); // Takes intersection of two sets and return the resultant set.  
	//Set Difference(Set B); // Takes difference of two sets (A-B) and return the resultant set.  
	void Display(); // Function displays the set values.;  
	void Input(int s); // Takes input in a set object.  
	int *findSetUnion(Set s2);
	~Set(); // Destructor to properly free allocated memory }; 
	int findSetElementIndex(int);
	int isMember(int);
	Set  Difference(Set &B); // Takes difference of two sets (A-B) and return the resultant set.  
	Set   Intersection(Set B); // Takes difference of two sets (A-B) and return the resultant set.  
	Set  Union(Set &B); // Takes difference of two sets (A-B) and return the resultant set.  

};

#endif
