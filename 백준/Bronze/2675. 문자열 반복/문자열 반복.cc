#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    int T, R;
    string S, P; 

    cin >> T;

    for (int i = 0; i < T; i++) {
        cin >> R >> S; 
        P = ""; 

        for (char c : S) { 
            for (int j = 0; j < R; j++) { 
                P += c; 
            }
        }

        cout << P << '\n'; 
    }

    return 0;
}
