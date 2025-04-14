#include <iostream>

using namespace std;

int main()
{

	int n = 5;
	int m;
	int sum = 0;
	while (n--)
	{
		cin >> m;
		sum ^= m;
	}
	cout << sum;
}