#include <iostream>
#include <string> 
using namespace std;

int main() 
{
    string w;
    int cnt{1};

	getline(cin, w);

	for (int i = 0; i < w.length(); i++)
	{
		if (w[i] == ' ') cnt++;
	}

	if (w[0] == ' ') cnt--;
	if (w[w.length() - 1] == ' ') cnt--;

	cout << cnt;

    return 0;
}
