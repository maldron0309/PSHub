#include <iostream>
using namespace std;

int main() {
    int w;
    cin >> w;
    cout << (w >= 620 ? "Red" : w >= 590 ? "Orange" : w >= 570 ? "Yellow" : w >= 495 ? "Green" : w >= 450 ? "Blue" : w >= 425 ? "Indigo" : "Violet");
    return 0;
}
