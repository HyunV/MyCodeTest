#include <iostream>
#include  <queue>
using namespace std;

int main()
{
	int n = 3;
	int m;
	priority_queue<int> pq;
	while (n--)
	{
		cin >> m;
		pq.push(m);
	}

	pq.pop();
	cout << pq.top();
}