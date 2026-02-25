#include <iostream>
#include <math.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    double m = 0;
    double length;
    for (int i = 0; i < n; i++) {
        cin >> length;
        m += pow(length, 3);
    }

    double res = pow(m, 1.0 / 3);
    cout << fixed;
    cout.precision(6);
    cout << res << '\n';
}