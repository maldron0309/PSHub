#include <iostream>

int main()
{
	int t{};
	std::cin >> t;

	while (t--)
	{
		int h{}, w{}, n{};
		std::cin >> h >> w >> n;

		int floor = (n % h == 0) ? h : (n % h);
		int room = (n % h == 0) ? (n / h) : (n / h + 1);

		std::cout << floor * 100 + room << '\n';
	}

	return 0;
}
