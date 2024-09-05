#include <iostream>

int main()
{
	int t{};
	std::cin >> t;

	while (t--)
	{
		std::string s{};
		std::cin >> s;
		int score{}, count{};

		for (char c : s)
		{
			if (c == 'O')
			{
				count++;
				score += count;
			}
			else
			{
				count = 0;
			}
		}
		std::cout << score << '\n';
	}

	return 0;
}