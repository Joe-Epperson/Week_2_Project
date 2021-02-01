#include <iostream>
#include <string>
using namespace std;


int main()
{
	string name;
	double homeworkScore;
	double testScore;
	double quizScore;
	double attendanceScore;
	double finalGrade;



	cout << "Enter the student's name: " << endl;
	cin >> name;

	cout << "Enter the homework grade for " << name << ":" << endl;
	cin >> homeworkScore;

	cout << "Enter the test grade for " << name << ":" << endl;
	cin >> testScore;

	cout << "Enter the quiz grade for " << name << ":" << endl;
	cin >> quizScore;

	cout << "Enter the attendance grade for " << name << ":" << endl;
	cin >> attendanceScore;

	finalGrade = (homeworkScore * 0.2) + (testScore * 0.5) + (quizScore * 0.2) + (attendanceScore * .1);

	cout << "   Grades for " << name << endl;
	cout << "   Homework    : " << homeworkScore << endl;
	cout << "   Test        : " << testScore << endl;
	cout << "   Quiz        : " << quizScore << endl;
	cout << "   Attendance  : " << attendanceScore << endl;
	cout << "------------------------" << endl;
	cout << "   Total Score : " << finalGrade << endl;





}