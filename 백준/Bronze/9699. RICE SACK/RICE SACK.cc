#include <iostream>
#include <queue>
using namespace std;

int main()
{

	int n;
	cin >> n;

	for(int i = 1; i<= n; i++)
	{
		priority_queue<int> pq;
		int m = 5;
		int x;
		while (m--)
		{
			cin >> x;
			pq.push(x);
		}
		cout << "Case #"<< i<<": " << pq.top() << '\n';
	}

}