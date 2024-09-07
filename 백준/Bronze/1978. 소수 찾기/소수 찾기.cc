#include <iostream>

bool isPrime(int n)
{
	if (n == 1) return false;
	if (n == 2) return true;
	if (n % 2 == 0) return false;

	for (int i = 3; i * i <= n; i += 2)
	{
		if (n % i == 0) return false;
	}

	return true;
}

int main() 
{
	int n{};
	std::cin >> n;
	
	int cnt{};
	for (int i = 0; i < n; i++)
	{
		int prime{};
		std::cin >> prime;

		if (isPrime(prime))
		{
			cnt++;
		}
	}

	std::cout << cnt << '\n';

    return 0;
}
