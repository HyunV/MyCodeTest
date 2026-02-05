#include <iostream>
using namespace std;

int main()
{
	int n, c, p;
	cin >> n >> c >> p;
	cout << (n - (c * p) <= 0 ? "yes" : "no");
}