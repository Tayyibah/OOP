////Assalam o Alikum wr wb, Dear students, attached is today class code.You have following home work.
////1. Create three child classes{ FinalExam, Quiz and Assignment } on same pattern as we did in class.
////2. How we can call parameterize constructor when child class constructor invoked ?
////3. Checkpoint question 5.1 to 5.3
////
//
//
//#include <iostream>
//#include <iomanip>
//#include <string>
//
//using namespace std;
//
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
//class MidExam : public GradedActivity
//{
//	int numQuestions; // Number of questions
//	double pointsEach; // Points for each question
//	int numMissed; // Number of questions missed
//public:
//	MidExam()
//	{
//		numQuestions = 0;
//		pointsEach = 0.0;
//		numMissed = 0;
//	}
//
//	MidExam(int questions, int missed)
//	{
//		set(questions, missed);
//	}
//
//	void set(int questions, int missed)
//	{
//		double numericScore; // To hold the numeric score
//
//		// Set the number of questions and number missed.
//		numQuestions = questions;
//		numMissed = missed;
//
//		// Calculate the points for each question.
//		pointsEach = 100.0 / numQuestions;
//
//		// Calculate the numeric score for this exam.
//		numericScore = 100.0 - (missed * pointsEach);
//
//		// Call the inherited setScore function to set
//		// the numeric score.
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
//void main()
//{
//	int questions=9, missed=10;
//	/*cout << "Total Questions: ";
//	cin >> questions;
//	cout << "Number of Questions Missed: ";
//	cin >> missed;*/
//	MidExam exam(questions, missed);
//	cout << setprecision(2);
//	cout << "\nEach question counts "
//		<< exam.getPointsEach()
//		<< " points.\n";
//	cout << "The exam score is "
//		<< exam.getScore() << endl;
//	cout << "The exam grade is "
//		<< exam.getLetterGrade() << endl;
//}