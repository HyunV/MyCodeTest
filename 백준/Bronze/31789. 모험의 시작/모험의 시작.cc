#include <iostream>
using namespace std;

int main() {
	int n;
	int m, k;
	int cost, dps;

	cin >> n >> m >> k;
	bool res = false;

	for (int i = 0; i < n; ++i) {
		cin >> cost >> dps;
		if (cost <= m && dps > k) {
			res = true;
			break;
		}
	}
	cout << (res ? "YES" : "NO");
}