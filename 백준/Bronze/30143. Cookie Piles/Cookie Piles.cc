#include <iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int answer = 0;
		int n, a, d;

		cin >> n >> a >> d;

		for (int i = 0; i < n; i++)
			answer += a + (d * i);

		cout << answer << '\n';
	}
}