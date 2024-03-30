#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> array) {
    vector<int> freq(1000, 0);
    int maxFreq = 0;
    for(int num : array) {
        freq[num]++;
        maxFreq = max(maxFreq, freq[num]); 
    }

    int mode = -1;
    for(int i = 0; i < 1000; ++i) {
        if(freq[i] == maxFreq) {
            if(mode != -1) {
                return -1;
            }
            mode = i; 
        }
    }

    return mode;
}