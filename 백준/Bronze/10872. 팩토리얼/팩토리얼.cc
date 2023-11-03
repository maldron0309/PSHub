#include <iostream>
using namespace std;

int main() {
  int N, F = 1;
  cin >> N;

  for (int i = 2; i <= N; i++) {
    F *= i;
  }

  cout << F << "\n";
  return 0;
}