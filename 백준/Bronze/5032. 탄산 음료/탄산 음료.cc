#include <iostream>
using namespace std;

int main() {
	int n, m, k;
	cin >> n >> m >> k;
	n += m;
	int sum = 0;
	while (n >= k) {
		int div = n / k;
		sum += div;
		n %= k;
		n += div;
	}
	cout << sum;
}