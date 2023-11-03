#include <iostream>
#include <string>

using namespace std;

int main() {
  string hexInput;

  cin >> hexInput;

  int val = stoi(hexInput, nullptr, 16);
  cout << val << "\n";

  return 0;
}
