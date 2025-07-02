#include <iostream>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;

	for (int i = 1; i <= m; i++)
	{
		if (n % 2 == 0) //짝
		{
			n = (n / 2) ^ 6;
		}
		else
		{
			n = (2 * n) ^ 6;
		}
	}
	cout << n;
}