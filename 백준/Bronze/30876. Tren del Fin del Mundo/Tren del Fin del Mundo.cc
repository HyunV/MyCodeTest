#include <iostream>

using namespace std;

int main()
{
	int x = 2147483647;
	int y = 2147483647;

	int n, a, b;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> a >> b;
		if (b < y)
		{
			x = a;
			y = b;
		}		
	}
	cout << x << ' ' << y;
}