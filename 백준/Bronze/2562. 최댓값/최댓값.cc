#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);


	vector<int> v(9);

	for (int i = 0; i < 9; i++)
	{
		cin >> v[i];

	}

	auto max = max_element(v.begin(), v.end());
	int maxValue = *max;
	int maxIndex = distance(v.begin(), max);

	cout << maxValue << '\n' << maxIndex + 1 << '\n';

	return 0;
}
