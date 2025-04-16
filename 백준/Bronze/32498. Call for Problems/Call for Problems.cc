#include <iostream>

using namespace std;

int main()
{
	int n, m;
	cin >> n;
	int sum = 0;
	while(n--)
	{
		cin>> m;
		if(m % 2 == 1)
			sum++;
	}
	cout << sum;
}