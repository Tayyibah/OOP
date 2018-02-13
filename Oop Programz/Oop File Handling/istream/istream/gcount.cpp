//// cin.gcount example
//#include <iostream>     // std::cin, std::cout
//#include <fstream>   
//using namespace std;
//
//int main ()
//{
//  ofstream ofs("d:\\gcount.txt"/*,ios::out|ios::app|ios::ate*/);
//  ifstream ifs("d:\\gcount.txt");
//  char str[20];
//  cout << "Please, enter a word: ";
//  cin.getline(str,20);
//  cout << cin.gcount() << " characters read: " << str << '\n';
//  ofs << ifs.gcount() << " characters read: " << str << '\n';
//  ofs.close();
//  ifs.close();
//  return 0;
//}