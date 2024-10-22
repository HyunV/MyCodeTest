#include <iostream>
#include <vector>
#include <queue>
#include <utility>
using namespace std;

int BFS(int node, int nodeCount, vector<vector<int>>& vec)
{	
	vector<int> isVisited(nodeCount + 1, 0);	
	queue<int> q;
	q.push(node);	
	
	while(!q.empty())
	{
		int curNode = q.front();
		q.pop();
		
		for (int n : vec[curNode])
		{
			if (isVisited[n] != 0)
				continue;

			isVisited[n] = isVisited[curNode]+1;
			q.push(n);
		}
	}
	
	int sum = 0;
	for (int i = 1; i <= nodeCount; i++)
		sum += isVisited[i];

	return sum;
}

int main()
{
	/*
	사람의 수 N(100), 친구관계 수 M(5000)
	친구 관계는 좌우로 성립,
	중복가능
	모든 친구는 최소 1명의 친구
	중복되는 숫자 없음

	간선의 수가 제일 많은숫자
	*/	
	
	int n, m;

	cin >> n >> m;
	vector<vector<int>> vec(n+1);
	for (int i = 1; i <= n; i++)
	{
		vector<int> vec2;
		vec[i] = vec2;
	}

	int a, b;
	while (m--)
	{
		cin >> a >> b;
		vec[a].push_back(b);
		vec[b].push_back(a);
	}

	int minBaconNum = 2147483647;
	int answerNode = 0;

	for (int i = 1; i <= n; i++)
	{			
		int baconNum = BFS(i, n, vec);
		if (minBaconNum > baconNum)
		{
			minBaconNum = baconNum;
			answerNode = i;
		}
	}

	cout << answerNode;
}