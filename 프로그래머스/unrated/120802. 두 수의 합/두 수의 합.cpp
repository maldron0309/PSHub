
#include <iostream>

using namespace std;

int solution (int num1, int num2) {
    int ans = num1 + num2;
    return ans;
}

int main (){
    
    int num1, num2;
    
    cin >> num1 >> num2;
    
    int res = solution (num1, num2);
    cout << res << "\n";
    
    return 0;
}

