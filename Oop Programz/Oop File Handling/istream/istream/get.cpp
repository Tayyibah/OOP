//// istream::get example
//#include <iostream>     // std::cin, std::cout
//#include <fstream>      // std::ifstream 
//using namespace std;
//
//int main ()
//{ 
//  ifstream ifs("d:\\get.txt",ios::out|ios::app);
//  char str[256];
//  cout << "Enter the name of an existing text file: ";
//  cin.get (str,256);    // get c-string
//   //ifstream is(str);     // open file
//
//  char c;
//  while (ifs.get(c))          // loop getting single characters
//   cout << c;               
//  ifs.close(); // close file
//  return 0;
//}