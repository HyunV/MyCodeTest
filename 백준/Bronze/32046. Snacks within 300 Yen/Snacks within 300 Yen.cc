#include <iostream>

using namespace std;

int main() {
    int n, m;
    while (1) {
        cin >> n;
        if (!n)
            break;

        int cost = 0;
        while (n--) {
            cin >> m;
            if (cost + m <= 300) {
                cost += m;
            }
        }
        cout << cost << '\n';
    }
}