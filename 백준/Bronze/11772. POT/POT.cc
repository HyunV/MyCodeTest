#include <iostream>
#include <math.h>

using namespace std;

int main() {
	int n, m;
	long long answer = 0;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> m;

		int num = m % 10;
		m /= 10;

		answer += pow((double)m, num);
	}

	cout << answer;
}