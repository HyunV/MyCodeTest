#include <iostream>

using namespace std;

int main()
{
	long long n;
	cin >> n;

	int cnt = 0;

	while (1)
	{
		if (n == 1)
			break;

		if (n % 2 == 0)
		{
			n /= 2;
		}
		else {
			n += 1;
		}
		cnt++;
	}

	cout << cnt;
}