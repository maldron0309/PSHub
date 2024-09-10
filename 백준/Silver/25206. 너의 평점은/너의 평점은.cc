#include <iostream>
#include <iomanip>
#include <map>

int main()
{
	std::map<std::string, double> gradePoints =
	{
		{"A+", 4.5}, {"A0", 4.0}, {"B+", 3.5},
		{"B0", 3.0}, {"C+", 2.5}, {"C0", 2.0},
		{"D+", 1.5}, {"D0", 1.0}, {"F", 0.0}
	};

	double totalPoints{}, totalCredits{};
	for (int i = 0; i < 20; i++)
	{
		std::string subject;
		double credits;
		std::string grade;

		std::cin >> subject >> credits >> grade;

		if (grade != "P")
		{
			totalPoints += credits * gradePoints[grade];
			totalCredits += credits;
		}
	}

	double gpa = (totalPoints / totalCredits);

	std::cout << std::fixed << std::setprecision(6) << gpa << '\n';


	return 0;
}
