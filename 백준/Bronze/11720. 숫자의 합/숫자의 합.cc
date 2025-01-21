#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	string s;
	cin >> s;

	int sum{};
	for (char c : s)
	{
		sum += c - '0';
	}

	cout << sum << '\n';

	return 0;
}
