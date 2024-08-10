#include <iostream>
#include <vector>

int main()
{
	std::string input;
	std::cin >> input;

	std::vector<int> frequency(26, 0);
	for (char& c : input)
	{
		c = std::toupper(c);
		++frequency[c - 'A'];
	}

	int maxFrequency{};
	char result{ '?' };

	for (int i = 0; i < 26; ++i)
	{
		if (frequency[i] > maxFrequency)
		{
			maxFrequency = frequency[i];
			result = 'A' + i;
		}
		else if (frequency[i] == maxFrequency)
		{
			result = '?';
		}
	}

	std::cout << result << '\n';

	return 0;
}
