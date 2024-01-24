#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    vector<int> B(N + 1, 0);

    for (int a = 0; a < M; a++)
    {
        int i, j, k;
        cin >> i >> j >> k;
        fill(B.begin() + i, B.begin() + j + 1, k);
    }

    for (int a = 1; a <= N; a++)
    {
        cout << B[a] << " ";
    }
}
