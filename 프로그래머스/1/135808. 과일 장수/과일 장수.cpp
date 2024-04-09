#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int k, int m, vector<int> score) {
    vector<int> count(k + 1, 0);
    for (int s : score) {
        count[s]++;
    }

    int answer = 0;

    for (int i = k; i >= 1; --i) {
        int boxes = count[i] / m;
        answer += boxes * i * m;
        count[i] %= m;
        
        if (i > 1) {
            count[i-1] += count[i];
        }
    }

    return answer;
}
