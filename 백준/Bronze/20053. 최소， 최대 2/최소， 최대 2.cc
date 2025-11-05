#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
	cin.tie(0);
    
	int t;
	cin >> t;

	int n, m;
	while (t--)
	{
		cin >> n;
		int minNum = 1'000'001;
		int maxNum = -1'000'001;

		while (n--)
		{
			cin >> m;
			minNum = min(minNum, m);
			maxNum = max(maxNum, m);
		}
		cout << minNum << ' ' << maxNum << '\n';
	}
}