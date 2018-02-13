//// istream::peek example
//#include <iostream>     // std::cin, std::cout
//#include <string>       // std::string
//#include <cctype>       // std::isdigit
//#include <fstream>   
//using namespace std;  
//int main ()
//{
//  ofstream ofs("d:\\peek.txt"/*,ios::out|ios::app|ios::ate*/);
//  ifstream ifs("d:\\peek.txt");
//  
//  cout << "Please, enter a number or a word: ";
//  cout.flush();    // ensure output is written
//
//  cin >> ws;  // eat up any leading white spaces
//  int c = cin.peek();  // peek character
//
//  if ( c == EOF ) 
//	  return 1;
//  if ( isdigit(c) )
//  {
//    int n;
//    cin >> n;
//    cout << "You entered the number: " << n << '\n';
//  }
//  else
//  {
//    string str;
//    cin >> str;
//    cout << "You entered the word: " << str << '\n';
//  }
//
//  ofs.close();
//  ifs.close();
//  return 0;
//}
