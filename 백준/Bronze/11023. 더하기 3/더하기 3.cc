#include <iostream>
#include <sstream>
using namespace std;

int main() {
    string line;
    getline(cin, line);

    stringstream ss(line);
    int n, res = 0;

    while (ss >> n) {
        res += n;
    }

    cout << res;
}
