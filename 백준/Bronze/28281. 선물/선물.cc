#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	int prev = 0, cur = 0;
	int minNum = 2147483647;
	while (n--)
	{
		prev = cur;
		cin >> cur;

		if (prev == 0)
			continue;

		minNum = min(prev * m + cur * m, minNum);
	}
	cout << minNum;
}