#include <iostream>

using namespace std;

int main()
{
	long long k;
	long long w;
	int m;
	cin >> k >> w >> m;

	int i = 0;
	while (true)
		if (k + m * i++ >= w)
			break;

	cout << --i;
}