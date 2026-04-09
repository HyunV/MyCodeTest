#include <iostream>
using namespace std;

int main() {
	int n, m;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> m >> m;
		int sum = 0;
		for (int j = 1; j <= m; j++) {
			sum += j;
		}
		cout << i << ' ' << sum+m << '\n';
	}
}