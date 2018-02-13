////Assalam o Alikum dear students, attached is today code.
////
////Home Work
////== == == ==
////1. 15.4 to 15.8
////2. Do implement main for Asg, Quiz and finalExam classes on the same pattern I did it for MidExam.
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
//
//protected:
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
//class CurvedActivity : public GradedActivity
//{
//
//protected:
//	double rawScore, percentage;
//public:
//	CurvedActivity() : GradedActivity()
//	{
//		rawScore = percentage = 0.0;
//	}
//	CurvedActivity(double s, double p) : GradedActivity(s*p)
//	{
//		rawScore = s;
//		percentage = p;
//	}
//	void setScore(double s)
//	{
//		rawScore = s;
//		GradedActivity::setScore(rawScore * percentage);
//	}
//	void setPercentage(double p)
//	{
//		percentage = p;
//	}
//	double getPercentage() const
//	{
//		return percentage;
//	}
//	double getRawScore() const
//	{
//		return rawScore;
//	}
//};
//
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
//	GradedActivity obj;
//	int questions, missed;
//	cout << "Total Questions: ";
//	cin >> questions;
//	cout << "Number of Questions Missed: ";
//	cin >> missed;
//	MidExam exam(questions, missed);
//	CurvedActivity scaling(2,3);
//	scaling.setPercentage(50.0 / 200 + 1);
//	scaling.setScore(exam.getScore());
//	cout << setprecision(2);
//	cout << "\nEach question counts "
//		<< exam.getPointsEach()
//		<< " points.\n";
//	cout << "Exam Score: "
//		<< exam.getScore() << endl;
//	cout << "Exam Grade: "
//		<< exam.getLetterGrade() << endl;
//	cout << "\n======= After Scaling =======" << endl;
//	cout << "Exam Score: "
//		<< scaling.getScore() << endl;
//	cout << "Exam Grade: "
//		<< scaling.getLetterGrade() << endl;
//}