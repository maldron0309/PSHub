#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

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
