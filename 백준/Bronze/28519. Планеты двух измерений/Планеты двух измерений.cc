#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;

	int minNum = min(n, m);
	int maxNum = max(n, m);
		int sum = 0;

	if (maxNum > minNum)
		sum += 1;

	sum += minNum * 2;

	cout << sum;
}