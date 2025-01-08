#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> arr[100001];

int main()
{
	int n, from, to;
	
	cin >> n;
	vector<int> isVisited(n+1, 0);
	for (int i = 0; i < n - 1; i++)
	{
		cin >> from >> to;
		arr[from].push_back(to);
		arr[to].push_back(from);
	}

	//BFS
	queue<int> q;
	q.push(1);
	isVisited[1] = true;

	while (!q.empty())
	{
		int curNode = q.front();
		q.pop();
		for (int nNode : arr[curNode])
		{
			if (isVisited[nNode] > 0)
				continue;

			isVisited[nNode] = curNode;
			q.push(nNode);
		}
	}

	for (int i = 2; i <= n; i++)
	{
		cout << isVisited[i] << '\n';
	}
}