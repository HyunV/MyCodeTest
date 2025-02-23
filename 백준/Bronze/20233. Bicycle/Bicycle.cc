#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	const int nov = 21;
	int a, x, b, y, t;
	cin >> a >> x >> b >> y >> t;

	cout << a + (max(t - 30, 0) * x) * nov << ' ';
	cout << b + (max(t - 45, 0) * y) * nov;
}