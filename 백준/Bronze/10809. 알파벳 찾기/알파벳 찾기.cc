#include <iostream>
using namespace std;

int main() 
{
	string s;
	cin >> s;

	int position[26];
	fill(position, position + 26, -1);

	for (int i = 0; i < s.length(); i++)
	{
		int index = s[i] - 'a';
		if (position[index] == -1) 
			position[index] = i;
	}

	for (int i = 0; i < 26; i++)
	{
		cout << position[i] << " ";
	}

	return 0;
}
