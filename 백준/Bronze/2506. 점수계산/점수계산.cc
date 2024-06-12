#include <iostream>

using namespace std;

int main()
{
	int n, m;
	int cnt = 0, sum = 0;
	cin >> n;
	while (n--)
	{
		cin >> m;
		if (m == 0)
			cnt = 0;
		else
			cnt++;

		if (cnt > 1)
			sum += cnt-1;

		sum += m;
	}
	cout << sum;
}