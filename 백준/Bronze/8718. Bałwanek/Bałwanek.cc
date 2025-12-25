#include <bits/stdc++.h>
using namespace std;
int main() {
	long long x = 0, k = 0, a = 0, b = 0, c = 0;

	cin >> x >> k;
	if (7000 * k <= 1000 * x)
		a = 7000 * k;

	if (3500 * k <= 1000 * x)
		b = 3500 * k;

	if (1750 * k <= 1000 * x)
		c = 1750 * k;

	long long answer = max({ a, b, c });
	cout << answer;
}
