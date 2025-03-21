#include <iostream>

using namespace std;

int main()
{
	int n, x, y, z;

	cin >> n;

	while (n--)
	{
		cin >> x >> y >> z;

		int minNum = min(x, y);
		minNum = min(minNum, z);

		cout << minNum << '\n';
	}
}