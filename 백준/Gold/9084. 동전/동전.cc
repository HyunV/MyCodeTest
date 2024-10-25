#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int t;

	cin >> t;

	while (t--)
	{
		int n, cost;
		cin >> n;
		vector<int> coins(n);

		for (int i = 0; i < n; i++)
			cin >> coins[i];

		cin >> cost;

		vector<int> dp(cost + 1);

		//0원을 만드는 경우의 수는 1
		dp[0] = 1;
		
		for (int i : coins)
			for (int j = i; j <= cost; j++)
				dp[j] += dp[j - i];

		cout << dp[cost] << '\n';
	}
}