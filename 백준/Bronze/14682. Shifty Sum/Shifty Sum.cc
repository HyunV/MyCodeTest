#include <iostream>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;

	int sum = n;
	int a = n;
	while (m--) {
		a *= 10;
		sum += a;
	}
	cout << sum;
}