#include <iostream>

using namespace std;

int main()
{
	int n;

	string s[2] = { "NO BRAINS", "MMM BRAINS" };

	cin >> n;

	int x, y;
	while (n--)
	{
		cin >> x >> y;

		cout << ((x >= y) ? s[1] : s[0]) << '\n';
	}
}