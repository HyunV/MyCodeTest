#include <iostream>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	int yard =	4840 * 5;
	cout << ((n * m) / yard) + 1;
}