#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n, k, p;
	cin >> n >> k >> p;

	vector<int> vec(n * k);
	for (int i = 0; i < n * k; i++)
		cin >> vec[i];

	int cost = 0;
	for (int i = 0; i < n; i++) {
		int cnt = 0;
		for (int j = i * k; j < (i + 1) * k; j++)
			if (vec[j] == 0)
				cnt++;
		if (cnt < p)
			cost++;
	}
	cout << cost << '\n';
}