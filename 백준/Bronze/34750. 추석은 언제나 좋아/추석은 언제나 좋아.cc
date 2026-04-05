#include <iostream>
#include <string>

using namespace std;

int main() {
	int n;
	cin >> n;
	int a, b;
	if (n >= 1'000'000) {
		a = n * 0.2;
		b = n * 0.8;
	}
	else if (n >= 500000) {
		a = n * 0.15;
		b = n * 0.85;
	}
	else if (n >= 100000) {
		a = n * 0.1;
		b = n * 0.9;
	}
	else if (n < 100000) {
		a = n * 0.05;
		b = n * 0.95;
	}
	cout << a << ' ' << b;
}