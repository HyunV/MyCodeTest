#include <iostream>
using namespace std;

int arr[100001];
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, m, a, b;
	cin >> n >> m;
	for (int i = 0; i < m; ++i) {
		cin >> a >> b;
		arr[a]++;
		arr[b]++;
	}
	for (int i = 1; i <= n; i++) {
		cout << arr[i] << '\n';
	}
}