#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int a,b,c,i;
	cin >> a;

	for (i = 0; i < a; i++)
	{
		cin >> b >> c;
		cout << b + c << "\n";
	}
    
    return 0;
}