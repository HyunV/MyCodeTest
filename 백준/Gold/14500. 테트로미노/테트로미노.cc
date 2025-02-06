#include <iostream>
#include <utility>
#include <cstring>
#include <math.h>

using namespace std;
/*
찾아낸 규칙
회전 시 x, y의 자리가 바뀌고 y의 부호는 반전됨
대칭은 y쪽의 부호가 바뀜

그럼 하나의 배열공간에 블록을 맞추는데 약 27번의 연산
배열은 최대 500
500* 500 * 27 -> 6,750,000만번의 연산

*/
int arr[501][501];
int N, M;
int answer;

const pair<int, int> brick[5][4]{
	//작대기, 회전 한번만 필요
	{{0,0},{0,1},{0,2},{0,3}},
	//사각형
	{{0,0},{0,1},{1,0},{1,1}},
	//L 대칭회전 * 4, 회전 *4 필요
	{{0,0},{1,0},{2,0},{2,1}},
	//번개 대칭회전 * 4, 회전 *4 필요
	{{0,0},{1,0},{1,1},{2,1}},
	//T 대칭회전 * 4 회전 *4 필요
	{{0,0},{0,1},{0,2},{1,1}},
};

void rotate(pair<int, int>p[])
{
	for (int i = 0; i < 4; i++)
	{
		swap(p[i].first, p[i].second);
		p[i].second *= -1;
	}
}
void reverse(pair<int, int>p[])
{
	for (int i = 0; i < 4; i++)
		p[i].second *= -1;
}

int checkSum(pair<int, int>p[], int posX, int posY)
{
	int sum = 0;
	int nxtX, nxtY;
	for (int i = 0; i < 4; i++)
	{
		nxtX = posX + p[i].first;
		nxtY = posY + p[i].second;

		if (nxtX < 0 || nxtX >= N || nxtY < 0 || nxtY >= M)
			return -1;

		sum += arr[nxtX][nxtY];
	}
	return sum;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> N >> M;

	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)
			cin >> arr[i][j];

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			int curMax = 0;
			for (int brickIdx = 0; brickIdx < 5; brickIdx++)
			{
				pair<int, int> copiedArr[4];
				memcpy(copiedArr, brick[brickIdx], sizeof(pair<int, int>) * 4);

				int rotCnt = 4;

				//작대기는 한 번만 회전
				if (brickIdx == 0)
					rotCnt = 2;
				//사각형은 회전할 필요 없음 근데 answer을 rotate 안에서 구하니 한 번만 회전 해줌
				else if (brickIdx == 1) 
					rotCnt = 1;

				for (int rot = 0; rot < rotCnt; rot++)
				{
					rotate(copiedArr);
					answer = max(answer, checkSum(copiedArr, i, j));
				}

				//L자 블록 이후에는 대칭 회전도 적용
				if (brickIdx > 1)
				{
					reverse(copiedArr);
					for (int rot = 0; rot < 4; rot++)
					{
						rotate(copiedArr);
						answer = max(answer, checkSum(copiedArr, i, j));
					}
				}
			}
		}
	}

	cout << answer;
}