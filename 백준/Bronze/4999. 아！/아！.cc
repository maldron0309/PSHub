#include <iostream>
#include <string>

int main()
{
	std::string s;
	std::string s1;

	std::cin >> s >> s1;

	if (s.size() >= s1.size()) std::cout << "go";
	else std::cout << "no";

	return 0;
}