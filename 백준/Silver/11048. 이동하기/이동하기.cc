#include <iostream>
#include <utility>
#include <algorithm>
using namespace std;


int dp[1001][1001];
int arr[1001][1001];

int main()
{
	/*
	시간복잡도 : 3가지 방향을 고려하므로 O(n * m)
	*
	좌상단 (1, 1) 부터 시작 우하단 (n, m)에 도착해야됨

	사용자는  하, 우, 우하로 이동 가능

	각 인덱스에는 사탕이 0 ~ 100개 있음

	사탕 최대값

	dp
	가장 위쪽의 가로 줄은 오직 왼쪽부터 받아올 수 있다.
	가장 왼쪽의 세로 줄은 오직 아래로부터 받아올 수 있다.
	*/

	int n, m;

	cin >> n >> m;

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> arr[i][j];

	dp[0][0] = arr[0][0];

	//제일 상단 가로줄
	for (int i = 1; i < m; i++)
		dp[0][i] = dp[0][i - 1] + arr[0][i];

	//제일 왼쪽 세로줄 초기값
	for (int j = 1; j < n; j++)
		dp[j][0] = dp[j - 1][0] + arr[j][0];

	//왼, 좌상, 위 비교
	for (int i = 1; i < n; i++)
		for (int j = 1; j < m; j++)
			dp[i][j] = max({ dp[i][j - 1], dp[i - 1][j - 1], dp[i - 1][j] }) + arr[i][j];

	cout << dp[n - 1][m - 1];
}