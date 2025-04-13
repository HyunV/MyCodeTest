#include <iostream>

using namespace std;

int main()
{
	int n, k;
	const int m = 10;
	cin >> n;
	while (n--)
	{
		bool mack = false;
		bool zack = false;
		for (int i = 0; i < m; ++i)
		{
			cin >> k;
			if (k == 17)
				zack = true;
			if (k == 18)
				mack = true;

			cout << k << ' ';
		}
		cout << '\n';

		if (mack && zack)
			cout << "both" << '\n';
		else if (mack)
			cout << "mack" << '\n';
		else if (zack)
			cout << "zack" << '\n';
		else
			cout << "none" << '\n';

		cout << '\n';
	}
}