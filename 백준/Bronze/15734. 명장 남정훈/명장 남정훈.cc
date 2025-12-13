#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n, m, k; 
	cin >> n >> m >> k;
	int sum = n + m + k;

	if (n < m) {
		int minNum = min(m - n, k);
		n += minNum; 
		k -= minNum;
	}
	else {
		int minNum = min(n - m, k);
		m += minNum, k -= minNum;
	}

	if (m == n) 
		cout << sum - (k & 1);
	else 
		cout << sum - abs(m - n);
}