#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


void PrintStar(int N) {

    for (int i = N; i > 0; i--) {

        for (int j = 0; j < N - i; j++) {
            cout << " ";
        }
        
        for (int k = 0; k < 2 * i - 1; k++) {
            cout << "*";
        }
        cout << "\n";
    }

    for (int i = 2; i <= N; i++) {

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
