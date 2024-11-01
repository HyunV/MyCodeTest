#include <iostream>

using namespace std;

int main()
{
	int n, m;
	cin >> n;
	while (n--)
	{
		cin >> m;
		if (m % 2)
			cout << m << " is odd\n";
		else
			cout << m << " is even\n";
	}
}