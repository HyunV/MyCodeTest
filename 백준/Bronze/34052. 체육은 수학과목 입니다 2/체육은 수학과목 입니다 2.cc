#include <iostream>

using namespace std;

int main() {
    int circle = 0;
    int n;

    for (int i = 0; i < 4; i++) {
        cin >> n;
        circle += n;
    }
    if (circle + 300 > 1800) {
        cout << "No";
    }
    else {
        cout << "Yes";
    }
}