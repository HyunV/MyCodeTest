#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, m, k;
	cin >> n >> m;
	
	vector<int> vec;
	
	while (n--) {
		cin >> k;
		vec.push_back(k);
	}

	while (m--) {
		cin >> k;
		vec.push_back(k);
	}

	sort(vec.begin(), vec.end());
	for (int i : vec) {
		cout << i << ' ';
	}
}