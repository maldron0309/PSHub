#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<bool> submitted(31, false); 
    int n;

    for (int i = 0; i < 28; ++i)
    {
        cin >> n;
        submitted[n] = true;
    }

    for (int i = 1; i <= 30; ++i)
    {
        if (!submitted[i])
        {
            cout << i << '\n';
        }
    }

    return 0;
}
