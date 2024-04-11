#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = 0; i < N; i++) { 

        for (int j = 0; j < i; j++) { 
            cout << " ";
        }

        for (int k = 0; k < 2 * (N - i) - 1; k++) { 
            cout << "*";
        }

        cout << "\n";
    }

    return 0;
}
