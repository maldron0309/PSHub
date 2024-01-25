#include <iostream>
using namespace std;

int main() {
	
	int N, M;
	int arr[100][100], arr2[100][100];

	cin >> N >> M;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cin >> arr[i][j];
		}
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cin >> arr2[i][j];
		}
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cout << arr[i][j] + arr2[i][j] << " ";
		}
		cout << "\n";
	}
   
	return 0;
}
