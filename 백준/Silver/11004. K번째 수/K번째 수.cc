#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, m, k;
	cin >> n >> k;
	
	vector<int> vec(n);
	
	while (n--)
		cin >> vec[n];

	sort(vec.begin(), vec.end());

	cout << vec[k - 1];
}