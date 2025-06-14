#include <iostream>

using namespace std;

int main()
{
	int n, m, num;

	long long k = 0;
	long long answer = 0;
	cin >> n;

	while(n--)
	{
		cin >> m;
		num = m == 0 ? -1 : 1;
		k += num;
		answer += k;
	}

	cout << answer;
}