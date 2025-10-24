#include <iostream>

using namespace std;

int main()
{
	int n, m;
	cin >> n;
	int num;
	while (n--) {
		num = 0;
		cin >> m;

		for (int i = 1; i <= m; ++i) {
			if (m % i == 0) {
				num++;
			}
		}
		cout << m << ' ' << num << '\n';
	}
}