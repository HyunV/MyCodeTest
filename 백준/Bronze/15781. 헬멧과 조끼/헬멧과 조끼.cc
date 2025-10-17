#include <iostream>
#include <queue>

using namespace std;

int main()
{
	priority_queue<int> pq1;
	priority_queue<int> pq2;

	int n, m;
	cin >> n >> m;

	int num;
	while (n--) {
		cin >> num;
		pq1.push(num);
	}
	while (m--) {
		cin >> num;
		pq2.push(num);
	}

	cout << pq1.top() + pq2.top();
}