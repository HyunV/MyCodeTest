#include <iostream>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	int a, b;
	int answer = m;
	for (int i = 0; i < n; ++i) {
		cin >> a >> b;
		m = m + a - b;
		if (m < 0) {
			answer = 0;
			break;
		}
		if (m >= answer)
			answer = m;
	}
	cout << answer;
}