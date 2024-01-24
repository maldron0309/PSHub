#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> data(9);  

    for (int i = 0; i < 9; i++)  
    {
        cin >> data[i];
    }

    auto maxIter = max_element(data.begin(), data.end());

    int maxIndex = distance(data.begin(), maxIter);

    cout << *maxIter << "\n" << maxIndex + 1;  

    return 0;
}
