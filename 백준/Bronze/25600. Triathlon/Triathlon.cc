#include <iostream>
#include <queue>
using namespace std;

int main()
{
	int a, d, g, n;
	cin >> n;

	priority_queue<int> pq;

		while (n--)
		{
			cin >> a >> d >> g;
			int doubleScore = (a == (d + g)) ? 2 : 1;
			pq.push(doubleScore * (a * (d + g)));
		}

		cout << pq.top();
}