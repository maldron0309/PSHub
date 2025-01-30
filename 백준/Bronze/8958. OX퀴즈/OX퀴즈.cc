#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		string quiz;
		cin >> quiz;

		int count = 0, totalScore = 0;

		for (int i = 0; i < quiz.length(); i++)
		{
			if (quiz[i] == 'O')
			{
				count++;
				totalScore += count;
			}
			else count = 0;
		}

		cout << totalScore << '\n';
	}

	return 0;
}