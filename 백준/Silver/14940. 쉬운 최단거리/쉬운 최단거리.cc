#include <iostream>
#include <queue>
#include <utility>

using namespace std;

pair<int, int> dir[4] = { {-1, 0}, {1, 0}, {0, 1}, {0, -1} };
bool isVisited[1001][1001];
int board[1001][1001];
pair<int, int> start;
int n, m;
/*
//2는 하나
*/

void bfs()
{
	queue<pair<int, int>> q;

	q.push({start.first, start.second});

	isVisited[start.first][start.second] = true;
	board[start.first][start.second] = 0;

	while (!q.empty())
	{
		pair<int, int> curPos = q.front();
		q.pop();

		for (auto p : dir)
		{
			int x = curPos.first + p.first;
			int y = curPos.second + p.second;

			//벽넘었는지 체크
			if (x < 0 || x >= n || y < 0 || y >= m)
				continue;

			if (board[x][y] == 0 || isVisited[x][y])
				continue;

			board[x][y] = board[curPos.first][curPos.second] + 1;
			q.push({ x, y });
			isVisited[x][y] = true;

		}
	}
}

int main()
{
	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> board[i][j];

			if (board[i][j] == 2)
				start = { i, j };

			if (board[i][j] == 1)
				board[i][j] = -1;
		}
	}
	bfs();

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			cout << board[i][j] << ' ';
		
		cout << '\n';
	}
}