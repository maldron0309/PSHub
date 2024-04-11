#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string S;
    int i;

    cin >> S >> i;

    cout << S[i - 1]; // S의 i번째 글자를 출력. 인덱스는 0부터 시작하기 때문에 i-1 사용

    return 0;
}
