#include <iostream>

using namespace std;

int main()
{
	const int N = 2;
	const int M = 18;

	int n, m;

	cin >> n >> m;

	if (n == N && m == M)
	{
		cout << "Special\n";
		return 0;
	}

	if (n < N)
	{
		cout << "Before\n";
		return 0;
	}
	else if (n > N)
	{
		cout << "After\n";
		return 0;
	}
	else {
		if (m < M)
		{
			cout << "Before\n";
			return 0;
		}
		else if (m > M)
		{
			cout << "After\n";
			return 0;
		}
	}
}