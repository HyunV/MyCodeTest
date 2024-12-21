#include <iostream>
using namespace std;

int main()
{
	char c;

	int x, y, z;

	cin >> c;
	x = c - '0';
	cin >> c >> c;
	y = c - '0';
	cin >> c >> c;
	z = c - '0';

	cout << ((x + y == z) ? "YES" : "NO");
}