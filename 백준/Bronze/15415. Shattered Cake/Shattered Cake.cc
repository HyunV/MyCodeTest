#include <iostream>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;

	int w, l;
	int sum = 0;
	while (m--) {
		cin >> w >> l;
		sum += w * l;
	}
	cout << sum / n;
}