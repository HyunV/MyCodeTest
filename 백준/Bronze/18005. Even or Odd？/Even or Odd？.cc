#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    bool odd1 = (n * (n + 1) / 2) % 2;
    bool odd2 = (odd1 + n) % 2;

    int answer = 0;
    if (odd1 == odd2) {
        answer = odd2 ? 1 : 2;
    }
    cout << answer;
}