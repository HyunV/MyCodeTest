#include <iostream>

using namespace std;

int main()
{
	int n, m, k;
	cin >> n >> m;

	int mid = n % 2 == 0 ? (n / 2) : ((n + 1) / 2);

	while (m--)
	{
		cin >> k;
		cout << ((k > mid) ? n : 1) <<' ';
	}
}