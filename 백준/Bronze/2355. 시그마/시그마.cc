#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	//2분의 (m+n)(m-n+1)

	long long n, m;

	cin >> n >> m;

	if (n > m)
		swap(n, m);

	cout << ((m + n) * (m - n + 1)) / 2;
}