#include <iostream>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	int answer = n;
	while (1) {
		answer += (n / m);
		n /= m;
		if (n < m)
		    break;
	}
	cout << answer << '\n';
}