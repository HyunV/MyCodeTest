#include <iostream>
#include <string>
#include <queue>
#include <algorithm>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;

	priority_queue<int> pq;
	
	int k = 0;
	string s = "";
	for (int i = 1; i <= m; i++) {
		k = n * i;
		s = to_string(k);
		reverse(s.begin(), s.end());
		k = stoi(s);
		pq.push(k);
	}
	cout << pq.top();
}