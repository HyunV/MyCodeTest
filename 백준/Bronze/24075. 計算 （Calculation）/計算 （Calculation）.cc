#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;

	cout << max(n + m, n-m) << '\n';
	cout << min(n+m, n-m) << '\n';

}