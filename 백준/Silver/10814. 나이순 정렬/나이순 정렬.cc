#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

    int N;
    cin >> N;

    vector<pair<int, string>> members(N);

    for (int i = 0; i < N; i++)
    {
        cin >> members[i].first >> members[i].second;
    }

    stable_sort(members.begin(), members.end(), [](const pair<int, string> a, const pair<int, string> b){
        return a.first < b.first;
    });

    for (int i = 0; i < N; i++)
    {
        cout << members[i].first << " " << members[i].second << '\n';
    }

    return 0;
}
