#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
	std::vector<int> cards(20);

	for (int i = 0; i < 20; i++)
	{
		cards[i] = i + 1;
	}

	for (int i = 0; i < 10; i++)
	{
		int a{}, b{};
		std::cin >> a >> b;

		--a;
		--b;

		std::reverse(cards.begin() + a, cards.begin() + b + 1);
	}

	for (int i = 0; i < 20; i++)
	{
		std::cout << cards[i] << ' ';
	}
	std::cout << '\n';

	return 0;
}
