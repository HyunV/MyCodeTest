#include <iostream>
#include <cstring>
#include <math.h>

#define MAX_MOVE 10
#define MAX_SIZE 20

using namespace std;

int arrSize;
int maxBlock;

void copyArr(int src[][MAX_SIZE], int dest[][MAX_SIZE])
{
	memcpy(dest, src, sizeof(int) * MAX_SIZE * MAX_SIZE);
}

bool isSameBoard(int src[][MAX_SIZE], int dest[][MAX_SIZE]) {
	return memcmp(src, dest, sizeof(int) * MAX_SIZE * MAX_SIZE) == 0;
}

//반시계방향으로 90도 회전
void rotate(int arr[][MAX_SIZE])
{
	int tempArr[MAX_SIZE][MAX_SIZE];
	copyArr(arr, tempArr);

	for (int i = 0; i < arrSize; i++)
		for (int j = 0; j < arrSize; j++)
			arr[arrSize - j - 1][i] = tempArr[i][j];
}

//반시계 회전으로 상,우,하,좌 순으로 배열이 돌아감
//즉 회전한 배열 기준 숫자를 왼쪽으로 당김
void pullPiece(int arr[][MAX_SIZE], int& curBlockSize)
{
	for (int i = 0; i < arrSize; i++)
	{
		int widthArr[MAX_SIZE] = {}; //조각이 이동한 상황을 저장하는 배열
		int idx = 0;
		for (int j = 0; j < arrSize; j++)
		{
			if (arr[i][j] == 0)
				continue;

			//1. 너비 배열에 값이 없다면 최근에 들어온 값을 넣어준다.
			//2. 너비 배열의 idx내의 value가 새로 옮기는 arr[i][j]의 숫자와 일치하면 *2를 해주고 인덱스를 증가
			//3. 너비 배열의 idx내의 value가 새로 옮기는 arr[i][j]의 숫자가 다르다면 인덱스를 올리고 삽입시킨다.
			if (widthArr[idx] == 0)
				widthArr[idx] = arr[i][j];
			else if (widthArr[idx] == arr[i][j])
				widthArr[idx++] *= 2;
			else if (widthArr[idx] != arr[i][j])
				widthArr[++idx] = arr[i][j];
		}

		//이동한 배열 덮어씌우기
		for (int j = 0; j < arrSize; j++)
		{
			arr[i][j] = widthArr[j];
			curBlockSize = max(curBlockSize, arr[i][j]);
		}
	}
}

void dfs(int arr[][MAX_SIZE], int depth, int curMaxBlock)
{
	if (depth == MAX_MOVE)
		return;

	//배열 복사
	for (int i = 0; i < 4; i++)
	{
		rotate(arr); //왼쪽으로 90도 회전시키기

		int tempArr[MAX_SIZE][MAX_SIZE];
		copyArr(arr, tempArr);

		int curBlockSize = 0;
		pullPiece(tempArr, curBlockSize);//왼쪽으로 당기기

		maxBlock = max(curBlockSize, maxBlock);

		if (isSameBoard(arr, tempArr))
			continue;

		//예상 최대값이 작으면 리턴
		if (curBlockSize * pow(2, MAX_MOVE - 1 - depth) <= maxBlock)
			continue;

		dfs(tempArr, depth + 1, curBlockSize);
	}
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int arr[MAX_SIZE][MAX_SIZE];

	cin >> arrSize;

	for (int i = 0; i < arrSize; i++)
	{
		for (int j = 0; j < arrSize; j++)
		{
			cin >> arr[i][j];
			maxBlock = max(maxBlock, arr[i][j]);
		}
	}

	dfs(arr, 0, maxBlock);

	cout << maxBlock;
}