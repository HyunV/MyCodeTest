#include <iostream>

using namespace std;

int main() {
	int t, n, c;
	cin >> t;
	while (t--) {
		cin >> n >> c;
		int day = 0;
		day = n / c;
		n %= c;

		if (n)
			day++;
			
		cout << day << '\n';
	}
}