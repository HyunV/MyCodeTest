#include <iostream>

using namespace std;

int main()
{
	int n, k, a, b;
	cin >> n >> k >> a >> b;

	cout << ((k - 1) * b) + ((n - 1) * b);
	cout << ' ';
	cout << (n - 1) * a;
}