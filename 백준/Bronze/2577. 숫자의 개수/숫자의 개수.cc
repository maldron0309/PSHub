#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;

	int res = a * b * c;
	string resStr = to_string(res);

	vector<int> count(10, 0);

	for (char digit : resStr)
	{
		int num = digit - '0';
		count[num]++;
	}

	for (int i = 0; i < 10; i++)
	{
		cout << count[i] << '\n';
	}
	return 0;
}
