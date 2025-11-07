#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int tc;
	cin >> tc;

	int n, m;
	int a = 0, b = 0;
	while (tc--) {
		cin >> n >> m;
		
		if (n > m)
			a++;
		else if (m > n)
			b++;
	}
	cout << a << ' ' << b;
}