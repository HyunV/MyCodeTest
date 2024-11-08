#include <iostream>

using namespace std;

int main()
{
	int n = -1;
	while (n)
	{
		cin >> n;
		for (int i = 1; i <= n; i++)
		{
			for (int j = 0; j < i; j++)
				cout << '*';

			cout << '\n';
		}
	}
}