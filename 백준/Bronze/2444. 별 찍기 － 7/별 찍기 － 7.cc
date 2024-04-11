#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


void PrintStar(int N) {

    for (int i = 1; i <= N; i++) {
        
        for (int j = 0; j < N - i; j++) {
            cout << " ";
        }
        
        for (int k = 0; k < 2 * i - 1; k++) {
            cout << "*";
        }
        cout << "\n";
    }

    for (int i = N - 1; i > 0; i--) {

        for (int j = 0; j < N - i; j++) {
            cout << " ";
        }

        for (int k = 0; k < 2 * i - 1; k++) {
            cout << "*";
        }
        cout << "\n";
    }
}

int main() {
    int N;
    cin >> N;

    PrintStar(N);

    return 0;
}
