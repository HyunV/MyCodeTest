#include <iostream>
#include <queue>
#include <string>
#include <utility>
using namespace std;

#define IS_VISITED -1

int arr[26][26];
int answer;
int n;
const pair<int, int> dir[4] = { {1, 0}, {-1, 0}, {0, -1}, {0, 1} };
priority_queue<int, vector<int>, greater<int>> pq;

int bfs(int i, int j) {

	queue<pair<int, int>> q;

	int num = 1;
	q.push({ i, j });
	arr[i][j] = IS_VISITED;

	while (!q.empty()) 
	{
		auto cur = q.front();
		q.pop();

		for (auto curDir : dir)
		{
			int x = cur.first + curDir.first;
			int y = cur.second + curDir.second;

			if (x < 0 || x >= n)
				continue;

			if (arr[x][y] == 0 || arr[x][y] == IS_VISITED)
				continue;

			q.push({x, y});
			arr[x][y] = IS_VISITED;
			num++;
		}

	}

	return num;
}

int main()
{
	cin >> n;
	string s;
	for (int i = 0; i < n; i++) 
	{
		cin >> s;
		int size = s.size();
		for (int j = 0; j < size; j++)
			arr[i][j] = s[j] - '0';
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (arr[i][j] == 1)
			{
				pq.push(bfs(i, j));
				answer++;
			}
		}
	}

	cout << answer << '\n';
	
	while (!pq.empty()) {
		cout << pq.top() << '\n';
		pq.pop();
	}
}