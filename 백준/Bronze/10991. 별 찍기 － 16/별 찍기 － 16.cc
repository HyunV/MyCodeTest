#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		int k = n - i;
		for (int j = 0; j < k; j++)	
			cout << ' ';		

		int m = (i * 2) - 1;


		for (int j = 1; j <= m; j++)
		{
			cout << (j % 2 ? '*' : ' ');
		}
		cout << '\n';
	}
}