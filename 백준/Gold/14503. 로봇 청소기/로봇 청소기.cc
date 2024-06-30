#include <iostream>
#include <utility>
#define CLEAN 2;
using namespace std;
/*
청소하는 영역 구하기


1. 현재 칸을 청소한다.
2. 분기를 나눈다.
	2-1 주변 4칸을 둘러본다.
		2-1-1 주변4칸을 다 쓸려있으면 현재 바라보는 방향의 반대로 1 뒤로 후진한다.
				후진이 가능하다면 다시 2-1로 돌아간다.
				else
					작동을 멈춘다.

		2-1-2 주변 4칸중 쓸 곳이 있으면 [반시계]회전한다.
			  바로 앞이 쓸 곳이면 앞으로 1 전진한다.

		2-1로 돌아간다.
*/

int arr[51][51];

int N, M;

class Robot
{
	//북, 동, 남, 서
	const pair<int, int> dir[4] = {{-1,0},{0, 1}, {1, 0}, {0, -1}};

public:
	Robot() {};
	Robot(int x, int y, int n) {
		pos.first = x;
		pos.second = y;
		axis = n;
	};
	~Robot() {};
public:
	int axis;
	pair<int, int> pos;
public:
	bool update()
	{
		//현재 칸이 청소되지 않은 경우, 현재 칸을 청소한다.
		if (arr[pos.first][pos.second] == 0)
			arr[pos.first][pos.second] = CLEAN;

		if (checkClean())
		{
			for (auto i : dir)
				if (clean())
					break;
		}
		else if (!back())
				return false;

		return true;
	}

	bool checkClean()
	{
		for (auto i : dir)
		{
			int x = i.first + pos.first;
			int y = i.second + pos.second;

			if (isWall({ x, y }))
				continue;

			if(arr[x][y] == 0)
				return true;
		}
		return false;
	}

	bool clean()
	{
		//반시계 90도 회전
		if (--axis < 0)
			axis = 3;

		//앞방향이 쓸 수 있는곳이면
		int x = pos.first + dir[axis].first;
		int y = pos.second + dir[axis].second;

		if (isWall({ x, y }))
			return false;
		else if (arr[x][y] == 0)
		{
			pos = { x, y };
			return true;
		}
		
		return true;
	}

	bool back()
	{
		int x = pos.first + (dir[axis].first * -1);
		int y = pos.second + (dir[axis].second * -1);

		if (isWall({ x, y }))
			return false;
		
		pos = { x, y };
		return true;
	}

	bool isWall(pair<int, int> pos)
	{
		if (pos.first >= N || pos.first < 0 || pos.second >= M || pos.second < 0)
			return true;
		else if (arr[pos.first][pos.second] == 1)
			return true;
		
		return false;
	}

};

int main()
{
	cin >> N >> M;

	int x, y, z;
	cin >> x >> y >> z;

	Robot* r = new Robot(x, y, z);

	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)
			cin >> arr[i][j];


	int cnt = 0;
	while (r->update())
	{
		//cout << ++cnt << '\n';
		//for (int i = 0; i < N; i++)
		//{
		//	for (int j = 0; j < M; j++)
		//	{
		//		cout << arr[i][j];
		//	}
		//	cout << '\n';
		//}
		//cout << '\n';
	}

	int sum = 0;
	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)
			if (arr[i][j] == 2)
				sum++;
	cout << sum;

	delete(r);
}