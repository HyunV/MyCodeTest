#include <iostream>

using namespace std;

int main() {
	int n, m, k;
	cin >> n >> m;

	char c;
	while (m--) {
		cin >> c >> k;
		c == '+' ? n += k : n -= k;
	}
	cout << n;
}