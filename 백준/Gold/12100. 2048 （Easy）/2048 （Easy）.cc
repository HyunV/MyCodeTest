#include <iostream>
#include <vector>
#include <utility>
#include <math.h>

#define MAX_MOVE 5

using namespace std;

enum class EMOVE {
	UP,
	DOWN,
	LEFT,
	RIGHT
};

//상, 하, 좌, 우
const pair<int, int> dir[4] = { {-1, 0}, {1, 0}, {0, -1},{0, 1} };

//중복순열용
vector<int> input;

vector<vector<int>> arr; //보드 벡터
int arrSize = 0;

int maxBlock = 0; //정답

//##############테스트#######################
const string moveStr[4] = { "상","하","좌","우" };
void print(const vector<vector<int>>& arr)
{
	for (auto& i : arr)
	{
		for (auto& j : i)
			cout << j << "	";

		cout << '\n';
	}
		
	cout << '\n';	
}
//##########################

void movePiece(vector<vector<int>>& arr, int moveIdx)
{
	int row = 0, col = 0;
	
	vector<vector<bool>> isMerged(arrSize, vector<bool>(arrSize));

	for (int i = 0; i < arrSize; i++)
	{
		for (int j = 0; j < arrSize; j++)
		{			
			switch ((EMOVE)moveIdx)
			{
			//[상] -> 좌상단 시작 -> 좌하단으로 이동
			case EMOVE::UP: //[1,2,3,4] [5,6,7,8] [9,10,11,12] [13,14,15,16]
				row = i;
				col = j;
				break;
			//[하] -> 좌하단 시작 -> 우상단으로 이동
			case EMOVE::DOWN: //[13,14,15,16] [9,10,11,12] [5,6,7,8] [1,2,3,4]
				row = arrSize - 1 - i;
				col = j;
				break;
			//[좌] -> 좌상단 시작 -> 우하단으로 이동
			case EMOVE::LEFT: //[1,5,9,13] [2,6,10,14] [3,7,11,15] [4,8,12,16]
				row = j;
				col = i;
				break;
			
			//[우] -> 우상단 시작 -> 좌하단으로 이동
			case EMOVE::RIGHT: //[4,8,12,16] [3,7,11,15] [2,6,10,14] [1,5,9,13]
				row = j;
				col = arrSize -1 - i;				
				break;			
			}

			//퍼즐 당기기
			while (1)
			{
				int nxtI = row + dir[moveIdx].first;
				int nxtJ = col + dir[moveIdx].second;

				//OOB 방지
				if (nxtI < 0 || nxtI >= arrSize || nxtJ < 0 || nxtJ >= arrSize)
					break;

				//옆이 빈 블록일 시 이동
				if (arr[nxtI][nxtJ] == 0)
				{
					arr[nxtI][nxtJ] = arr[row][col];
					arr[row][col] = 0;
					row += dir[moveIdx].first;
					col += dir[moveIdx].second;
					continue;
				}

				//이동했는데 이번 이동에서 병합된적 없고 같은 값의 블록이라면 합치기
				if (arr[nxtI][nxtJ] == arr[row][col] && isMerged[nxtI][nxtJ] == false)
				{
					arr[nxtI][nxtJ] *= 2;
					arr[row][col] = 0;
					isMerged[nxtI][nxtJ] = true;

					//최대값계산
					maxBlock = max(maxBlock, arr[nxtI][nxtJ]);
				}

				//여기까지 왔다면 병합이 끝나거나 서로 같지 않은 블록이므로 분기 해제
				break;
			}
		}
	}
	//cout << "\n\n[" << moveStr[moveIdx] << "] 이동\n";
	//print(arr);
}

void dupleperm(int idx)
{
	//분기문
	if (idx == MAX_MOVE)
	{
		vector<vector<int>> copyArr = arr; //깊은 복사
		for (auto& i : input)
			movePiece(copyArr, i);
		
		return;
	}

	for (int i = 0; i < 4; i++)
	{
		input.push_back(i);
		dupleperm(idx + 1);
		input.pop_back();
	}
}

int main()
{	
	cin >> arrSize;
	arr.resize(arrSize, vector<int>(arrSize));

	for (int i = 0; i < arrSize; i++)
	{
		for (int j = 0; j < arrSize; j++)
		{
			cin >> arr[i][j];
			maxBlock = max(maxBlock, arr[i][j]);
		}			
	}
		
	dupleperm(0);

	cout << maxBlock;
}