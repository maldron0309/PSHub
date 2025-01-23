#include <iostream>
using namespace std;

int main()
{
	int k{ 1 }, q{ 1 }, r{ 2 }, b{ 2 }, n{ 2 }, p{ 8 };
	cin >> k >> q >> r >> b >> n >> p;

	cout << 1 - k << " " << 1 - q << " " << 2 - r << " " << 2 - b << " " << 2 - n << " " << 8 - p;

	return 0;
}
