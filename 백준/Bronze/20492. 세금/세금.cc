#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int tax = n - ((n / 100) *22);
	int tax2 = ((n / 100) * 20);
	tax2 = n - ((tax2 / 100) * 22);
	cout << tax << ' ' << tax2;
}