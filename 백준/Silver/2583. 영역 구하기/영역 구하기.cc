#include <iostream>
#include <vector>
#include <math.h>
#include <queue>
#include <utility>
#include <algorithm>

#define IS_VISIT -1
using namespace std;

int arr[101][101];
int N, M;
const pair<int, int> dir[4] = { {-1, 0}, {1, 0}, {0, 1}, {0, -1} };

int bfs(int x, int y)
{
	int result = 0;

	queue<pair<int, int>> q;
	q.push({ x, y });
	arr[x][y] = IS_VISIT;

	while (!q.empty())
	{
		auto cur = q.front();
		result++;
		q.pop();

		for (auto nxtDir : dir)
		{
			int x = cur.first + nxtDir.first;
			int y = cur.second + nxtDir.second;

			if (x < 0 || x >= N || y < 0 || y >= M)
				continue;

			if (arr[x][y] != 0)
				continue;

			q.push({ x, y });
			arr[x][y] = IS_VISIT;
		}
	}

	return result;
}

int main()
{
	int k;

	cin >> N >> M >> k;

	int x1, y1, x2, y2;
	while (k--)
	{
		cin >> x1 >> y1 >> x2 >> y2;
		int i_start = min(y1, y2);
		int i_end = max(y1, y2);
		int j_start = min(x1, x2);
		int j_end = max(x1, x2);

		for (int i = i_start; i < i_end; i++)
			for (int j = j_start; j < j_end; j++)
				arr[i][j] +=1;
	}

	int answer = 0;
	vector<int> sizeVec;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			if (!arr[i][j])
			{
				sizeVec.push_back(bfs(i, j));
				answer++;
			}	
		}
	}

	sort(sizeVec.begin(), sizeVec.end());

	cout << answer << '\n';
	for (int i : sizeVec)
		cout << i << ' ';
}