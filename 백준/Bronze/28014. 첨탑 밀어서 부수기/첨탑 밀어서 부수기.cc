#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    int prev = 0;
    int res = 0;
    cin >> n;
    while (n--) {
        cin >> m;
        if (m >= prev) {
            res++;
        }
        prev = m;
    }
    cout << res;
}