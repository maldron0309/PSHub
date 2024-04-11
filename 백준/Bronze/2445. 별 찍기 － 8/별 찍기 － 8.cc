#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


void PrintStar(int N) {

    for (int i = 1; i <= N; i++) {
        
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        
        for (int j = 1; j <= 2 * (N - i); j++) {
            cout << " ";
        }
        
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << "\n";
    }

    for (int i = N - 1; i >= 1; i--) {
        
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        
        for (int j = 1; j <= 2 * (N - i); j++) {
            cout << " ";
        }
        
        for (int j = 1; j <= i; j++) {
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
