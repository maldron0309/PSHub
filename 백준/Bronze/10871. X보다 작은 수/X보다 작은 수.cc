#include<iostream>
using namespace std;

int main() {
	int N, X,res;

	cin >> N >> X;
	for (int i = 0; i < N; i++)
	{
		cin >> res;
		if (res < X) cout << res << " ";
	}
	
	return 0;
}