#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
	string str;
	int cnt = 0;
	bool inWord = false;
	getline(cin, str);

	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] != ' ') // 문자가 공백이 아닌 경우
		{
			if (!inWord)
			{
				inWord = true;
				cnt++;
			}
		}
		else // 문자가 공백인 경우
		{
			inWord = false;
		}
	}

	cout << cnt;

	return 0;
}