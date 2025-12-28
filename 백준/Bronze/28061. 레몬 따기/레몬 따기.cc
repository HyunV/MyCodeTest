#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int n, m;
	int res = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> m;
		res = max (res, m - (n - i + 1));
	}
	cout << res;
}