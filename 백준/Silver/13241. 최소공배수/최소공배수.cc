#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	long long n, m;

	cin >> n >> m;

	//n이 더 큰쪽으로 배치
	if (n < m)
		swap(n, m);

	long long sum = n;
	while (true)
	{
		if (sum % m == 0)
			break;

		sum += n;
	}

	cout << sum;
}