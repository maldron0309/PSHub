#include <iostream>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int a, b, t;
	cin >> t;

	while (t--)
	{
		cin >> a >> b;
		cout << a + b << '\n';
	}

	return 0;
}
