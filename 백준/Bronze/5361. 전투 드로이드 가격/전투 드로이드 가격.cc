#include <iostream>

using namespace std;

int main()
{
	cout << fixed;
	cout.precision(2);

	double arr[5] = { 350.34, 230.90, 190.55, 125.30, 180.90 };
	int n;
	double m, res;

	cin >> n;
	while (n--) {
		res = 0;
		for (int i = 0; i < 5; i++) {
			cin >> m;
			res += arr[i] * m;
		}
		cout <<'$'<< res << '\n';
	}
}