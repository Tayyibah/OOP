//#include <iostream>
//#include <iomanip>
//#include <string>
//#include "Time.h"
//#include "TimeClock.h"
//using namespace std;
//
////Assalam o Alikum Dear students, attached is Friday class code.Please do following questions from the book section "Algorithm Workbench" at the end of chapter 15 as a home work.
////Section: Algorithm Workbench
////		 34 to 37
////
////	 Section : Find the errors
////			   53 to 58
////
////		   Section : Programming Challenges
////					 1 to 8, 11 and 12
////
////					 Bring your home work code in our Thursday class 4 Jan 2018
////
////					 Thanks
//
////34)class Poodle : public Dog
////35)class SoundSystem : public CDplayer, public Tunner, public Casseeteplayer
////36)Carnivore
////37)
//class B
//{
//private:
//	int m;
//protected:
//	int n;
//public:
//	void setM(int m)
//	{
//		this->m = m;
//	}
//	void setN(int n)
//	{
//		this->n = n;
//	}
//	int getN()
//	{
//		return n;
//	}
//	int getM()
//	{
//		return m;
//	}
//	virtual int	calc() const
//	{
//		return m*n;
//	}
//};
//
//class D : public B
//{
//private:
//	float q;
//protected:
//	float r;
//	float a;
//public:
//	void setq(int q)
//	{
//		this->q = q;
//	}
//	void setR(int n)
//	{
//		this->r = r;
//	}
//	int getR()
//	{
//		return r;
//	}
//	int getq()
//	{
//		return q;
//	}
//	virtual int	calc(int m, int n)
//	{
//		return q*r;
//	}
//};
////Find The Errors
////53)
////54)
////55)
////56)
////57)
////58)
////Programming Challenges:
//
//class Employee
//{
//private:
//	string EmployeeName;
//	string EmployeeNumber;
//	string hireDate;
//public:
//	Employee()
//	{
//		EmployeeName = "";
//		EmployeeNumber = "";
//		hireDate = "";
//
//	}
//	Employee(string EmployeeName, string EmployeeNumber, string hireDate)
//	{
//		this->EmployeeName = EmployeeName;
//		this->EmployeeNumber = EmployeeNumber;
//		this->hireDate = hireDate;
//
//	}
//	void setEmployeeName(string EmployeeName)
//	{
//		this->EmployeeName = EmployeeName;
//	}
//	void sethireDate(string hireDate)
//	{
//		this->hireDate = hireDate;
//	}
//	void setEmployeeNumber(string n)
//	{
//		this->EmployeeNumber = n;
//	}
//	string getEmployeeNumber()
//	{
//		return EmployeeNumber;
//	}
//	string getEmployeeName()
//	{
//		return EmployeeName;
//	}
//	string gethireDate()
//	{
//		return hireDate;
//	}
//};
//
//class ProductionWorker : public Employee
//{
//private:
//	int shift;
//	float houlyPayRate;
//public:()
//	ProductionWorker()
//{
//		shift = 0;
//		houlyPayRate = 0.0;
//	}
//	   ProductionWorker(int shift, float houlyPayRate, string EmployeeName, string EmployeeNumber, string hireDate) :Employee(EmployeeName, EmployeeNumber, hireDate)
//	   {
//
//		   this->shift = shift;
//		   this->houlyPayRate = houlyPayRate;
//	   }
//	   void setshift(int shift)
//	   {
//		   this->shift = shift;
//	   }
//	   void sethoulyPayRate(int houlyPayRate)
//	   {
//		   this->houlyPayRate = houlyPayRate;
//	   }
//	   int gethoulyPayRate()
//	   {
//		   return houlyPayRate;
//	   }
//	   int getshift()
//	   {
//		   return shift;
//	   }
//};
//
//class ShiftSupervisor : public Employee
//{
//private:
//	int annualSalary;
//	float annualProductionBonus;
//public:
//	ShiftSupervisor()
//	{
//		annualSalary = 0;
//		annualProductionBonus = 0.0;
//	}
//	ShiftSupervisor(int annualSalary, float annualProductionBonus, string EmployeeName, string EmployeeNumber, string hireDate) :Employee(EmployeeName, EmployeeNumber, hireDate)
//	{
//
//		this->annualSalary = annualSalary;
//		this->annualProductionBonus = annualProductionBonus;
//	}
//	void setannualSalary(int annualSalary)
//	{
//		this->annualSalary = annualSalary;
//	}
//	void setannualProductionBonus(int annualProductionBonus)
//	{
//		this->annualProductionBonus = annualProductionBonus;
//	}
//	int getannualProductionBonus()
//	{
//		return annualProductionBonus;
//	}
//	int getannualSalary()
//	{
//		return annualSalary;
//	}
//};
//
//class TeamLeader : public ProductionWorker
//{
//private:
//	int monthlyBonusAmount;
//	int trainingHoursRequiresd;
//	int trainingHoursAttended;
//public:
//	TeamLeader()
//	{
//		monthlyBonusAmount = 0;
//		trainingHoursRequiresd = 0.0;
//		trainingHoursAttended = 0.0;
//	}
//	TeamLeader(
//		int monthlyBonusAmount, int trainingHoursRequiresd, int trainingHoursAttended, int annualSalary, float annualProductionBonus, string ProductionWorkerName, string ProductionWorkerNumber, string hireDate) :ProductionWorker(annualSalary, annualProductionBonus, ProductionWorkerName, ProductionWorkerNumber, hireDate)
//	{
//
//		this->monthlyBonusAmount = monthlyBonusAmount;
//		this->trainingHoursRequiresd = trainingHoursRequiresd;
//		this->trainingHoursAttended = trainingHoursAttended;
//	}
//	void setmonthlyBonusAmount(int monthlyBonusAmount)
//	{
//		this->monthlyBonusAmount = monthlyBonusAmount;
//	}
//	void settrainingHoursRequiresd(int trainingHoursRequiresd)
//	{
//		this->trainingHoursRequiresd = trainingHoursRequiresd;
//	}
//	int gettrainingHoursAttended()
//	{
//		return trainingHoursAttended;
//	}
//	void settrainingHoursAttended(int trainingHoursAttended)
//	{
//		this->trainingHoursAttended = trainingHoursAttended;
//	}
//	int gettrainingHoursRequiresd()
//	{
//		return trainingHoursRequiresd;
//	}
//	int getmonthlyBonusAmount()
//	{
//		return monthlyBonusAmount;
//	}
//};
//class GradedActivity
//{
//	double score;
//public:
//	GradedActivity() { score = 0.0; }
//	GradedActivity(double s) { score = s; }
//	void setScore(double s) { score = s; }
//	double getScore() const { return score; }
//	char getLetterGrade() const
//	{
//		if (score >= 85) return 'A';
//		else if (score >= 75) return 'B';
//		else if (score >= 65) return 'C';
//		else if (score >= 55) return 'D';
//		else if (score >= 50) return 'E';
//		else return 'F';
//	}
//};
//
//class FinalExamS : public GradedActivity
//{
//	int numQuestions1; // Number of questions
//	double pointsEach; // Points for each question
//	int numMissed; // Number of questions missed
//public:
//	FinalExamS()
//	{
//		numQuestions1 = 0;
//		pointsEach = 0.0;
//		numMissed = 0;
//	}
//
//	FinalExamS(int questions, int missed)
//	{
//		set(questions, missed);
//	}
//
//	void set(int questions, int missed)
//	{
//		double numericScore;
//		numQuestions1 = questions;
//		numMissed = missed;
//		pointsEach = 100.0 / numQuestions1;
//		numericScore = 100.0 - (missed * pointsEach);
//		setScore(numericScore);
//	}
//
//	double getnumQuestions1() const
//	{
//		return numQuestions1;
//	}
//	double getPointsEach() const
//	{
//		return pointsEach;
//	}
//	int getNumMissed() const
//	{
//		return numMissed;
//	}
//};
//
//class PassFailExam : public GradedActivity
//{
//	int numQuestions; // Number of questions
//	double pointsEach; // Points for each question
//	int numMissed; // Number of questions missed
//public:
//	PassFailExam()
//	{
//		numQuestions = 0;
//		pointsEach = 0.0;
//		numMissed = 0;
//	}
//
//	PassFailExam(int questions, int missed)
//	{
//		set(questions, missed);
//	}
//
//	void set(int questions, int missed)
//	{
//		double numericScore;
//		numQuestions = questions;
//		numMissed = missed;
//		pointsEach = 100.0 / numQuestions;
//		numericScore = 100.0 - (missed * pointsEach);
//		setScore(numericScore);
//	}
//
//	double getNumQuestions() const
//	{
//		return numQuestions;
//	}
//	double getPointsEach() const
//	{
//		return pointsEach;
//	}
//	int getNumMissed() const
//	{
//		return numMissed;
//	}
//};
//
//class Essay : public GradedActivity
//{
//	double content;
//	double grammer;
//	double spelling;
//	double correctLength;
//public:
//	Essay()
//	{
//		content = 0;
//		grammer = 0;
//		spelling = 0.0;
//		correctLength = 0;
//	}
//
//	Essay(double content, double grammer, double spelling, double correctLength)
//	{
//		set(content, grammer, spelling, correctLength);
//	}
//
//	void set(double content, double grammer, double spelling, double correctLength)
//	{
//		double essayScore = content + grammer + spelling + correctLength;
//		setScore(essayScore);
//	}
//
//	double getgrammer() const
//	{
//		return grammer;
//	}
//	double getspelling() const
//	{
//		return spelling;
//	}
//	int getcorrectLength() const
//	{
//		return correctLength;
//	}
//	int getcontent() const
//	{
//		return content;
//	}
//};
//class PersonData
//{
//private:
//	string lastName;
//	string firstName;
//	string address;
//	string city;
//	string state;
//	string zip;
//	string phone;
//public:
//	PersonData()
//	{
//		lastName, firstName, address, city, state, zip, phone = "";
//	}
//	PersonData(string lastNam, string  firstNam, string addres, string cit, string stat, string zi, string phon)
//	{
//		lastName = lastNam, firstName = firstNam, address = addres, city = cit, state = stat, zip = zi, phone = phon;
//	}
//	string getlastName()
//	{
//		return lastName;
//	}
//	void setlastName(string lastN)
//	{
//		lastName = lastN;
//	}
//	string getfirstName()
//	{
//		return firstName;
//	}
//	void setfirstName(string lastN)
//	{
//		firstName = lastN;
//	}
//	string getaddress()
//	{
//		return address;
//	}
//	void setaddress(string lastN)
//	{
//		address = lastN;
//	}
//	string getcity()
//	{
//		return city;
//	}
//	void setcity(string lastN)
//	{
//		city = lastN;
//	}
//	string getstate()
//	{
//		return state;
//	}
//	void setstate(string lastN)
//	{
//		state = lastN;
//	}
//	string getzip()
//	{
//		return zip;
//	}
//	void setzip(string lastN)
//	{
//		zip = lastN;
//	}
//	string getphone()
//	{
//		return phone;
//	}
//	void setphone(string lastN)
//	{
//		phone = lastN;
//	}
//};
//class CustomerData :public PersonData
//{
//private:
//	int customerNumber; bool mailingList;
//public:
//
//	CustomerData() :PersonData()
//	{
//		customerNumber = 0;
//		mailingList = false;
//	}//lastName, firstName, address, city, state, zip, phone
//	CustomerData(int customerN, bool mailingLt, string lastNam, string  firstNam, string addres, string cit, string stat, string zip, string phon) : PersonData(lastNam, firstNam, addres, cit, stat, zip, phon)
//	{
//		customerNumber = customerN, mailingList = mailingLt;
//
//	}
//	int getcustomerNumber()
//	{
//		return customerNumber;
//	}
//	void setcustomerNumber(int lastN)
//	{
//		customerNumber = lastN;
//	}
//	bool getmailingList()
//	{
//		return mailingList;
//	}
//	void setmailingList(bool lastN)
//	{
//		mailingList = lastN;
//	}
//
//};
//class PreferredCustomer :public CustomerData
//{
//private:
//	double purchaseAmount;
//	double discountLevel;
//public:
//
//	PreferredCustomer() :CustomerData()
//	{
//		purchaseAmount = 0;
//		discountLevel = 0;
//	}//lastName, firstName, address, city, state, zip, phone
//	PreferredCustomer(double purchaseA, int customerN, bool mailingLt, string lastNam, string  firstNam, string addres, string cit, string stat, string zip, string phon) : CustomerData(customerN, mailingLt, lastNam, firstNam, addres, cit, stat, zip, phon)
//	{
//		setpurchaseAmount(purchaseA);
//		setdiscountLevel(purchaseAmount);
//
//	}
//	double getpurchaseAmount()
//	{
//		return purchaseAmount;
//	}
//	void setpurchaseAmount(double lastN)
//	{
//		purchaseAmount = lastN;
//	}
//	double getdiscountLevel()
//	{
//		return discountLevel;
//	}
//	void setdiscountLevel(double lastN)
//	{
//		if (purchaseAmount == 500)
//		{
//			discountLevel = 0.05;
//
//
//		}
//		else if (purchaseAmount == 1000)
//		{
//			discountLevel = 0.06;
//
//
//		}
//		else if (purchaseAmount == 1500)
//		{
//			discountLevel = 0.07;
//
//
//		}
//		else if (purchaseAmount == 2000)
//		{
//			discountLevel = 1;
//
//
//		}
//	}
//
//};
//class CourseGrade
//{
//private:
//	GradedActivity* grades;
//	/*int lab; int pass_fail; int essay; int FinalExamS;*/
//public:
//	CourseGrade()
//	{
//		for (int i = 0; i < 3; i++)
//		{
//			grades[i] = 0;
//		}
//	}
//	~CourseGrade()
//	{
//		for (int i = 0; i < 3; i++)
//		{
//			grades[i] = 0;
//		}
//	}
//	CourseGrade(GradedActivity* grade)
//	{
//		for (int i = 0; i < 3; i++)
//		{
//			grades[i] = grade[i];
//		}
//
//	}
//	//void setFinalExamS(FinalExamS & h)//GradedActivity s(50);
//	//{
//	//	grades[3] = h;
//	//}
//	void setlab(GradedActivity & h)//GradedActivity s(50);
//	{
//		grades[0] = h;
//	}
//	void setpass_failExam(PassFailExam & h)//GradedActivity s(50);
//	{
//		grades[1] = h;
//	}
//	void setessay(Essay & h)//GradedActivity s(50);
//	{
//		grades[2] = h;
//	}
//	void print(GradedActivity * grade)
//	{
//		for (int i = 0; i < 3; i++)
//		{
//			cout << endl << i << endl;
//			cout << "grades : " << grade[i].getScore();
//			cout << "LetterGrade : " << grade[i].getLetterGrade();
//		}
//	}
//};
//void main()
//{
//	ProductionWorker(1, 2, "Ahsan", "20", "24th dec");
//	Time t(900, 50);
//	t.printTwelveHourFormat();
//	TimeClock t1(900, 1345);
//	t1.elapsedTime();
//	Essay exam(29, 18, 20, 18);
//	cout << "The Essay grade is "
//		<< exam.getLetterGrade() << endl;
//	CustomerData c1(1, true, "Sehar", "Abbass", "cav", "lhr", "a", "b", "c");
//	CustomerData c2(2, true, "Sehar", "Abbass", "cav", "lhr", "a", "b", "c");
//	CustomerData c3(3, true, "Sehar", "Abbass", "cav", "lhr", "a", "b", "c");
//	CustomerData c4(4, true, "Sehar", "Abbass", "cav", "lhr", "a", "b", "c");
//	PreferredCustomer p1(1000, 4, true, "Sehar", "Abbass", "cav", "lhr", "a", "b", "c");
//	cout << "Discount Level of p1 is " << p1.getdiscountLevel() << endl;
//	PreferredCustomer p2(2000, 4, true, "Sehar", "Abbass", "cav", "lhr", "a", "b", "c");
//	cout << "Discount Level of p2 is " << p2.getdiscountLevel() << endl;
//
//	//11
//	GradedActivity GradedActivity1(70);
//	cout << "The Graded score is "
//		<< GradedActivity1.getScore() << endl;
//	PassFailExam PassFailExam1(10, 7);
//	cout << "The PassFailExam score is "
//		<< PassFailExam1.getScore() << endl;
//	FinalExamS FinalExam1(10, 7);
//	cout << "The FinalExam score is "
//		<< FinalExam1.getScore() << endl;
//	Essay Essay1(29, 18, 20, 18);
//	cout << "The Essay score is "
//		<< Essay1.getScore() << endl;
//	GradedActivity *test[3] = { new GradedActivity(88), new PassFailExam(1, 88), new Essay(29, 18, 20, 18) };
//	CourseGrade crs(test[0]);
//	CourseGrade crs2(test[1]);
//	CourseGrade crs3(test[2]);
//	crs.setlab(GradedActivity1);
//	crs.setpass_failExam(PassFailExam1);
//	crs.setessay(Essay1);
//	//crs.setFinalExamS(FinalExam1);
//	crs.print(test[0]);
//}//ship cruiseship and cargoship classes c++