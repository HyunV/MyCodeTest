#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    int arr[3];
    int ans[3] = { 0,0,0 };
    cin >> a >> b >> c >> d;
    for (int i = 0; i < 3; i++) {
        cin >> arr[i];
        int d1 = arr[i] % (a + b) ;
        int d2 = arr[i] % (c + d);
        if (d1 <= a && d1 != 0) 
		ans[i]++;
        if (d2 <= c && d2 != 0) 
		ans[i]++;
    }

    for (int i = 0; i < 3; i++)
        cout << ans[i] << '\n';
}