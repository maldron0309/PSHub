#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    
	int n = 0;

	cin >> n;
	
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i-1; j++)
		{
			cout << " ";
		}

		for (int k = i; k <= n; k++)
		{
			cout << "*";
		}

		cout << '\n';
	}
    return 0;
}
