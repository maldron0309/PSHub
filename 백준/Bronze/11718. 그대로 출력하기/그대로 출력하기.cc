#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	string input;
	while (getline(cin, input))
	{
		cout << input << '\n';
	}

    return 0;
}
