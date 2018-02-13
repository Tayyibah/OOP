#include<iostream>
#include<fstream>
using namespace std;

struct Book
{
	int page;
	char *author;
};
int main()
{
	Book b;
   ifstream ifs; // declare an object of fstream class
   ofstream ofs("d:\\library.txt");
   ifs.peek();
   while(!ifs.eof())
   {
		ifs>>b.page;
   }
   if(strcmp(b.author,"Tony Gaddis")!=0)
   {
		ofs<<b.author<<" "<<b.page;
   }
   ifs.ignore();
   ifs.peek();
   
   ifs.close();
   ofs.close();
   remove("d:\\library.txt" );
   rename("d:\\library.txt" ,"d:\\lib.txt");
   return 0;
}