#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<double> scores(N);

    for (int i = 0; i < N; ++i)
    {
        cin >> scores[i];
    }

    double max = *max_element(scores.begin(), scores.end());
    double sum = 0.0;

    for (int i = 0; i < N; ++i)
    {
        sum += (scores[i] / max) * 100;
    }

    double average = sum / N;
    cout << average << '\n';

    return 0;
}
