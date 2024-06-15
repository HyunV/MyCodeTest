#include <iostream>
using namespace std;

int main()
{
	int n, m;
	cin >> n;
	while(n--)
	{
		int k;
		int sum = 0;
		cin >> m;
		while(m--)
		{
			cin >> k;
			sum+= k;
		}
		cout << sum << '\n';
	}
}