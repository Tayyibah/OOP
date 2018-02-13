#include<iostream>
#include<fstream>
#include <string>

using namespace std;

void main()
{
	fstream file;
	string line;
	cout << "Enter the data you want to insert in file\nEnter -1 when you finished\n\n";
	try
	{
		/* Writing File. */
		file.open("file.txt", ios::out | ios::app);
		if (file.fail())
		{
			string exp = "ERROR: couldn't open file for writing.\n";
			throw exp;
		}
		do
		{
			cin >> line;
			if (line != "-1")
			{
				file << line;
				file << "\n";
			}
		} while (line != "-1");

		char ch;
		ch = file.get();
		cout << ch << endl;
		file.close();

		/* Reading File. */
		file.open("file.txt", ios::in);
		if (file.fail())
		{
			string exp = "ERROR: couldn't open file for reading.\n";
			throw exp;
		}
		line = "";
		cout << "\nHere are the contents you enter\n\n";
		while (!file.eof())
		{
			file >> line;
			cout << line << endl;
		}
		ch='0';
		file.put(ch);
		cout << ch << endl;

		ch;
		ch = file.get();
		cout << ch << endl;
		string im;
		int g = file.tellg();
		cout << g << endl;
		g = file.tellp();
		cout << g << endl;
		file.close();
	}
	catch (string exp)
	{
		cout << exp << endl;
	}

}