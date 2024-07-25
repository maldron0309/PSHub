#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cin.tie(0);
	std::cout.tie(0);

	int d, h, m = 0;
	int start, end = 0;
	std::cin >> d >> h >> m;

	start = (11 + 11 * 60 + 11 * 60 * 24);
	end = (m + h * 60 + d * 60 * 24 - start);

	if (end < 0) std::cout << -1 << '\n';
	else std::cout << end << '\n';

	return 0;
}