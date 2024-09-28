#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	n *= 5;
	n-=400;

	cout << n << '\n';
	if(n > 100)
		cout << -1;
	else if(n < 100)
		cout << 1;
	else
		cout << 0;
}