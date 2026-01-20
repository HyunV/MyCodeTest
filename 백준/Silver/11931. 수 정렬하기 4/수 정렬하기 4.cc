#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, m;
	cin >> n;
	vector<int> vec(n);

	while (n--) {
		cin >> vec[n];
	}
	
	sort(vec.begin(), vec.end(), greater<int>());
	
	for (int i : vec) {
		cout << i << '\n';
	}
}