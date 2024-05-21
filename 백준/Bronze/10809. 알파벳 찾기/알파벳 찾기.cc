#include <iostream>
using namespace std;

int main()
{
    string input;
    cin >> input;

    for (char i = 'a'; i <= 'z'; i++)
    {
        int find = input.find(i);
        cout << find << " ";
    }
    return 0;
}
