#include <iostream>
#include <vector>

using namespace std;

int sticker[2][100'001];
int dp[2][100'001];

int main()
{
	int tc, n;
	cin >> tc;

	while (tc--)
	{
		cin >> n;
		for (int i = 0; i < 2; i++)
			for (int j = 0; j < n; j++)
				cin >> sticker[i][j];

		//dp
		/*
		dp[0][0] (왼쪽 위)에서 시작할 때 2가지 경우 : 우측 아래 대각선 혹은 우측아래 대각선 +1
		dp[1][0] 에서 시작할 때 2가지경우 : 우측 위 대각선 혹은 우측 위 대각선 +1
		*/

		//0일때
		dp[0][0] = sticker[0][0];
		dp[1][0] = sticker[1][0];

		//1일때는 대각선으로 비교
		if (n > 1)
		{
			dp[0][1] = sticker[0][1] + sticker[1][0];
			dp[1][1] = sticker[1][1] + sticker[0][0];
		}

		for (int i = 2; i < n; i++)
		{
			//2일때는 지그재그 + 나이트처럼 대각이동한 방식을 비교
			dp[0][i] = max(dp[1][i - 1], dp[1][i - 2]) + sticker[0][i];
			dp[1][i] = max(dp[0][i - 1], dp[0][i - 2]) + sticker[1][i];
		}

		cout << (max(dp[0][n-1], dp[1][n - 1])) << '\n';
	}
}