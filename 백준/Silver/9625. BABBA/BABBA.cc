#include <iostream>
using namespace std;

int dp[46][2]; // A / B
int main() {
	int n;
	cin >> n;

	// 1번 누를 시 A,B (0, 1)
	dp[1][0] = 0;
	dp[1][1] = 1;
	// dp[i] = { dp[1], dp[0] + dp[1]};

	for (int i = 2; i <= n; i++) {
		dp[i][0] = dp[i - 1][1];
		dp[i][1] = dp[i - 1][0] + dp[i - 1][1];
	}
	cout << dp[n][0] << ' ' << dp[n][1];
}