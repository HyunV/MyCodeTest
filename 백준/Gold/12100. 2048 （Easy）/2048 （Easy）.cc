#include <iostream>

#define MAX_MOVE 5
#define MAX_SIZE 20

using namespace std;

const int dir[4][2] = {{-1, 0}, {1, 0}, {0, -1},{0, 1}};
int input[MAX_MOVE];
int g_arr[MAX_SIZE][MAX_SIZE];
int arrSize = 0;

int maxBlock = 0; //정답

bool movePiece(int arr[][MAX_SIZE], int moveIdx, int cnt)
{
	int row = 0, col = 0;
	bool isMove = false;
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
					isMove = true;
					continue;
				}

				int idx = nxtI * arrSize + nxtJ;

				//이동했는데 이번 이동에서 병합된적 없고 같은 값의 블록이라면 합치기
				if (arr[nxtI][nxtJ] == arr[row][col] && isMerged[idx] == false)
				{
					arr[nxtI][nxtJ] *= 2;
					arr[row][col] = 0;

					isMerged[idx] = true;
					isMove = true;	
				}
				//여기까지 왔다면 병합이 끝나거나 서로 같지 않은 블록이므로 분기 해제
				curMaxBlock = max(curMaxBlock, arr[nxtI][nxtJ]);
				break;
			}
		}
	}

	//모든 블록이 이동함, 가지치기 조건

	//1. 이전 이동과 똑같은 모양이라면 리턴
	if (isMove == false)
		return true;

	//끝까지 돌았을때 최대 기댓값
	int expectValue = curMaxBlock * 1 << (MAX_MOVE - cnt + 1);

	//2. 기댓값이 최댓값보다 작다면 리턴
	if (expectValue < maxBlock)
		return true;

	if (curMaxBlock > maxBlock)
		maxBlock = curMaxBlock;

	return false;
}

void dupleperm(int idx)
{
	if (idx == MAX_MOVE)
	{
		//배열 복사
		int arr[MAX_SIZE][MAX_SIZE];
		for (int i = 0; i < arrSize; i++)
			for (int j = 0; j < arrSize; j++)
				arr[i][j] = g_arr[i][j];

		for (int i = 0; i < MAX_MOVE; i++)
			if (movePiece(arr, input[i], i + 1))
				break;
			
		return;
	}

	for (int i = 0; i < 4; i++)
	{
		input[idx] = i;
		dupleperm(idx + 1);
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

	dupleperm(0);

	cout << maxBlock;
}