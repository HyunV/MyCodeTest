#include <iostream>

using namespace std;

int main()
{
	int n, m;
	cin >> n;

	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> m;
		sum += m;
	}

	cout << ((sum / 3 != 0  && sum % 3 == 0) ? "yes" : "no");

}