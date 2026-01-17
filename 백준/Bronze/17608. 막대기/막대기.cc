#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	vector<int> vec(n);

	for (int i = 0; i < n; i++) {
		cin >> vec[i];
	}

	int maxHeight = vec[n - 1];
	int answer = 1;
	for (int i = n - 2; i >= 0; --i) {
		if (vec[i] > maxHeight) {
			maxHeight = vec[i];
			answer++;
		}
	}

	cout << answer;
}