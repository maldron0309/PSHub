#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n, target;
	cin >> n;

	vector<int> v(n);
	for (int& num : v)
		cin >> num;
	
	cin >> target;
	cout << count(v.begin(), v.end(), target);
	return 0;
}
