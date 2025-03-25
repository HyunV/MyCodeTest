#include <iostream>

using namespace std;

int main()
{
	int n, m;

	cin >> n >> m;

	int sum = 0;
	if(n > m)
		sum += 500;	
	n *=50;
	m *= 10;

	sum = n - m + sum;

	cout << sum;

}