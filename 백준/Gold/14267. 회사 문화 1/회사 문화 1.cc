#include <iostream>
#include <vector>
#define MAX_NUM 100001
using namespace std;

int boss[MAX_NUM]; //해당인덱스의 직속상사
int praise[MAX_NUM]; //해당인덱스가 한 칭찬 배율
int dp[MAX_NUM]; //칭찬 누적하는 dp테이블

int main()
{
	int n, m;

	cin >> n >> m;

	//상사 정해주기
	for (int i = 1; i <= n; i++)
		cin >> boss[i];

	int praiseIdx, praiseCnt;
	while (m--)
	{
		cin >> praiseIdx >> praiseCnt;
		praise[praiseIdx] += praiseCnt;
	}

	//dp[i]의 값은 자신이 한 칭찬 + 이전에 칭찬받은 상사의 칭찬만큼 더해준다
	for (int i = 2; i <= n; i++)
		dp[i] = praise[i] + dp[boss[i]];

	for (int i = 1; i <= n; i++)
		cout << dp[i] << ' ';

}