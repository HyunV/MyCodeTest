#include <iostream>

using namespace std;

int main() {

	int n, m;
	cin >> n >> m;
	double answer = 0;
	double minNum = ((double)n / m);

	int t;
	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> n >> m;
		answer = ((double)n / m);
		if (minNum > answer)
			minNum = answer;
	}

	cout << minNum * 1000 << '\n';
}