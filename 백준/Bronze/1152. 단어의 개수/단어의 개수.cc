#include <iostream>
#include <string>

int main()
{
	std::string str{};
	int cnt{};
	bool inWord{ false };

	std::getline(std::cin, str);

	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] != ' ')
		{
			if (!inWord)
			{
				inWord = true;
				cnt++;
			}
		}
		else
		{
			inWord = false;
		}
	}

	std::cout << cnt;

	return 0;
}