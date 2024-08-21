#include <iostream>

using namespace std;

int main()
{
	int n, m;
	cin >> n;

	int sum;
	while(n--)
	{
		sum = 0;
		cin >> m;
		for(int i = 1; i<=m; i+=2)
			sum+=i;

		cout << sum << '\n';
	}
}