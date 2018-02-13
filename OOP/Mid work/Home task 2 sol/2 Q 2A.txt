#include<iostream>
using namespace std;
struct Time
{
int hours;
int minutes;
int seconds;
};
void main() 
{
Time t;
t.hours = 10;
t.minutes = 17;
t.seconds = 23;
int * p = (int*) &t;
p[0] = 20;
p[1] = 15;
p[2] = 30;
cout<<t.hours<<endl<<t.minutes<<endl<<t.seconds<<endl;
}