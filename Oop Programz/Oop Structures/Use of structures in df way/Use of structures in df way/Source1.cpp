#include<iostream>
using namespace std;
struct Wow
{
int rollNo;
char name[48];
float cgpa;
};
void main()
{
Wow w = {512, "Ahmed", 3.7};
cout<< *( (float*) ( (char*)&w + sizeof(w.rollNo) + sizeof(w.name)) );
cout<<endl;
}