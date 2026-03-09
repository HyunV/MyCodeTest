#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n, m;
	cin >> n;
	vector<int> vec(n);
	vec[0] = 1;
	for(int i = 2; i<= n; i++) {
		cin >> m;
		vec[1 + m] = i;
	}

	for (int i : vec)
		cout << i << ' ';
}