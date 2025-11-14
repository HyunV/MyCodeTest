#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	int n;
	cin >> n;
	n <<= 1;
	int length = sqrt(n);
	cout << (length << 2);
}