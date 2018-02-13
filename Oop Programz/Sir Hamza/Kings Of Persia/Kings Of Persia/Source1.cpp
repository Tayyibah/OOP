#include<iostream>
#include<fstream>
using namespace std;

int main()
{
  ofstream myfile;
  myfile.open ("example.txt");
  myfile << "Writing this to a file.\n";
	ifstream ifs("in1.txt"); 
	int count;
	ifs>>count;
	
	for (int i = 0; i < count; i++)
	{
		int initialVelocity , time;
		ifs>>initialVelocity>>time;
		cout<<initialVelocity * (time*2)<<endl;
	
	} 
	ifs.close();
  myfile.close();
	return 0;
}