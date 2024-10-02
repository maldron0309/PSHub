#include <iostream>

int main()
{
	int n{ 0 };
	std::cin >> n;

	for (int m = 1; m < n; m++)
	{
		int temp = m;
		int sum{ 0 };

		while (temp > 0)
		{
			sum += temp % 10;
			temp /= 10;
		}

		if (m + sum == n)
		{
			std::cout << m << '\n';
			return 0;
		}
	}

	std::cout << 0 << '\n';
	return 0;
}