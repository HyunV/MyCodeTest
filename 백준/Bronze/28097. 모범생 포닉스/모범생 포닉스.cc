#include <iostream>

using namespace std;

int main()
{
	int n, m;
	cin >> n;

	int sum = 0;
	while (n--)
	{
		cin >> m;
		sum += m+8;
	}
	sum -= 8;
	cout << sum / 24 << ' ' << sum % 24;
}