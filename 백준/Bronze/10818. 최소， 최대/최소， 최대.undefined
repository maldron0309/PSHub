#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	vector<int> v(n);

	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}

	int max = *max_element(v.begin(), v.end());
	int min = *min_element(v.begin(), v.end());

	cout << min << " " << max;

	return 0;
}
