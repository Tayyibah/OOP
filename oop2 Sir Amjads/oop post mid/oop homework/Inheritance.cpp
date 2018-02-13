#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class GradedActivity
{

protected:
	double score;
public:	
	GradedActivity() { score = 0.0; }
	GradedActivity(double s) { score = s; }
	void setScore(double s) { score = s; }
	double getScore() const { return score; }
	virtual char getLetterGrade() const
	{
		if (score >= 85) return 'A';
		else if (score >= 75) return 'B';
		else if (score >= 65) return 'C';
		else if (score >= 55) return 'D';
		else if (score >= 50) return 'E';
		else return 'N';
	}
};

class PassFailActivity : public GradedActivity
{
protected:
	double minPassScore; // Minimum Passing score
public:
	PassFailActivity() : GradedActivity()
	{
		minPassScore = 0.0;
	}
	PassFailActivity(double mps) : GradedActivity()
	{
		minPassScore = mps;
	}
	void setMinPassScore(double mps)
	{
		minPassScore = mps;
	}
	double getMinPassScore() const
	{
		return minPassScore;
	}
	char getLetterGrade() const
	{
		if (score >= minPassScore) return 'P';
		return 'F';
	}
};


class MidExam : public PassFailActivity
{
	int numQuestions; // Number of questions
	double pointsEach; // Points for each question
	int numMissed; // Number of questions missed
public:
	MidExam() : PassFailActivity()
	{
		numQuestions = 0;
		pointsEach = 0.0;
		numMissed = 0;
	}

	MidExam(int questions, int missed, double mps) : PassFailActivity(mps)
	{
		set(questions, missed);
	}

	void set(int questions, int missed)
	{
		double numericScore; // To hold the numeric score

		// Set the number of questions and number missed.
		numQuestions = questions;
		numMissed = missed;

		// Calculate the points for each question.
		pointsEach = 100.0 / numQuestions;

		// Calculate the numeric score for this exam.
		numericScore = 100.0 - (missed * pointsEach);

		// Call the inherited setScore function to set
		// the numeric score.
		setScore(numericScore);
	}

	double getNumQuestions() const
	{
		return numQuestions;
	}
	double getPointsEach() const
	{
		return pointsEach;
	}
	int getNumMissed() const
	{
		return numMissed;
	}
};

void displayGrade(const GradedActivity &activity)
{
	cout << setprecision(1) << fixed << endl;
	cout << "The activity's numeric score is "
		<< activity.getScore() << endl;
	cout << "The activity's letter grade is "
		<< activity.getLetterGrade() << endl;
}

class CurvedActivity : public GradedActivity
{

protected:
	double rawScore, percentage;
public:
	CurvedActivity() : GradedActivity()
	{
		rawScore = percentage = 0.0;
	}
	CurvedActivity(double s, double p) : GradedActivity(s*p)
	{
		rawScore = s;
		percentage = p;
	}
	void setScore(double s)
	{
		rawScore = s;
		GradedActivity::setScore(rawScore * percentage);
	}
	void setPercentage(double p)
	{
		percentage = p;
	}
	double getPercentage() const
	{
		return percentage;
	}
	double getRawScore() const
	{
		return rawScore;
	}
};

void main()
{
	PassFailActivity pf(50);
	pf.setScore(85);
	displayGrade(pf);
	/*
	int questions, missed;
	double minPassScore;
	cout << "Total Questions: ";
	cin >> questions;
	cout << "Number of Questions Missed: ";
	cin >> missed;
	cout << "Minimum Passing Scrore for this Exam: ";
	cin >> minPassScore;
	MidExam exam(questions, missed, minPassScore);
	cout << setprecision(2);
	cout << "\nEach question counts " 
		<< exam.getPointsEach()
		<< " points.\n";
	cout << "Minimum Passing Score: "
		<< exam.getMinPassScore() << endl;
	cout << "Exam Score: " 
		<< exam.getScore() << endl;
	cout << "Exam Grade: " 
		<< exam.getLetterGrade() << endl;
	
	/* Introduce Scaling */
	/*CurvedActivity scaling;
	scaling.setPercentage(50.0 / 200 + 1);
	scaling.setScore(exam.getScore());
	exam.setScore(scaling.getScore());
	cout << "\n======= After Scaling =======" << endl;
	cout << "Exam Score: " 
		<< exam.getScore() << endl;
	cout << "Exam Grade: "
		<< exam.getLetterGrade() << endl;
	*/
	
	//displayGrade(scaling);
}