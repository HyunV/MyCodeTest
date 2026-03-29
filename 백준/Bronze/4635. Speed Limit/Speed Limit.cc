#include <iostream>
using namespace std;

int main() {
	int n;
	int a, b;
	while (cin >> n) {
		if (n == -1)
			break;

		int sum = 0;
		int prev = 0;
		while (n--) {
			cin >> a >> b;
			sum += a * (b - prev);
			prev = b;
		}
		cout << sum << " miles" << '\n';
	}
}