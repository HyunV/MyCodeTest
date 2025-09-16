#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;

	vector<int> vec(n);
	int cnt = 0;

	for (int i = 0; i < n; ++i)
	{
		int s, t;
		cin >> s >> t;
		if (s + t <= m)
			vec[cnt++] = s;
	}

	int answer = vec[0];
	if (cnt != 0)
	{
		for (int i = 0; i < cnt; ++i)
			if (vec[i] > answer)
				answer = vec[i];

		cout << answer;
	}
	else
		cout << -1;
}