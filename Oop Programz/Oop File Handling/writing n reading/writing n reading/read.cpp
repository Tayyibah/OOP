//// reading an entire binary file
//#include <iostream>
//#include <fstream>
//using namespace std;
//
//int main () {
//  streampos size;
//  char * data;
//  ifstream file ("d:\\example.txt", ios::in|ios::binary|ios::ate);
//  if (file.is_open())//First, the file is open with the ios::ate flag, which means that the get pointer will be positioned at the end of the file. This way, when we call to member tellg(), we will directly obtain the size of the file.
//  {
//    size = file.tellg();
//    data = new char [size];
//    file.seekg (0, ios::beg);
//    file.read (data, size);
//    file.close();
//
//    cout << "The entire file content is in memory\n";
//
//    delete[] data;
//  }
//  else
//	  cout << "Unable to open file"<<endl;
//  return 0;
//}