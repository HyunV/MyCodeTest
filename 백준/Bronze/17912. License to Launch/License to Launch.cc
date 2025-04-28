#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int minNum = 2147483647;
	int idx = 0;

	int n, m;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> m;

		if (minNum > m)
		{
			minNum = m;
			idx = i;
		}
	}
	cout << idx;
}