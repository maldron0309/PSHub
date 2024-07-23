#include <iostream>
#include <string>
#include <set>

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cin.tie(0);
	std::cout.tie(0);

	std::set<char> vowels = { 'a','e','i','o','u','A','E','I','O','U' };
	std::string s;
	
	while (true)
	{
		int cnt = 0;

		std::getline(std::cin, s);
		if (s == "#") break;

		for (char c : s)
		{
			if (vowels.count(c)) cnt++;
		}
		std::cout << cnt << '\n';
	}
	return 0;
}