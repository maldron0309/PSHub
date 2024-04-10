#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v(9);
    int totalHeight = 0;

    for (int i = 0; i < 9; i++) {
        cin >> v[i];
        totalHeight += v[i];
    }

    sort(v.begin(), v.end());

    int overHeight = totalHeight - 100; 

    for (int i = 0; i < 8; i++) {
        for (int j = i + 1; j < 9; j++) {
            if (v[i] + v[j] == overHeight) {
                v.erase(v.begin() + j); // 먼저 j번째 난쟁이를 제거
                v.erase(v.begin() + i); // 그 다음 i번째 난쟁이를 제거
                for (int k = 0; k < 7; k++) {
                    cout << v[k] << '\n';
                }
                return 0;
            }
        }
    }

    return 0;
}
