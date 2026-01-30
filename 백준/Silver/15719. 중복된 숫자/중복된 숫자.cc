#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie();

	int n, m;
	cin >> n;
	long long sum = 0;
	long long sum2 = 0;
	while (n--) {
		cin >> m;
		sum += n;
		sum2 += m;
	}
	cout << sum2 - sum;
}