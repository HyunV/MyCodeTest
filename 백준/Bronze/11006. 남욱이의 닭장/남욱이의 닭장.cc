#include <iostream>

using namespace std;

int main()
{
	int t;

	cin >> t;

	int x, y, res;
	while(t--)
	{
		cin >> x >> y;
		res = y*2 -x;
		cout << res <<' '<<y -res << '\n';
	}
}