#include <iostream>
#include <string>

int main()
{
	std::string n;
	unsigned long long likeNumber = 20000303;
	unsigned long long remainder = 0;

	std::cin >> n;

	for (char digit : n)
	{
		remainder = (remainder * 10 + (digit - '0')) % likeNumber;
	}

	std::cout << remainder << '\n';

	return 0;

}
