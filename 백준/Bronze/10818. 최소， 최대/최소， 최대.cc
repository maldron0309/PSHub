#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {

	int N;
	cin >> N;
	vector<int>data(N);


	for (int i = 0; i < N; i++)
	{
		cin >> data[i];
	}

	int min = *min_element(data.begin(), data.end());
	int max = *max_element(data.begin(), data.end());

	cout << min << " " << max;
	return 0;

}
