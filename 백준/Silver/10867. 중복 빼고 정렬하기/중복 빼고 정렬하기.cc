#include <iostream>
#include <set>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, m;
	cin >> n;
	set<int> set;

	while (n--) {
		cin >> m;
		set.insert(m);
	}

	for (int i : set) {
		cout << i << ' ';
	}
}