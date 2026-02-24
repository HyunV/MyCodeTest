#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int n;
	cin >> n;

	vector<int> vec(n);
	while (n--)
		cin >> vec[n];

	sort(vec.begin(), vec.end());

	*vec.begin() = 0;
	*(--vec.end()) = 0;

	int res = 0;
	for (int i : vec)
		res += i;

	cout << res;
}