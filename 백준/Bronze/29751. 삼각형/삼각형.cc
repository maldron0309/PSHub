#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    int w, h;
    cin >> w >> h;

    double area = (double)(w * h) / 2;

    cout << fixed << setprecision(1) << area;

    return 0;
}
