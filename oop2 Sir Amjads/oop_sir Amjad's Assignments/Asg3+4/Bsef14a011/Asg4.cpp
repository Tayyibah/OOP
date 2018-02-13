//#include <iostream>
//#include <iomanip>
//#include <string>
//
//using namespace std;
//class Zakat
//{
//protected:
//	int num; // contains number of animal due in zakat
//	double money; // contains money that is due in zakat
//public:
//	Zakat(){
//		num = money = 0.0;
//	}// set num = money = 0.0
//	Zakat(int n){
//		num = n;
//	}// set num;
//	Zakat(double m){
//		money = m;
//	}//set money;
//	virtual void calculateZakat() = 0;
//	virtual void display() const = 0;// display zakat
//	// write getter/setter
//};
//class SheepZakat : public Zakat
//{
//protected:
//	int tNum; // contains total number of sheeps;
//public:
//	SheepZakat() :Zakat(){
//		tNum = 0;
//	}
//	SheepZakat(int tNum) : Zakat(){
//		this->tNum = tNum;
//	}// set total number to zero and call parent class default constructor
//	virtual void calculateZakat(){
//		if (tNum < 40)
//		{
//			num = 0;
//		}
//		else if (tNum > 40 && tNum <= 120)
//		{
//			num = 1;
//		}
//		else if (tNum >= 121 && tNum <= 200)
//		{
//			num = 2;
//		}
//		else if (tNum >= 201 && tNum <= 399)
//		{
//			num = 3;
//		}
//		else
//		{
//			num = floor(tNum / 100);
//
//		}
//
//	}// This function calculates zakat on total number of sheeps.
//	virtual void display() const{
//		cout << "Total number of sheeps owned :" << tNum << endl;
//		cout << "Number of sheeps need to given in zakat : " << num << endl;
//
//	}
//};
//class CowZakat : public Zakat
//{
//protected:
//	int tOneYear; // contains total number of one year cow;
//	int tTwoYear; // contains total number of two year cow;
//	int tOneYearToGive; 
//	int tTwoYearToGive; 
//	int tNum; // contains total number of CowZakat;
//	bool choice;
//public:
//	CowZakat() :Zakat(){
//		tOneYear = 0;
//		tTwoYear = 0;
//		tOneYearToGive = 0;
//		tTwoYearToGive = 0;
//		tNum = 0; choice = false;
//	}
//	CowZakat(int tOneYear, int tTwoYear) : Zakat(){
//		this->tOneYear = tOneYear;
//		this->tTwoYear = tTwoYear;
//		this->tNum = tOneYear + tTwoYear;
//		choice = false;
//	}
//	virtual void calculateZakat()	{
//		tNum = tOneYear + tTwoYear;
//		if (tNum % 30 == 0 && tNum % 40 == 0)
//		{
//			tOneYearToGive = tNum / 30;
//			tTwoYearToGive = tNum / 40;
//			choice = true;
//		}
//		else if (tNum % 30 == 0)
//			tOneYearToGive = tNum / 30;
//		else if (tNum % 40 == 0)
//			tTwoYearToGive = tNum / 40;
//		else
//		{
//			tNum = tNum / 10;
//
//			for (int i = 1; i < (tNum /*/ 10*/); i++)
//			{
//				if (tNum % ((i * 4) + 3) == 0)
//				{
//					tOneYearToGive = 1;
//					tTwoYearToGive = i * 1;
//				}
//				else if (tNum % (4 + (i * 3)) == 0)
//				{
//
//					tOneYearToGive = i * 1;
//					tTwoYearToGive = 1;
//				}
//				else if (tNum % ((i * 4) + (i * 3)) == 0)
//				{
//
//					tOneYearToGive = i * 1;
//					tTwoYearToGive = i * 1;
//				}
//			}
//
//		}
//	}
//	// This function calculates zakat on total number of cows.
//	virtual void display() const{
//		cout << "Total number of cows owned :" << tNum << endl;
//		cout << "Number of one year cows need to given in zakat : " << tOneYearToGive << endl;
//		if (choice == true)
//			cout << "***********  OR  ************* " << endl;
//		cout << "Number of two year cows need to given in zakat : " << tTwoYearToGive << endl;
//
//	}
//};
//class CamelZakat : public Zakat
//{
//protected:
//	int tCNum; // contains total number of Camels;
//	int tSNum; // contains total number of Sheeps;
//	int tCNumToGive; // contains total number of Camels;
//	int tSNumToGive; // contains total number of Sheeps;
//	int tNum; // contains total number of CowZakat;
//public:
//	CamelZakat() :Zakat(){
//		tCNum = 0;
//		tSNum = 0;
//		tCNumToGive = 0;
//		tSNumToGive = 0;
//		tNum = 0;
//	}  // set total number to zero and call parent class default constructor
//	CamelZakat(int tCNum, int tSNum) : Zakat(){
//		this->tCNum = tCNum;
//		this->tSNum = tSNum;
//		this->tNum = tCNum + tSNum;
//	}
//	virtual void calculateZakat()
//	{
//		tNum = tCNum + tSNum;
//		int totalNumOfAnimals = tNum;
//		int a = tNum / 50;
//		int v = tNum - a * 50;
//		tNum = v;
//		a = a * 3; tCNumToGive = a;
//		if (tNum / 5 < 5)
//		{
//			tSNumToGive = tNum / 5;
//		}
//		else if (tNum / 5 <= 10)
//		{
//			if (tNum / 5 < 7)
//			{
//				tCNumToGive = 1 + a;
//			}
//			else if (tNum / 5 < 9)
//			{
//				tCNumToGive = 2 + a;
//			}
//			else if (tNum / 5 <= 10)
//			{
//				tCNumToGive = 3 + a;
//			}
//			if (tNum <= 24)
//			{
//				if (tNum / 5 < 5)
//				{
//					tSNumToGive = tNum / 5;
//				}
//			}
//		}
//		else
//		{
//			int a2 = tNum / 50;
//			int a21 = tNum % 50;
//			if (a21  < 25)
//			{
//				tSNumToGive = a21 / 5;
//				tSNumToGive = tNum / 5;
//			}
//			tCNumToGive = a2 * 3;
//		}
//		 tNum= totalNumOfAnimals;
//	}
//	virtual void display() const{
//		cout << "Total number of camels owned:" << tNum << endl;
//		cout << "Number of camels need to given in zakat : " << tCNumToGive << endl;
//		cout << "Number of sheeps need to given in zakat : " << tSNumToGive << endl;
//
//	}
//
//};
//class MoneyZakat : public Zakat
//{
//protected:
//	double goldVal, silverVal, tradeVal;
//public:
//	MoneyZakat() :Zakat(){
//		setgoldVal(0);
//		setsilverVal(0);
//		settradeVal(0);
//	}   // set every data member to zero and call default constructor of parent class
//	MoneyZakat(double g, double s, double t) :Zakat(){
//		setgoldVal(g);
//		setsilverVal(s);
//		settradeVal(t);
//	}  // set every data member respectively and call parent class default constructor
//	void setgoldVal(int goldValue)
//	{
//		this->goldVal = goldValue;
//	}
//	int getgoldVal()const
//	{
//		return goldVal;
//	}
//	void setsilverVal(int silverValue)
//	{
//		this->silverVal = silverValue;
//	}
//	int getsilverVal()const
//	{
//		return silverVal;
//	}
//	void settradeVal(int tradeValue)
//	{
//		this->tradeVal = tradeValue;
//	}
//	int gettradeVal()const
//	{
//		return tradeVal;
//	}
//	virtual void calculateZakat()
//	{
//		money = (goldVal + silverVal + tradeVal) / 40;
//
//	}
//	virtual void display() const{
//		cout << "Total Gold value :" << getgoldVal() << endl;
//		cout << "Total Silver value  : " << getsilverVal() << endl;
//		cout << "Total Trade things value : " << gettradeVal() << endl;
//		cout << "Sum of all three things : " << getgoldVal() + getsilverVal() + gettradeVal() << endl;
//		cout << "Zakat on total money value : " << money << endl;
//
//	}
//
//};
//void display(const Zakat *obj)
//{
//	obj->display();
//}
//int main(void) {
//	MoneyZakat m(1, 2, 3);
//	CamelZakat cam(60,0);
//	CowZakat cow(40, 80);
//	SheepZakat sheep(944);
//
//	Zakat *ptr = &m;
//	cout << "Zakat on Money*************** : " << endl;
//	ptr->calculateZakat();
//	display(ptr);
//
//	cout << endl;
//
//	ptr = &cam;
//	cout << "Zakat on Camel*************** : " << endl;
//	ptr->calculateZakat();
//	display(ptr);
//
//	cout << endl;
//
//
//
//	ptr = &cow;
//	cout << "Zakat on cow*************** : " << endl;
//	ptr->calculateZakat();
//	display(ptr);
//
//	cout << endl;
//
//
//
//	ptr = &sheep;
//	cout << "Zakat on sheep*************** : " << endl;
//	ptr->calculateZakat();
//	display(ptr);
//
//	cout << endl;
//
//
//	return 0;
//}