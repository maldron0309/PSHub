#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	string s;
	vector<int> freq(26);
	cin >> s;

	for (char &c : s)
	{
		c = toupper(c);
		freq[c - 'A']++;
	}

	int maxFreq = 0;
	char res = '?';

	for (int i = 0; i < freq.size(); i++)
	{
		if (freq[i] > maxFreq)
		{
			maxFreq = freq[i];
			res = 'A' + i;
		}
		else if (freq[i] == maxFreq)
		{
			res = '?';
		}
	}

	cout << res;

	return 0;
}
