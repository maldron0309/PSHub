#include <cmath>
#include <iostream>
using namespace std;

int main() {
  int x;
  int res = 0;

  for (int i = 0; i < 5; i++) {
    cin >> x;
    res += x * x;
  }

  res %= 10;

  cout << res << "\n";
}
