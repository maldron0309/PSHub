#include <iostream>

int main()
{
	int t{ 0 };
	std::cin >> t;

	for (int i = 1; i <= t; i++)
	{
		int n{ 0 }, res{ 0 };

		for (int j = 0; j < 10; j++)
		{
			std::cin >> n;
			if (n % 2 == 1)
			{
				res += n;
			}
		}
		std::cout << "#" << i << " " << res << '\n';
	}

	return 0;
}