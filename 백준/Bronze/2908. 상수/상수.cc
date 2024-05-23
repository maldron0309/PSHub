#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    string x, y;
    int num1, num2, maxNum;
    cin >> x >> y;

    reverse(x.begin(), x.end());
    reverse(y.begin(), y.end());

    num1 = stoi(x);
    num2 = stoi(y);

    maxNum = max(num1, num2);

    cout << maxNum;
    return 0;
}
