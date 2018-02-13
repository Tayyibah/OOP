//// read a file into memory
//#include <iostream>     
//#include <fstream>   
//using namespace std;  
//int main ()
//{
//  ofstream ofs("d:\\getline.txt"/*,ios::out|ios::app|ios::ate*/);
//  ifstream ifs("d:\\getline.txt", std::ifstream::binary);
//  if (ifs) {
//    // get length of file:
//    ifs.seekg (0, ifs.end);
//    int length = ifs.tellg();
//    ifs.seekg (0, ifs.beg);
//
//    char * buffer = new char [length];
//
//    cout << "Reading " << length << " characters... ";
//    // read data as a block:
//    ifs.read (buffer,length);
//
//    if (ifs)
//      cout << "all characters read successfully.";
//    else
//      cout << "error: only " << ifs.gcount() << " could be read";
//  ifs.close();
//
//    // ...buffer contains the entire file...
//
//    delete[] buffer;
//  }
//  ofs.close();
//  return 0;
//}
