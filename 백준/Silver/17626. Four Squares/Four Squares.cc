#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

vector<int> vec;

int main()
{
	int n;
	cin >> n;

	vector<int> dp(n + 1, 2147483647);
	dp[0] = 0;

	for (int i = 1; i * i <= n; i++)
	{
		int pow = i * i;
		for (int j = pow; j <= n; j++)
			dp[j] = min(dp[j], dp[j - pow] + 1);
	}

	cout << dp[n];
}