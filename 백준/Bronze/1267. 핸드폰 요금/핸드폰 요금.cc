#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N; 
    cin >> N;

    int Y = 0; 
    int M = 0; 

    for (int i = 0; i < N; i++) {
        int call;
        cin >> call;

        Y += (call / 30 + 1) * 10;

        M += (call / 60 + 1) * 15;
    }

    if (Y < M) {
        cout << "Y " << Y;
    }
    else if (Y > M) {
        cout << "M " << M;
    }
    else { 
        cout << "Y M " << Y;
    }

    return 0;
}