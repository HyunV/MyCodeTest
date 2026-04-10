#include <iostream>
#define PI 3.1415926535
using namespace std;

int main() {
    double a1, p1, r1, p2;
    cin >> a1 >> p1 >> r1 >> p2;

    if (a1 * p2 > r1 * r1 * PI * p1) {
        cout << "Slice of pizza";
    }
    else {
        cout << "Whole pizza";
    }
}