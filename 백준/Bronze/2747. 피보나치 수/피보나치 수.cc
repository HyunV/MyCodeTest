#include <iostream>

using namespace std;

long long f[46];

int main()
{
	f[1] = 1;
	int n;
	cin >> n;

	for (int i = 2; i <= n; i++)
		f[i] = f[i - 1] + f[i - 2];
	
	cout << f[n];
}