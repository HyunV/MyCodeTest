#include <iostream>

using namespace std;

int main()
{
	char x = 'X';
	int n, r, c;
	cin >> n;
	while (n--)
	{
		cin >> r >> c;

		for (int i = 0; i < c; i++)
		{
			for (int j = 0; j < r; j++)
			{
				cout << x;
			}
			cout << '\n';
		}
		cout << '\n';
	}
}