#include <iostream>

using namespace std;

int rec(int m)
{
	if (m <= 0)
		return 1;

	return m * rec(m - 1);
}

int main()
{
	int n, m;

	cin >> n;
	while (n--)
	{
		cin >> m;
		cout << rec(m) % 10 << endl;
	}
}