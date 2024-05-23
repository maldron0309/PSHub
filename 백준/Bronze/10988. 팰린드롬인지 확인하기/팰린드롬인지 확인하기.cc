#include <iostream>
#include <string>
using namespace std;

int main()
{
	string word, palindrome;
	cin >> word;

	palindrome = word;
	reverse(palindrome.begin(), palindrome.end());

	if (word == palindrome) cout << 1;
	else cout << 0;

	return 0;
}
