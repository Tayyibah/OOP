#include"Time.h"
#include"MilTime.h"
using namespace std;

void main()
{
	int h, s;
	do
	{
		system("cls");
		cout << "Enter Hours in Military Format: ";
		cin >> h;
		cout << "Enter Seconds: ";
		cin >> s;
		cout << endl;
		MilTime T1(h, s);
		T1.print();
		system("pause");
	} while (1);
}