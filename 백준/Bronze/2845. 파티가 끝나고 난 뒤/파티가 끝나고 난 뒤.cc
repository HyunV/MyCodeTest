#include <iostream>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;

	int meter = n * m;
	
	int i = 5;
	int k;
	while(i--)
	{
		cin >> k;
		cout << k - meter << ' ';
	}
}