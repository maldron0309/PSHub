#include <iostream>

int main()
{
	int n{}, sugar{};
	std::cin >> n;

	while (n >= 0)
	{
		if (n % 5 == 0)
		{
			sugar += (n / 5);
			std::cout << sugar;

			return 0;
		}
		else
		{
			n -= 3;
			sugar++;
		}
	}

	std::cout << -1 << '\n';

	return 0;
}
