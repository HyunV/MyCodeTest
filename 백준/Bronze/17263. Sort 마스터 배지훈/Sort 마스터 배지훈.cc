#include <iostream>
#include <queue>

using namespace std;

int main()
{
	priority_queue<int> pq;	

	int n, m;
	cin >> n;
	
	while (n--) {
		cin >> m;
		pq.push(m);
	}
	cout << pq.top();
}