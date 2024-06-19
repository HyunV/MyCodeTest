#include <iostream>
#include <string>

using namespace std;

char arr[3][3];
const int SIZE = 3;

bool lineCheck(char c)
{
	string answer = "XXX";
	if (c == 'O')
		answer = "OOO";

	//가로 체크, 	//세로 체크
	for (int i = 0; i < SIZE; i++)
	{
		string garo = "";
		string sero = "";
		for (int j = 0; j < SIZE; j++)
		{
			garo += arr[i][j];
			sero += arr[j][i];
		}

		if (garo == answer || sero == answer)
			return true;
	}

	//대각선 체크 '\', '/'
	if (((arr[0][0] == c && (arr[0][0] == arr[1][1] && arr[0][0] == arr[2][2]))) ||
		(arr[0][2] == c && (arr[0][2] == arr[1][1] && arr[0][2] == arr[2][0])))
		return true;

	return false;
}

bool isValid(int symbolCount[])
{
	/*
	조건 틱택토가 게임에서 발생할 수 있는 최종상태인지 판단.
	3개가 이어지면 게임 끝,
	꽉차도 게임 끝

	//첫번째는 x로 시작

	*/
	//1. X와 O의 차이가 1이상 나면 불가능
	int XminO = symbolCount[0] - symbolCount[1];

	bool checkX = lineCheck('X');
	bool checkO = lineCheck('O');

	//1. X와 O가 동시에 이길 수 없음
	if (checkX && checkO)
		return false;
	else if (symbolCount[1] > symbolCount[0]) //2. 후공인 O가 X보다 많을 수가 없음
		return false;
	else if (XminO > 1) // 3. 선공인 X와 O의 개수 차이가 1이상 나면 안됨
		return false;
	else if (checkX && XminO != 1) //4. X가 이겼는데 X-O의 개수차이가 1이 아님
		return false;
	else if (checkO && XminO != 0) // 5. O가 이겼는데 X-O의 개수 차이가 0이 아님 //O가 후공이라 같아야됨
		return false;
	else if (!checkX && !checkO && symbolCount[2]) //6. 승부가 안났는데 게임이 멈춤
		return false;

		return true;
}

int main()
{
	string s;

	while (1)
	{
		cin >> s;

		if (s == "end")
			break;

		int symbolCount[3] = {0, 0, 0};
		for (char c : s)
		{
			switch (c)
			{
			case 'X':
				symbolCount[0]++;
				break;
			case 'O':
				symbolCount[1]++;
				break;
			case '.':
				symbolCount[2]++;
				break;
			}
		}

		int cnt = 0;
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				arr[i][j] = s[cnt];
				cnt++;
			}
		}

		cout << (isValid(symbolCount) ? "valid" : "invalid") << '\n';

	}
}