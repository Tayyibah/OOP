//// istream::ignore example
//#include <iostream>     
//#include <fstream>   
//using namespace std;  
//int main ()
//{
//	 ofstream ofs("d:\\getline.txt"/*,ios::out|ios::app|ios::ate*/);
//	 ifstream ifs("d:\\getline.txt");
//	 char first, last;
//	 cout << "Please, enter your first name followed by your surname: ";
//	 first = cin.get();     // get one character
//	 cin.ignore(256,' ');   // ignore until space
//	 last = cin.get();      // get one character
//	 cout << "Your initials are " << first << last << '\n';
//	 ofs << "Your initials are " << first << last << '\n';
//	 ofs.close();
//	 ifs.close();
//	 return 0;
//}