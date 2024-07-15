#include <iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	int sum = 0;

	while(t--)
	{
		int x, y;
		cin >> x >> y;

		sum += y % x;		
	}
	cout << sum;
}