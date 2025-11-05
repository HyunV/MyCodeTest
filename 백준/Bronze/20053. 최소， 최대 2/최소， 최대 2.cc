#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;

	int n, m, minNum, maxNum;
	while (t--)
	{
		cin >> n;
		minNum = 1'000'001;
		maxNum = -1'000'001;

		while (n--)
		{
			cin >> m;
			minNum = minNum > m ? m : minNum;
			maxNum = maxNum < m ? m : maxNum;
		}
		cout << minNum << ' ' << maxNum << '\n';
	}
}