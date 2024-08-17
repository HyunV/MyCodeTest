#include <iostream>

using namespace std;

int main()
{
	int t;

	cin >> t;

	cout << fixed;
	cout.precision(1);

	while (t--)
	{
		int n, C = 0;
		double G = 0.f;

		cin >> n;

		int m;
		double k;
		while (n--)
		{
			cin >> m >> k;
			
			C += m;
			G += m * k;
		}
		cout << C << " " << G / C << '\n';
	}
}