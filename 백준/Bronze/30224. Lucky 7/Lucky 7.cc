#include <iostream>
#include <string>

int main()
{
	unsigned long long n = 0;
	std::cin >> n;

	std::string number = std::to_string(n);

	bool contains = (number.find('7') != std::string::npos);
	bool divisible = (n % 7 == 0);

	if (!contains && !divisible) std::cout << 0 << '\n';
	else if (!contains && divisible) std::cout << 1 << '\n';
	else if (contains && !divisible) std::cout << 2 << '\n';
	else if (contains && divisible) std::cout << 3 << '\n';

	return 0;

}
