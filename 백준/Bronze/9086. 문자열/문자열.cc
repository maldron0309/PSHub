#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int T;
	cin >> T;

	while (T--) {
		string str;
		cin >> str;
		cout << str.front() << str.back() << '\n';
	}

	return 0;
}