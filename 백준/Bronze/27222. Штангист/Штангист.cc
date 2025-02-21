#include <iostream>
#include <queue>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int grow = 0;
	bool isTraining;
	queue<bool> q;

	for (int i = 0; i < n; i++)
	{
		cin >> isTraining;
		q.push(isTraining);
	}

	while (n--)
	{
		bool b = q.front();
		q.pop();
		int x, y;
		cin >> x >> y;
		if (b && y - x > 0)
			grow += y - x;
	}

	cout << grow;
}