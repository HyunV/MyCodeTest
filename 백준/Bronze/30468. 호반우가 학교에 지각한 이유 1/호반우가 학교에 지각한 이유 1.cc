#include <iostream>

using namespace std;

int main()
{
	int s, d, i, l, n;
	cin >> s >> d >> i >> l >> n;

	int avg = s + d + i + l;
	int mod = avg % 4;
	avg /= 4;

	int res = n - avg;
	if (res <= 0)
		cout << 0;
	else
		cout << 4 - mod + ((res - 1) * 4);
}