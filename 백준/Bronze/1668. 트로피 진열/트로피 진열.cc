#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> vec(n);
	int left = 0;
	int right = 0;

	int prev = 0;
	for (int i = 0; i < n; i++) {
		cin >> vec[i];
		if (vec[i] > prev) {
			prev = vec[i];
			left++;
		}
	}

	prev = 0;
	for (int i = n - 1; i >= 0; i--) {
		if (vec[i] > prev) {
			prev = vec[i];
			right++;
		}
	}
	cout << left << '\n' << right;
}