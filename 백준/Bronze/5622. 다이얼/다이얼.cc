#include <iostream>
#include <string>
using namespace std;

int main()
{
    string word;
    int totalTime = 0;
    cin >> word;

    for (char c : word)
    {
        if (c <= 'R') totalTime += (c - 'A') / 3 + 3;
        else if (c <= 'S') totalTime += 8;
        else if (c <= 'V') totalTime += 9;
        else totalTime += 10;
    }

    cout << totalTime;

    return 0;
}
