#include <iostream>
#include <vector>

int main()
{

	long long a{}, b{};
	std::cin >> a >> b;

	if (a == b)
	{
		std::cout << 0;
	}
	else if (a < b)
	{
		std::cout << b - a - 1 << '\n';
		for (long long i = a + 1; i < b; i++)
		{
			std::cout << i << ' ';
		}
	}
	else if (a > b)
	{
		std::cout << a - b - 1 << '\n';
		for (long long i = b + 1; i < a; i++)
		{
			std::cout << i << ' ';
		}
	}

	return 0;
}
