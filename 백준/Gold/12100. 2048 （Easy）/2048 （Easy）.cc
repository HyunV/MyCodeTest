#include <iostream>
#include <cstring>

#define MAX_MOVE 5
#define MAX_SIZE 20

using namespace std;

const int dir[4][2] = { {-1, 0}, {1, 0}, {0, -1},{0, 1} };
int input[MAX_MOVE];
int g_arr[MAX_SIZE][MAX_SIZE];
int arrSize = 0;

int maxBlock = 0; //정답

void copyBoard(int dest[][MAX_SIZE], int src[][MAX_SIZE]) {
	memcpy(dest, src, sizeof(int) * MAX_SIZE * MAX_SIZE);
}

bool isSameBoard(int dest[][MAX_SIZE], int src[][MAX_SIZE]) {
	return memcmp(dest, src, sizeof(int) * MAX_SIZE * MAX_SIZE) == 0;
}

int movePiece(int arr[][MAX_SIZE], int moveIdx)
{
	int row = 0, col = 0;
	bool isMerged[MAX_SIZE * MAX_SIZE] = { false };
	int curMaxBlock = 0;

	for (int i = 0; i < arrSize; i++)
	{
		for (int j = 0; j < arrSize; j++)
		{
			switch (moveIdx)
			{
			case 0: row = i; col = j; break;
			case 1: row = arrSize - 1 - i;  col = j; break;
			case 2: row = j; col = i; break;
			case 3: row = j; col = arrSize - 1 - i; break;
			}

			//퍼즐 당기기
			while (true)
			{
				int nxtI = row + dir[moveIdx][0];
				int nxtJ = col + dir[moveIdx][1];

				//OOB 방지
				if (nxtI < 0 || nxtI >= arrSize || nxtJ < 0 || nxtJ >= arrSize)
					break;

				//옆이 빈 블록일 시 이동
				if (arr[nxtI][nxtJ] == 0)
				{
					arr[nxtI][nxtJ] = arr[row][col];
					arr[row][col] = 0;
					row += dir[moveIdx][0];
					col += dir[moveIdx][1];
					continue;
				}

				int idx = nxtI * arrSize + nxtJ;

				//이동했는데 이번 이동에서 병합된적 없고 같은 값의 블록이라면 합치기
				if (arr[nxtI][nxtJ] == arr[row][col] && isMerged[idx] == false)
				{
					arr[nxtI][nxtJ] *= 2;
					arr[row][col] = 0;

					isMerged[idx] = true;
				}
				//여기까지 왔다면 병합이 끝나거나 서로 같지 않은 블록이므로 분기 해제
				
				if(curMaxBlock < arr[nxtI][nxtJ])
					curMaxBlock = arr[nxtI][nxtJ];
				
				break;
			}
		}
	}

	return curMaxBlock;
}

void dfs(int depth, int arr[][MAX_SIZE], int curMaxBlock)
{
	if (depth == MAX_MOVE)
	{
		return;
	}

	for (int i = 0; i < 4; i++)
	{
		int copyArr[MAX_SIZE][MAX_SIZE];
		int nextMaxBlock;

		copyBoard(copyArr, arr);
		nextMaxBlock = movePiece(copyArr, i);
		if (nextMaxBlock > maxBlock)
			maxBlock = nextMaxBlock;

		if (isSameBoard(copyArr, arr))
			continue;

		if (maxBlock < nextMaxBlock * 1 << (MAX_MOVE - depth + 1))
			dfs(depth + 1, copyArr, nextMaxBlock);
	}
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> arrSize;

	for (int i = 0; i < arrSize; i++)
	{
		for (int j = 0; j < arrSize; j++)
		{
			cin >> g_arr[i][j];

			if (maxBlock < g_arr[i][j])
				maxBlock = g_arr[i][j];
		}
	}

	dfs(0, g_arr, maxBlock);

	cout << maxBlock;
}