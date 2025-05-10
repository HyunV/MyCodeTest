#include <iostream>

using namespace std;

int main()
{
	int n, m;
	cin >> n;
	
	int res = 0;
	while(n--)
	{
		cin >> m;
		res += (m /2) + (m%2);
	}
	cout << res;
}