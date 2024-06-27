#include <iostream>
#include <vector>
#include <queue>

using namespace std;

/*
- 문제
	뿌요는 R G B P Y 가 있다

	ㅁ 연쇄
	※ 같은 색 뿌요가 4개 이상 상하좌우면 연결된 같은 색 뿌요들이 한번에 없어진다.
	※ 터질 뿌요가 여러 곳이라면 동시에 터져야된다. 동시에 터진다면 1+n연쇄이다.

- 풀이
	BFS로 진행
	
*/

const int G_ROW = 12;
const int G_COLUMN = 6;

char map[G_ROW][G_COLUMN];
queue<pair<int, int>> pop_queue;

const pair<int, int> dir[4] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

void debug()
{
	for (int i = 0; i < G_ROW; i++)
	{
		for (int j = 0; j < G_COLUMN; j++)
		{
			cout << map[i][j];
		}
		cout << '\n';
	}
	cout << '\n' << '\n';
}

void BFS(int x, int y, vector<vector<bool>>& reserve)
{
	int pop_count = 1;

	bool isVisited[G_ROW][G_COLUMN];
	for (int i = 0; i < G_ROW; i++)
		for (int j = 0; j < G_COLUMN; j++)
			isVisited[i][j] = false;

	vector<pair<int, int>> pop_list;
	isVisited[x][y] = true;
	char puyo_color = map[x][y];
	queue<pair<int, int>> q;
	q.push({ x, y });
	pop_list.push_back({ x, y });

	while (!q.empty())
	{
		auto curPos = q.front();
		q.pop();

		for (auto nxtDir : dir)
		{
			int nxtX = curPos.first + nxtDir.first;
			int nxtY = curPos.second + nxtDir.second;

			if (nxtX < 0 || nxtX >= G_ROW || nxtY < 0 || nxtY >= G_COLUMN)
				continue;

			if (isVisited[nxtX][nxtY] || map[nxtX][nxtY] != puyo_color)
				continue;

			isVisited[nxtX][nxtY] = true;
			q.push({ nxtX, nxtY });			
			pop_list.push_back({ nxtX, nxtY });

			pop_count++;
		}
	}

	if (pop_count >= 4)
	{
		for (auto i : pop_list)
		{
			reserve[i.first][i.second] = true;
			pop_queue.push(i);
		}
	}
}

int main()
{
	int answer = 0;

	//입력
	for (int i = 0; i < G_ROW; i++)
		for (int j = 0; j < G_COLUMN; j++)
			cin >> map[i][j];

	//연쇄판정

	while (true)
	{
		//터트릴 뿌요를 방문처리
		vector<vector<bool>> reserve;

		//벡터 초기화
		for (int i = 0; i < G_ROW; i++)
		{
			vector<bool> vec(G_COLUMN);
			reserve.push_back(vec);
		}
		
		//터트릴 뿌요를 수집한다
		for (int i = 0; i < G_ROW; i++)
			for (int j = 0; j < G_COLUMN; j++)
				if (!reserve[i][j] && map[i][j] != '.')
					BFS(i, j, reserve);

		//만약 큐가 비어있다면 빠져나온다.
		if (pop_queue.empty())
			break;

		//연쇄 1 추가
		answer++;

		//수집한 뿌요를 모두 터트린다.
		while (!pop_queue.empty())
		{
			auto curPuyo = pop_queue.front();
			pop_queue.pop();
			map[curPuyo.first][curPuyo.second] = '.';
		}

		//남은 뿌요를 모두 맨 아래로 내린다.
		for (int i = G_ROW-2; i >= 0; i--)
		{
			for (int j = 0; j < G_COLUMN; j++)
			{
				if (map[i][j] != '.')
				{
					int nxtPos = i+1;
					while (true)
					{			
						if (nxtPos >= G_ROW || map[nxtPos][j] != '.')
						{
							char color = map[i][j];
							map[i][j] = '.';
							map[nxtPos-1][j] = color;							

							break;
						}
						nxtPos++;						
					}
				}
			}
		}
		
		//cout << "연쇄\n";
		//debug();

	}


	cout << answer;
}