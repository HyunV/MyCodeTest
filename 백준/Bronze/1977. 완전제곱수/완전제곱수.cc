#include <iostream>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	int min = -1, max = 0, cnt = 0;
	while (1)
	{
		if (cnt * cnt > m)
			break;

		if (cnt * cnt >= n && cnt * cnt <= m)
		{
			if (min == -1)
				min = cnt * cnt;

			max += cnt * cnt;
		}
		cnt++;
	}

	if (min == -1 && max == 0)
		cout << -1;
	else
		cout << max << '\n' << min;
}